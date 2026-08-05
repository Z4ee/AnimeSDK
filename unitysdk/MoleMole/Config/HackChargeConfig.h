#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HACKCHARGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF4A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackChargeConfig_TypeDefinitionIndex = 68436;

	class HackChargeConfig : public ::System::Object
	{
	public:
		// static const ::System::Single GroupLabelWidth1; // 0x0
		::System::String* Key; // 0x10
		::System::Single RangeChargePressDuration; // 0x18
		::System::Single ChargeCooldown; // 0x1C
		::System::Single PulseChargeMaxDistance; // 0x20
		::System::Single RangeChargeInitDistance; // 0x24
		::System::Single RangeChargeMaxDistance; // 0x28
		::System::Single RangeChargeExpandSpeed; // 0x2C
		::System::String* SourcePosAttachPoint; // 0x30
		::System::String* TargetPosAttachPoint; // 0x38
		::System::String* PulseChargeTipTextKey; // 0x40
		::UnityEngine::LayerMask ObstacleBlockLayerMask; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* ObstacleIgnoreTags; // 0x50
		::System::String* PulseChargeEffectKey; // 0x58
		::System::String* PulseChargeEffectAnim; // 0x60
		::System::String* PulseChargeEffectAttachPointOnSource; // 0x68
		::System::String* PulseChargeEffectAttachPointOnTarget; // 0x70
		::System::String* RangeChargeEffectKey; // 0x78
		::System::String* RangeChargeEffectAttachPointOnSource; // 0x80
		::System::String* LightningChainEffectKey; // 0x88
		::System::String* OverlayOutlineConfigKey; // 0x90
		::System::String* OverlayOutlineDefaultKey; // 0x98
		::System::String* OverlayOutlineOutOfRangeKey; // 0xA0
		::System::String* OverlayOutlineInRangeKey; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
