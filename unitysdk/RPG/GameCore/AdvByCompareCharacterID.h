#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_065F1AE3E2762901_OFFSET UNITYSDK_OFFSET(0x1D6AA190)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2140CF8E59527506_OFFSET UNITYSDK_OFFSET(0x1D6A9F30)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_CCECF0C0A284CE40_OFFSET UNITYSDK_OFFSET(0x1D6AA110)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_EA4FF37965B100C9_OFFSET UNITYSDK_OFFSET(0x1D6A9E50)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareCharacterID_TypeDefinitionIndex = 20353;

	class AdvByCompareCharacterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA4FF37965B100C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_EA4FF37965B100C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2140CF8E59527506(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2140CF8E59527506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCECF0C0A284CE40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_CCECF0C0A284CE40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_065F1AE3E2762901(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_065F1AE3E2762901_OFFSET))(a1, a2);
		}
	};
}
