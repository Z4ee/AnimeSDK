#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_155EA8D95FDB0A53_OFFSET UNITYSDK_OFFSET(0x19535500)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_4D3A850E0EBE9A57_OFFSET UNITYSDK_OFFSET(0x195351A0)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_756D64010A051C35_OFFSET UNITYSDK_OFFSET(0x19535270)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_81027ED691607288_OFFSET UNITYSDK_OFFSET(0x19535580)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19535220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStanceRatio_TypeDefinitionIndex = 21744;

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

		static ::System::Void Method_4_4D3A850E0EBE9A57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_4D3A850E0EBE9A57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_756D64010A051C35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_756D64010A051C35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_155EA8D95FDB0A53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_155EA8D95FDB0A53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81027ED691607288(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_METHOD_4_81027ED691607288_OFFSET))(a1, a2);
		}
	};
}
