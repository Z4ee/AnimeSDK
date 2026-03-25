#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DepthOfFieldDebugMethod.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_METHOD_2_08B71824168C8C01_OFFSET UNITYSDK_OFFSET(0xAB89000)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_METHOD_2_B18EA9401F533EFA_OFFSET UNITYSDK_OFFSET(0x8A910)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A8C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFParameter_TypeDefinitionIndex = 39364;

	struct alignas(4) DOFParameter
	{
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethod DofDebug; // 0x10
		::System::Boolean RPGDepthOfFieldState; // 0x14
		::System::Boolean FocusDistanceState; // 0x15
		::System::Single FocusDistance; // 0x18
		::System::Boolean DisableAutoDistance; // 0x1C
		::System::Boolean CocMethodTypeState; // 0x1D
		::System::Boolean CocMethodType; // 0x1E
		::RPG::CustomRP::RPGDepthOfField_CoCMethod DisplayCocMethodType; // 0x20
		::System::Boolean NearTransitionRegionState; // 0x24
		::System::Single NearTransitionRegion; // 0x28
		::System::Boolean FarTransitionRegionState; // 0x2C
		::System::Single FarTransitionRegion; // 0x30
		::System::Boolean SensorWidthState; // 0x34
		::System::Single SensorWidth; // 0x38
		::System::Boolean FStopState; // 0x3C
		::System::Single FStop; // 0x40
		::System::Boolean CocBlurUnitState; // 0x44
		::System::Single CocBlurUnit; // 0x48

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_B18EA9401F533EFA(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_METHOD_2_B18EA9401F533EFA_OFFSET))(this, a1);
		}

		static ::RPGTools::Timeline::PostProcessing::DOFParameter Method_2_08B71824168C8C01(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::DOFParameter(*)(::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_METHOD_2_08B71824168C8C01_OFFSET))(a1);
		}
	};
}
