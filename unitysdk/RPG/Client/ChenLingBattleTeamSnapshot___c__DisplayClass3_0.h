#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1C37B065CBC515F;
namespace RPG::Client::ChenLingBattle { class Policy; }

#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0__ATTACHPOLICYSKILLS_B__0_OFFSET UNITYSDK_OFFSET(0x93565F0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9355020)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleTeamSnapshot___c__DisplayClass3_0_TypeDefinitionIndex = 49837;

	class ChenLingBattleTeamSnapshot___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Policy* policy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AttachPolicySkills_b__0(::Class_1_B1C37B065CBC515F* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B1C37B065CBC515F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0__ATTACHPOLICYSKILLS_B__0_OFFSET))(this, s);
		}
	};
}
