#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Service { class LimaoNewsTrackService; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA73D770)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0___REMOVEBILLBOARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0xA73E540)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsTrackService___c__DisplayClass15_0_TypeDefinitionIndex = 68506;

	class LimaoNewsTrackService___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::MVVM::Service::LimaoNewsTrackService* __4__this; // 0x10
		::Struct_2_6A75E669C858F984 billboardIconParam; // 0x18
		::System::UInt32 subMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __RemoveBillboardInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS15_0___REMOVEBILLBOARDINFO_B__0_OFFSET))(this);
		}
	};
}
