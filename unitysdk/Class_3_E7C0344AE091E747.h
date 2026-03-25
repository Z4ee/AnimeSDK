#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyCurrentSkillDelayCost; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E7C0344AE091E747_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89AEE70)
#define CLASS_3_E7C0344AE091E747__CTOR_OFFSET UNITYSDK_OFFSET(0x89AEE40)

inline static constexpr unsigned int Class_3_E7C0344AE091E747_TypeDefinitionIndex = 44178;

class Class_3_E7C0344AE091E747 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyCurrentSkillDelayCost*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCurrentSkillDelayCost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCurrentSkillDelayCost*))((::PBYTE)hIl2Cpp + CLASS_3_E7C0344AE091E747__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7C0344AE091E747_ONTASKBEGIN_OFFSET))(this);
	}
};
