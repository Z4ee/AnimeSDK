#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Map_OnGroupEntitiesCreatedDelegate; }
namespace System { class Action; }

#define RPG_CLIENT_MAP_REFRESHENTITIESEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x174C7060)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_RefreshEntitiesExtraInfo_TypeDefinitionIndex = 60968;

	class Map_RefreshEntitiesExtraInfo : public ::System::Object
	{
	public:
		::System::Action* OnFinishCallback; // 0x10
		::RPG::Client::Map_OnGroupEntitiesCreatedDelegate* OnGroupEntitiesCreated; // 0x18
		::System::Boolean IsAsyncCreate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REFRESHENTITIESEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
