#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_METHOD_3_D467909CC58130D6_OFFSET UNITYSDK_OFFSET(0x1D313C60)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_METHOD_3_D6A322B6D5D4D7AC_OFFSET UNITYSDK_OFFSET(0x1D313C00)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D313C50)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbilityTargetSelector_SlamTargetConfig_TypeDefinitionIndex = 10281;

	class RoadRashGameAbilityTargetSelector_SlamTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::FixPoint MinRadius; // 0x10
		::RPG::GameCore::FixPoint MaxRadius; // 0x18
		::RPG::GameCore::FixPoint FanAngle; // 0x20
		::System::String* MinRadiusAdditiveAttributeName; // 0x28
		::System::String* MaxRadiusAdditiveAttributeName; // 0x30
		::System::String* FanAngleAttributeName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6A322B6D5D4D7AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_METHOD_3_D6A322B6D5D4D7AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D467909CC58130D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_SLAMTARGETCONFIG_METHOD_3_D467909CC58130D6_OFFSET))(a1, a2);
		}
	};
}
