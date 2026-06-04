#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OpenTimeRewindSnapPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AD218245F2578276_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143D48A0)
#define CLASS_2_AD218245F2578276_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143D4BA0)
#define CLASS_2_AD218245F2578276_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143D48F0)
#define CLASS_2_AD218245F2578276_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143D4AF0)
#define CLASS_2_AD218245F2578276_TICK_OFFSET UNITYSDK_OFFSET(0x143D4B40)
#define CLASS_2_AD218245F2578276__CTOR_OFFSET UNITYSDK_OFFSET(0x143D4890)

inline static constexpr unsigned int Class_2_AD218245F2578276_TypeDefinitionIndex = 49875;

class Class_2_AD218245F2578276 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::OpenTimeRewindSnapPage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindSnapPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindSnapPage*))((::PBYTE)hIl2Cpp + CLASS_2_AD218245F2578276__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD218245F2578276_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD218245F2578276_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD218245F2578276_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD218245F2578276_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD218245F2578276_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
