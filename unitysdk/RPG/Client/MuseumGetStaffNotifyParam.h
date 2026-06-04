#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumStaffData; }

#define RPG_CLIENT_MUSEUMGETSTAFFNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC20B8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumGetStaffNotifyParam_TypeDefinitionIndex = 62032;

	class MuseumGetStaffNotifyParam : public ::System::Object
	{
	public:
		::RPG::Client::MuseumStaffData* StaffData; // 0x10
		::System::UInt32 RewardTargetID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMGETSTAFFNOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
