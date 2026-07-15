#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_BatchAnimationInfo.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_MemberConfig.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_PossessionConfig.h"

namespace RPG::Client::Subway { class AirlineSubwayWay_MemberRandomConfig; }
namespace System { class String; }

#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_BATCHANIMATIONMEMBERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C49D80)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_BatchAnimationMemberConfig_TypeDefinitionIndex = 76775;

	class AirlineSubwayWay_BatchAnimationMemberConfig : public ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::String* PrefabAnimGroupPath; // 0x20
		::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_MemberRandomConfig*>* RandomConfigs; // 0x28
		::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_BatchAnimationInfo>* AnimationInfos; // 0x30
		::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig>* PossessionConfigs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_BATCHANIMATIONMEMBERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
