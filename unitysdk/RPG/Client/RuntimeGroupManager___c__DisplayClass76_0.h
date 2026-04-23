#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace RPG::Client { class RuntimeGroupManager; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB13B170)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS76_0___TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xB1447D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass76_0_TypeDefinitionIndex = 57266;

	class RuntimeGroupManager___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::RPG::Client::Map_RefreshEntitiesExtraInfo* extraInfo; // 0x10
		::RPG::Client::RuntimeGroupManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void __TriggerHoyoGroupEntitiesRefreshWithScreenTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS76_0___TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_B__0_OFFSET))(this);
		}
	};
}
