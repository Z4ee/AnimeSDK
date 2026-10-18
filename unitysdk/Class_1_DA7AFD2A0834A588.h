#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET UNITYSDK_OFFSET(0xB25E480)
#define CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET UNITYSDK_OFFSET(0xB25E4E0)

inline static constexpr unsigned int Class_1_DA7AFD2A0834A588_TypeDefinitionIndex = 57693;

class Class_1_DA7AFD2A0834A588 : public ::System::Object
{
public:
	::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* JPHPCHAHHOF; // 0x10
	::RPG::GameCore::GameEntity* BPLHBABBLIO; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x20
	::RPG::GameCore::RedirectSkillTargetAffectTeam JKNCJPCLCCP; // 0x28
	::System::Int32 JMBHCPLJNNM; // 0x2C
	::RPG::GameCore::FixPoint MJEKNGAOGDI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7AFD2A0834A588_CLEAR_OFFSET))(this);
	}
};
