#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }

#define RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG_BATCHANIMATIONMASKBONEMASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D2C70)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig_TypeDefinitionIndex = 60150;

	class BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::BatchAnimationBoneMask* MaskBoneMask; // 0x10
		::System::Single MaskWeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG_BATCHANIMATIONMASKBONEMASKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
