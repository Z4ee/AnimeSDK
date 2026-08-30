#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_29B60B545947C1E7_OFFSET UNITYSDK_OFFSET(0x1BBC02E0)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_65C53DF28F8EE139_OFFSET UNITYSDK_OFFSET(0x1BBC0310)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_66AED444F681573C_OFFSET UNITYSDK_OFFSET(0x1BBC0010)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_756D64010A051C35_OFFSET UNITYSDK_OFFSET(0x1BBC0050)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC0040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStanceRatio_TypeDefinitionIndex = 22739;

	class ByCompareStanceRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean IncludeRedStance; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66AED444F681573C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_66AED444F681573C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_756D64010A051C35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_756D64010A051C35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29B60B545947C1E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_29B60B545947C1E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65C53DF28F8EE139(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_65C53DF28F8EE139_OFFSET))(a1, a2);
		}
	};
}
