#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDynamicSkillButtonInput; }

#define CLASS_2_80944EEF96A9E96A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163FE4F0)
#define CLASS_2_80944EEF96A9E96A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163FE610)
#define CLASS_2_80944EEF96A9E96A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163FE5C0)
#define CLASS_2_80944EEF96A9E96A_TICK_OFFSET UNITYSDK_OFFSET(0x163FE6C0)
#define CLASS_2_80944EEF96A9E96A__CTOR_OFFSET UNITYSDK_OFFSET(0x163FE430)

inline static constexpr unsigned int Class_2_80944EEF96A9E96A_TypeDefinitionIndex = 55996;

class Class_2_80944EEF96A9E96A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::WaitDynamicSkillButtonInput* OFKGLJOAMLD; // 0x28
	::System::Single EFKCJMFANEB; // 0x30
	::System::Single DKOFFPPGEFI; // 0x34

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
