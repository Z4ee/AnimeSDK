#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_METHOD_3_57433113977ACC7F_OFFSET UNITYSDK_OFFSET(0x16F413A0)
#define RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_METHOD_3_712674993A71D23B_OFFSET UNITYSDK_OFFSET(0x16F41320)
#define RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F41370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetLoopHitFeatureParam_TypeDefinitionIndex = 19982;

	class AdvSetLoopHitFeatureParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HitInterval; // 0x18
		::RPG::GameCore::DynamicFloat* HitIntervalNoise; // 0x20
		::RPG::GameCore::DynamicFloat* HitNormalizedTimeStart; // 0x28
		::RPG::GameCore::DynamicFloat* HitNormalizedTimeStartNoise; // 0x30
		::RPG::GameCore::DynamicFloat* HitNormalizedTransitionDuration; // 0x38
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_712674993A71D23B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetLoopHitFeatureParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetLoopHitFeatureParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_METHOD_3_712674993A71D23B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57433113977ACC7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetLoopHitFeatureParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetLoopHitFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_METHOD_3_57433113977ACC7F_OFFSET))(a1, a2);
		}
	};
}
