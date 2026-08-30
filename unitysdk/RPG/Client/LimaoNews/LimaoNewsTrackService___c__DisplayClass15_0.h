#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsTrackService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD493990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0___REMOVEBILLBOARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0xD494C70)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsTrackService___c__DisplayClass15_0_TypeDefinitionIndex = 79020;

	class LimaoNewsTrackService___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsTrackService* __4__this; // 0x10
		::System::UInt32 subMissionID; // 0x18
		::Struct_2_6A75E669C858F984 billboardIconParam; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __RemoveBillboardInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0___REMOVEBILLBOARDINFO_B__0_OFFSET))(this);
		}
	};
}
