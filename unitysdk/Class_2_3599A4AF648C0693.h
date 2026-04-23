#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DestroyCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3599A4AF648C0693_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9519BA0)
#define CLASS_2_3599A4AF648C0693_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x9519DE0)
#define CLASS_2_3599A4AF648C0693_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x9519C30)
#define CLASS_2_3599A4AF648C0693_ONSKIP_OFFSET UNITYSDK_OFFSET(0x9519DF0)
#define CLASS_2_3599A4AF648C0693_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9519BE0)
#define CLASS_2_3599A4AF648C0693_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9519D30)
#define CLASS_2_3599A4AF648C0693_TICK_OFFSET UNITYSDK_OFFSET(0x9519D80)
#define CLASS_2_3599A4AF648C0693__CTOR_OFFSET UNITYSDK_OFFSET(0x9519B90)

inline static constexpr unsigned int Class_2_3599A4AF648C0693_TypeDefinitionIndex = 53558;

class Class_2_3599A4AF648C0693 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DestroyCharacter* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3599A4AF648C0693_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}
};
