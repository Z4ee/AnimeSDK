#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C530700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS11_0___REMOVEBILLBOARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1C530CA0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsEntityTrackService___c__DisplayClass11_0_TypeDefinitionIndex = 78995;

	class LimaoNewsEntityTrackService___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* __4__this; // 0x10
		::Struct_2_6A75E669C858F984 billboardIconParam; // 0x18
		::System::UInt32 subMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void __RemoveBillboardInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS11_0___REMOVEBILLBOARDINFO_B__0_OFFSET))(this);
		}
	};
}
