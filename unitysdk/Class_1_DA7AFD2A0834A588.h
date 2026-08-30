#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET UNITYSDK_OFFSET(0x16374850)
#define CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET UNITYSDK_OFFSET(0x163748A0)

inline static constexpr unsigned int Class_1_DA7AFD2A0834A588_TypeDefinitionIndex = 57847;

class Class_1_DA7AFD2A0834A588 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* BPLHBABBLIO; // 0x10
	::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* JPHPCHAHHOF; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x20
	::RPG::GameCore::FixPoint MJEKNGAOGDI; // 0x28
	::System::Int32 JMBHCPLJNNM; // 0x30
	::RPG::GameCore::RedirectSkillTargetAffectTeam JKNCJPCLCCP; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET))(this);
	}
};
