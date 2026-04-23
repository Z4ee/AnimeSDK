#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_5B34F43D2DCBD285_OFFSET UNITYSDK_OFFSET(0x18DC8570)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_B6804D66C524FED4_OFFSET UNITYSDK_OFFSET(0x18DC84A0)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC8520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByComparePropertyRatio_TypeDefinitionIndex = 23217;

	class RtByComparePropertyRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean ExactlyEqual; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B6804D66C524FED4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByComparePropertyRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByComparePropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_B6804D66C524FED4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B34F43D2DCBD285(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByComparePropertyRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByComparePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_5B34F43D2DCBD285_OFFSET))(a1, a2);
		}
	};
}
