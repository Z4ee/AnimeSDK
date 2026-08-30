#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/FloatAxis.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Effect_Transform; }

#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_METHOD_1_5A837F5CC2870EA0_OFFSET UNITYSDK_OFFSET(0xE74D4A0)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_METHOD_1_9E3F716220C7A711_OFFSET UNITYSDK_OFFSET(0xE74D560)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xE74D550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineOverrideEffectTransformOffsetParams_TypeDefinitionIndex = 57514;

	class TimelineOverrideEffectTransformOffsetParams : public ::System::Object
	{
	public:
		::RPG::Client::Effect_Transform_OffsetType TransOffsetType; // 0x10
		::System::Boolean UseLocalTransform; // 0x14
		::System::Boolean FloatObjectSpace; // 0x15
		::RPG::Client::FloatAxis FloAxis; // 0x18
		::System::Single FloatFrequency; // 0x1C
		::System::Single FloatDistance; // 0x20
		::System::Single OffsetNoise3DSpeed; // 0x24
		::System::Single RandomMove3DBoxSize; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* Method_1_5A837F5CC2870EA0(::RPG::Client::Effect_Transform* a1)
		{
			return ((::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams*(*)(::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_METHOD_1_5A837F5CC2870EA0_OFFSET))(a1);
		}

		::System::Void Method_1_9E3F716220C7A711(::RPG::Client::Effect_Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_METHOD_1_9E3F716220C7A711_OFFSET))(this, a1);
		}
	};
}
