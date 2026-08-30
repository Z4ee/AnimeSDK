#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamManager; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE18F4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___c__DisplayClass15_0_TypeDefinitionIndex = 60879;

	class TeamManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* onLoadFinish; // 0x10
		::RPG::Client::TeamManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}
	};
}
