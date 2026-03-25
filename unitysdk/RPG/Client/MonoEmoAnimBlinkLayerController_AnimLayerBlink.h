#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ANIMLAYERBLINK_GET_BLINKWEIGHT_OFFSET UNITYSDK_OFFSET(0x9CE8140)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ANIMLAYERBLINK_SET_BLINKWEIGHT_OFFSET UNITYSDK_OFFSET(0x9CE8150)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ANIMLAYERBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE8160)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoAnimBlinkLayerController_AnimLayerBlink_TypeDefinitionIndex = 58277;

	class MonoEmoAnimBlinkLayerController_AnimLayerBlink : public ::System::Object
	{
	public:
		::System::Boolean EnableAutoBlink; // 0x10
		::System::Single MinBlinkGap; // 0x14
		::System::Single MaxBlinkGap; // 0x18
		::System::Single BlinkingDuration; // 0x1C
		::System::Single DoubleBlinkProbability; // 0x20
		::System::Single _BlinkWeight_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ANIMLAYERBLINK__CTOR_OFFSET))(this);
		}

		::System::Single get_BlinkWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ANIMLAYERBLINK_GET_BLINKWEIGHT_OFFSET))(this);
		}

		::System::Void set_BlinkWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ANIMLAYERBLINK_SET_BLINKWEIGHT_OFFSET))(this, value);
		}
	};
}
