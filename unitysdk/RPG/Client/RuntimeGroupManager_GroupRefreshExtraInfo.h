#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_CustomPredicatorType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_GroupRefreshReason.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GROUPREFRESHEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB1375A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_GroupRefreshExtraInfo_TypeDefinitionIndex = 57251;

	class RuntimeGroupManager_GroupRefreshExtraInfo : public ::System::Object
	{
	public:
		::System::Boolean IsAsync; // 0x10
		::RPG::Client::RuntimeGroupManager_GroupRefreshReason Reason; // 0x14
		::RPG::Client::RuntimeGroupManager_CustomPredicatorType PredicatorType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GROUPREFRESHEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
