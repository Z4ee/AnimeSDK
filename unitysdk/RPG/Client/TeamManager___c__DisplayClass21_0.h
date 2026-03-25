#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MemberData; }
namespace RPG::Client { class TeamManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5766D0)
#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS21_0___CREATEMEMBERENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xA5766E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___c__DisplayClass21_0_TypeDefinitionIndex = 49249;

	class TeamManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action* onAsyncLoadFinish; // 0x10
		::RPG::Client::TeamManager* __4__this; // 0x18
		::RPG::Client::MemberData* curMemberData; // 0x20
		::System::Boolean memberLoadFinish; // 0x28
		::System::Int32 memberDataIdx; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateMemberEntity_b__0(::RPG::GameCore::GameEntity* member)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS21_0___CREATEMEMBERENTITY_B__0_OFFSET))(this, member);
		}
	};
}
