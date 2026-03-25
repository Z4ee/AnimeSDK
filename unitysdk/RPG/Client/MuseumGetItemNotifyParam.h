#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumExhibitItemData; }

#define RPG_CLIENT_MUSEUMGETITEMNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB8C90)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumGetItemNotifyParam_TypeDefinitionIndex = 53964;

	class MuseumGetItemNotifyParam : public ::System::Object
	{
	public:
		::RPG::Client::MuseumExhibitItemData* ItemData; // 0x10
		::System::UInt32 RewardTargetID; // 0x18
		::System::Boolean ShowRenewProgress; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMGETITEMNOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
