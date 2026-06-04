#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_5BAFA488C2CE0A2C_OFFSET UNITYSDK_OFFSET(0x19418D20)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_97DD49AACD78F8E7_OFFSET UNITYSDK_OFFSET(0x19418B40)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_C0839328241C0457_OFFSET UNITYSDK_OFFSET(0x19418A70)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_F2EFF87E4133BA93_OFFSET UNITYSDK_OFFSET(0x19418DA0)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID__CTOR_OFFSET UNITYSDK_OFFSET(0x19418AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareEnhancedID_TypeDefinitionIndex = 19450;

	class AdvByCompareEnhancedID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetEnhancedID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C0839328241C0457(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_C0839328241C0457_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97DD49AACD78F8E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_97DD49AACD78F8E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BAFA488C2CE0A2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_5BAFA488C2CE0A2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F2EFF87E4133BA93(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_F2EFF87E4133BA93_OFFSET))(a1, a2);
		}
	};
}
