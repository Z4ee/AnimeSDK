#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Airship_AirshipEffectConfig; }

#define RPG_CLIENT_AIRLINEWAY_CLASS_1_5F7BD4F39335B2FB__CTOR_OFFSET UNITYSDK_OFFSET(0xC7253C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay_Class_1_5F7BD4F39335B2FB_TypeDefinitionIndex = 59912;

	class AirlineWay_Class_1_5F7BD4F39335B2FB : public ::System::Object
	{
	public:
		::RPG::Client::Airship_AirshipEffectConfig* HPBAMMEFDMK; // 0x10
		::System::Int32 MDBEIMFCMOG; // 0x18
		::System::Single BJOCBPFKJDP; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_CLASS_1_5F7BD4F39335B2FB__CTOR_OFFSET))(this);
		}
	};
}
