#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xA813340)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleTurnUpdateNotify_TypeDefinitionIndex = 60597;

	class MarbleBattleTurnUpdateNotify : public ::System::Object
	{
	public:
		::System::Action* Callback; // 0x10
		::System::Boolean IsEnemyTurn; // 0x18
		::System::Int32 Round; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETURNUPDATENOTIFY__CTOR_OFFSET))(this);
		}
	};
}
