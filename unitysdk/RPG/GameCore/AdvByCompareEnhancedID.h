#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_6A340C9025952C94_OFFSET UNITYSDK_OFFSET(0x1BE11090)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_6B310D8EEB1AC556_OFFSET UNITYSDK_OFFSET(0x1BE10E70)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_90914EE2A20F42B2_OFFSET UNITYSDK_OFFSET(0x1BE110C0)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_97DD49AACD78F8E7_OFFSET UNITYSDK_OFFSET(0x1BE10EB0)
#define RPG_GAMECORE_ADVBYCOMPAREENHANCEDID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE10EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareEnhancedID_TypeDefinitionIndex = 19808;

	class AdvByCompareEnhancedID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetEnhancedID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6B310D8EEB1AC556(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_6B310D8EEB1AC556_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97DD49AACD78F8E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_97DD49AACD78F8E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6A340C9025952C94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_6A340C9025952C94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90914EE2A20F42B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREENHANCEDID_METHOD_4_90914EE2A20F42B2_OFFSET))(a1, a2);
		}
	};
}
