#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET UNITYSDK_OFFSET(0x1709B360)
#define CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET UNITYSDK_OFFSET(0x1709B3B0)

inline static constexpr unsigned int Class_1_DA7AFD2A0834A588_TypeDefinitionIndex = 55124;

class Class_1_DA7AFD2A0834A588 : public ::System::Object
{
public:
	::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::RPG::GameCore::RedirectSkillTargetAffectTeam Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET))(this);
	}
};
