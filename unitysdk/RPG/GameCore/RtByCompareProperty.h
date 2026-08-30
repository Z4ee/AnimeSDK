#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_380092D98CB34F8B_OFFSET UNITYSDK_OFFSET(0x1CCDB080)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_7FDE22F816864EA8_OFFSET UNITYSDK_OFFSET(0x1CCDAD50)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_920AD8E1998E11B6_OFFSET UNITYSDK_OFFSET(0x1CCDADA0)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_F8626D8AEF83F9AD_OFFSET UNITYSDK_OFFSET(0x1CCDB0C0)
#define RPG_GAMECORE_RTBYCOMPAREPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDAD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCompareProperty_TypeDefinitionIndex = 23937;

	class RtByCompareProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean ExactlyEqual; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7FDE22F816864EA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCompareProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCompareProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_7FDE22F816864EA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_920AD8E1998E11B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCompareProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCompareProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_920AD8E1998E11B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_380092D98CB34F8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCompareProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCompareProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_380092D98CB34F8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8626D8AEF83F9AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCompareProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCompareProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCOMPAREPROPERTY_METHOD_4_F8626D8AEF83F9AD_OFFSET))(a1, a2);
		}
	};
}
