#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__DISPLAYCLASS3_0__ADAPT_B__1_OFFSET UNITYSDK_OFFSET(0xADD6B00)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADD6520)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c__DisplayClass3_0_TypeDefinitionIndex = 71813;

	class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Single aspectRatio; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Adapt_b__1(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__DISPLAYCLASS3_0__ADAPT_B__1_OFFSET))(this, x);
		}
	};
}
