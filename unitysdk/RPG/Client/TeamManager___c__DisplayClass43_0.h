#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MemberData; }
namespace RPG::Client { class TeamManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A393D40)
#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS43_0___CREATEMEMBERENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x1A3983E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___c__DisplayClass43_0_TypeDefinitionIndex = 60883;

	class TeamManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* onAsyncLoadFinish; // 0x10
		::RPG::Client::MemberData* memberData; // 0x18
		::RPG::Client::TeamManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateMemberEntity_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS43_0___CREATEMEMBERENTITY_B__0_OFFSET))(this, a1);
		}
	};
}
