#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowGuideTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_63690AFABF015C8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1104A4D0)
#define CLASS_2_63690AFABF015C8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1104A510)
#define CLASS_2_63690AFABF015C8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1104A6E0)
#define CLASS_2_63690AFABF015C8A_TICK_OFFSET UNITYSDK_OFFSET(0x1104A730)
#define CLASS_2_63690AFABF015C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1104A4C0)

inline static constexpr unsigned int Class_2_63690AFABF015C8A_TypeDefinitionIndex = 47344;

class Class_2_63690AFABF015C8A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowGuideTalk* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideTalk*))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63690AFABF015C8A_TICK_OFFSET))(this, a1);
	}
};
