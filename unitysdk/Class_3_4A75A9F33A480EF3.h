#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupPropagateBeingAttackInTeam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4A75A9F33A480EF3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12127D30)
#define CLASS_3_4A75A9F33A480EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x12127D00)

inline static constexpr unsigned int Class_3_4A75A9F33A480EF3_TypeDefinitionIndex = 50955;

class Class_3_4A75A9F33A480EF3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupPropagateBeingAttackInTeam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupPropagateBeingAttackInTeam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + CLASS_3_4A75A9F33A480EF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A75A9F33A480EF3_ONTASKBEGIN_OFFSET))(this);
	}
};
