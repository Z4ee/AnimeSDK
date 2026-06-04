#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_DRINKMAKERGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB8186E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerGlobalConfig_TypeDefinitionIndex = 59560;

	class DrinkMakerGlobalConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single AddIngredientAnimationTime; // 0x18
		::UnityEngine::AnimationCurve* AddIngredientHeightCurve; // 0x20
		::System::Single AddIngredientDefaultMixAnimationTime; // 0x28
		::UnityEngine::AnimationCurve* AddIngredientDefaultMixCurve; // 0x30
		::System::Single AddIngredientDefaultMixFactor; // 0x38
		::System::Single MixAnimationTime; // 0x3C
		::UnityEngine::AnimationCurve* MixCurve; // 0x40
		::System::Single MixPhyIceTangentForceEffectTime; // 0x48
		::System::Single MixPhyIceTangentForceMax; // 0x4C
		::UnityEngine::AnimationCurve* MixPhyIceGTangentForceCurve; // 0x50
		::System::Single PhyIceMinDrag; // 0x58
		::System::Single PhyIceMaxDrag; // 0x5C
		::UnityEngine::AnimationCurve* PhyIceDragCurve; // 0x60
		::System::Single MaxBuoyancyScale; // 0x68
		::System::Single OffsetUnderLiquid; // 0x6C
		::System::Single AddIngredientImpactMaxDistance; // 0x70
		::System::Single MaxAddIngredientImpactScale; // 0x74
		::UnityEngine::AnimationCurve* AddIngredientImpactForceCurve; // 0x78
		::System::Single SurfaceDistrubedTime; // 0x80
		::UnityEngine::AnimationCurve* SurfaceDistrubedCurveWhenAddIngredient; // 0x88
		::UnityEngine::AnimationCurve* SurfaceDistrubedCurveWhenMix; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERGLOBALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
