#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_4816E8F1163A76FD_OFFSET UNITYSDK_OFFSET(0x19500830)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_6AE1005EDB6D2D00_OFFSET UNITYSDK_OFFSET(0x195008B0)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_789420D03FADE8FE_OFFSET UNITYSDK_OFFSET(0x195005E0)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_B84F5605182D9B00_OFFSET UNITYSDK_OFFSET(0x195006B0)
#define RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19500660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTargetHPCanBeDamage_TypeDefinitionIndex = 21316;

	class ByCheckTargetHPCanBeDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_789420D03FADE8FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_789420D03FADE8FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B84F5605182D9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_B84F5605182D9B00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4816E8F1163A76FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_4816E8F1163A76FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6AE1005EDB6D2D00(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTARGETHPCANBEDAMAGE_METHOD_4_6AE1005EDB6D2D00_OFFSET))(a1, a2);
		}
	};
}
