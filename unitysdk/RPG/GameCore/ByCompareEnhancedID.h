#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_0CFC8637D0CFC8C6_OFFSET UNITYSDK_OFFSET(0x1C315A80)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_27649CA187A936C1_OFFSET UNITYSDK_OFFSET(0x1C315C90)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_F1EA42402C1E619F_OFFSET UNITYSDK_OFFSET(0x1C315C60)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_F7BFD1EA2CC6490F_OFFSET UNITYSDK_OFFSET(0x1C315A40)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C315A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEnhancedID_TypeDefinitionIndex = 22303;

	class ByCompareEnhancedID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetEnhancedID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F7BFD1EA2CC6490F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_F7BFD1EA2CC6490F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CFC8637D0CFC8C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_0CFC8637D0CFC8C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1EA42402C1E619F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_F1EA42402C1E619F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27649CA187A936C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_27649CA187A936C1_OFFSET))(a1, a2);
		}
	};
}
