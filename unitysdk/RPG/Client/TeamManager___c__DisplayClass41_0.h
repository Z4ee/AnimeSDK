#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MemberData; }
namespace RPG::Client { class TeamManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5727B0)
#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS41_0___CREATEMEMBERENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xA576A60)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___c__DisplayClass41_0_TypeDefinitionIndex = 49250;

	class TeamManager___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::TeamManager* __4__this; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* onAsyncLoadFinish; // 0x18
		::RPG::Client::MemberData* memberData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateMemberEntity_b__0(::RPG::GameCore::GameEntity* memberEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS41_0___CREATEMEMBERENTITY_B__0_OFFSET))(this, memberEntity);
		}
	};
}
