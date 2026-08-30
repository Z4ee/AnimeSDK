#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CheckAvatarSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A9329585893D5038_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184FCB20)
#define CLASS_2_A9329585893D5038_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184FCB60)
#define CLASS_2_A9329585893D5038_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184FCBB0)
#define CLASS_2_A9329585893D5038_TICK_OFFSET UNITYSDK_OFFSET(0x184FCC00)
#define CLASS_2_A9329585893D5038__CTOR_OFFSET UNITYSDK_OFFSET(0x184FCB10)

inline static constexpr unsigned int Class_2_A9329585893D5038_TypeDefinitionIndex = 58166;

class Class_2_A9329585893D5038 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CheckAvatarSkill* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckAvatarSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckAvatarSkill*))((::PBYTE)hIl2Cpp + CLASS_2_A9329585893D5038__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9329585893D5038_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9329585893D5038_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9329585893D5038_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9329585893D5038_TICK_OFFSET))(this, a1);
	}
};
