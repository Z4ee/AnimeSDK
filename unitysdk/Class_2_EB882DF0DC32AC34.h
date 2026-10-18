#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6CEF1A71F84C86B8.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"

namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_EB882DF0DC32AC34_METHOD_2_0C10916F1BB68635_OFFSET UNITYSDK_OFFSET(0x166506E0)
#define CLASS_2_EB882DF0DC32AC34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16650950)
#define CLASS_2_EB882DF0DC32AC34_METHOD_2_CF6CABF5E85E9CF4_OFFSET UNITYSDK_OFFSET(0x166506F0)
#define CLASS_2_EB882DF0DC32AC34_METHOD_2_DC86B35C29D08DAF_OFFSET UNITYSDK_OFFSET(0x16650740)
#define CLASS_2_EB882DF0DC32AC34__CTOR_OFFSET UNITYSDK_OFFSET(0x166506D0)

inline static constexpr unsigned int Class_2_EB882DF0DC32AC34_TypeDefinitionIndex = 56890;

class Class_2_EB882DF0DC32AC34 : public ::Class_1_6CEF1A71F84C86B8
{
public:
	::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleEventCreateType Method_2_0C10916F1BB68635()
	{
		return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_METHOD_2_0C10916F1BB68635_OFFSET))(this);
	}

	::System::Void Method_2_CF6CABF5E85E9CF4(::RPG::GameCore::BattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_METHOD_2_CF6CABF5E85E9CF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC86B35C29D08DAF(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_METHOD_2_DC86B35C29D08DAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
