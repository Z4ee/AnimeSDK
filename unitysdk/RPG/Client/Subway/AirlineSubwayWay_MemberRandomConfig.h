#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_MEMBERRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC93F1A0)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_MemberRandomConfig_TypeDefinitionIndex = 74387;

	class AirlineSubwayWay_MemberRandomConfig : public ::System::Object
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* Feature; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_MEMBERRANDOMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
