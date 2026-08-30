#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET UNITYSDK_OFFSET(0x18862490)
#define CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET UNITYSDK_OFFSET(0x188624E0)

inline static constexpr unsigned int Class_1_DA7AFD2A0834A588_TypeDefinitionIndex = 57847;

class Class_1_DA7AFD2A0834A588 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x10
	::RPG::GameCore::GameEntity* BPLHBABBLIO; // 0x18
	::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* JPHPCHAHHOF; // 0x20
	::RPG::GameCore::FixPoint MJEKNGAOGDI; // 0x28
	::RPG::GameCore::RedirectSkillTargetAffectTeam JKNCJPCLCCP; // 0x30
	::System::Int32 JMBHCPLJNNM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET))(this);
	}
};
