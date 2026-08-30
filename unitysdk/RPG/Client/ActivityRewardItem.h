#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYREWARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B878170)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardItem_TypeDefinitionIndex = 61789;

	class ActivityRewardItem : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 Count; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDITEM__CTOR_OFFSET))(this);
		}
	};
}
