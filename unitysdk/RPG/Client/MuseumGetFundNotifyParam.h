#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSEUMGETFUNDNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB8C80)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumGetFundNotifyParam_TypeDefinitionIndex = 53965;

	class MuseumGetFundNotifyParam : public ::System::Object
	{
	public:
		::System::UInt32 RewardTargetID; // 0x10
		::System::UInt32 FundNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMGETFUNDNOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
