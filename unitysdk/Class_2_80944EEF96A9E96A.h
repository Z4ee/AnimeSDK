#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDynamicSkillButtonInput; }

#define CLASS_2_80944EEF96A9E96A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF03200)
#define CLASS_2_80944EEF96A9E96A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF032C0)
#define CLASS_2_80944EEF96A9E96A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF03270)
#define CLASS_2_80944EEF96A9E96A_TICK_OFFSET UNITYSDK_OFFSET(0xAF03370)
#define CLASS_2_80944EEF96A9E96A__CTOR_OFFSET UNITYSDK_OFFSET(0xAF03140)

inline static constexpr unsigned int Class_2_80944EEF96A9E96A_TypeDefinitionIndex = 52125;

class Class_2_80944EEF96A9E96A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::WaitDynamicSkillButtonInput* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + CLASS_2_80944EEF96A9E96A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80944EEF96A9E96A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80944EEF96A9E96A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80944EEF96A9E96A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_80944EEF96A9E96A_TICK_OFFSET))(this, a1);
	}
};
