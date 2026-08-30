#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_5168ADE81D9B4C0F_OFFSET UNITYSDK_OFFSET(0x1D49EA60)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_5B34F43D2DCBD285_OFFSET UNITYSDK_OFFSET(0x1D49EAA0)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_8A67B61D1181E2E6_OFFSET UNITYSDK_OFFSET(0x1D49ED80)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_CE40C33B58921310_OFFSET UNITYSDK_OFFSET(0x1D49EDB0)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49EA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByComparePropertyRatio_TypeDefinitionIndex = 23938;

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

		static ::System::Void Method_4_5168ADE81D9B4C0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByComparePropertyRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByComparePropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_5168ADE81D9B4C0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B34F43D2DCBD285(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByComparePropertyRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByComparePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_5B34F43D2DCBD285_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A67B61D1181E2E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByComparePropertyRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByComparePropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_8A67B61D1181E2E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE40C33B58921310(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByComparePropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByComparePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTYRATIO_METHOD_4_CE40C33B58921310_OFFSET))(a1, a2);
		}
	};
}
