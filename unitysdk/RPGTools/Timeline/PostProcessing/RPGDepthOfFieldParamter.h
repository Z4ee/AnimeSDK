#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_METHOD_1_3BB56FCCFBEBE786_OFFSET UNITYSDK_OFFSET(0xD044DB0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_METHOD_1_A4EFC29299D9E71E_OFFSET UNITYSDK_OFFSET(0xD044B80)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_METHOD_1_C4F5DCDE1EBB7C70_OFFSET UNITYSDK_OFFSET(0xD044CD0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD044CA0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RPGDepthOfFieldParamter_TypeDefinitionIndex = 45832;

	class RPGDepthOfFieldParamter : public ::System::Object
	{
	public:
		::System::Boolean RPGDepthOfFieldState; // 0x10
		::System::Boolean FocusDistanceState; // 0x11
		::System::Single FocusDistance; // 0x14
		::System::Boolean CocMethodTypeState; // 0x18
		::RPG::CustomRP::RPGDepthOfField_CoCMethod CocMethodType; // 0x1C
		::System::Boolean NearTransitionRegionState; // 0x20
		::System::Single NearTransitionRegion; // 0x24
		::System::Boolean FarTransitionRegionState; // 0x28
		::System::Single FarTransitionRegion; // 0x2C
		::System::Boolean SensorWidthState; // 0x30
		::System::Single SensorWidth; // 0x34
		::System::Boolean FStopState; // 0x38
		::System::Single FStop; // 0x3C
		::System::Boolean CocBlurUnitState; // 0x40
		::System::Single CocBlurUnit; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* Method_1_A4EFC29299D9E71E(::System::Single a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_METHOD_1_A4EFC29299D9E71E_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* Method_1_3BB56FCCFBEBE786(::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*(*)(::PVOID, ::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_METHOD_1_3BB56FCCFBEBE786_OFFSET))(this, a1);
		}

		::System::Void Method_1_C4F5DCDE1EBB7C70(::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_METHOD_1_C4F5DCDE1EBB7C70_OFFSET))(this, a1);
		}
	};
}
