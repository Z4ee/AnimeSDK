#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrackExtensionMonoPlugin; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHJUMPDATA_JUMPLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6ADF0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashJumpData_JumpLink_TypeDefinitionIndex = 75465;

	class MonoRoadRashJumpData_JumpLink : public ::System::Object
	{
	public:
		::RPG::Client::TrackExtensionMonoPlugin* FromRoad; // 0x10
		::RPG::Client::TrackExtensionMonoPlugin* ToRoad; // 0x18
		::System::Single MinLandDistance; // 0x20
		::System::Single MaxLandDistance; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHJUMPDATA_JUMPLINK__CTOR_OFFSET))(this);
		}
	};
}
