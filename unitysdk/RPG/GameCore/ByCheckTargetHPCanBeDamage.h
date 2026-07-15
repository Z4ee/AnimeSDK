#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_2FB1603012135530_OFFSET UNITYSDK_OFFSET(0x19CCBF30)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_360F666A1C30833E_OFFSET UNITYSDK_OFFSET(0x19CCBF60)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_86EE155B54369995_OFFSET UNITYSDK_OFFSET(0x19CCBD70)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_B84F5605182D9B00_OFFSET UNITYSDK_OFFSET(0x19CCBDB0)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCBDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTargetHPCanBeDamage_TypeDefinitionIndex = 21734;

	class ByCheckTargetHPCanBeDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_86EE155B54369995(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_86EE155B54369995_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B84F5605182D9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_B84F5605182D9B00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FB1603012135530(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_2FB1603012135530_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_360F666A1C30833E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_360F666A1C30833E_OFFSET))(a1, a2);
		}
	};
}
