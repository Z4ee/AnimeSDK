#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_1FCE4B48C93B0EED_OFFSET UNITYSDK_OFFSET(0x1CEB69C0)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_5124359566ABA70E_OFFSET UNITYSDK_OFFSET(0x1CEB6700)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_7ABE0446E5A631E8_OFFSET UNITYSDK_OFFSET(0x1CEB6A40)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_D73A40BD30406E35_OFFSET UNITYSDK_OFFSET(0x1CEB67E0)
#define RPG_GAMECORE_BYCOMPARECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB6780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterID_TypeDefinitionIndex = 22302;

	class ByCompareCharacterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5124359566ABA70E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_5124359566ABA70E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D73A40BD30406E35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_D73A40BD30406E35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FCE4B48C93B0EED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_1FCE4B48C93B0EED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7ABE0446E5A631E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_7ABE0446E5A631E8_OFFSET))(a1, a2);
		}
	};
}
