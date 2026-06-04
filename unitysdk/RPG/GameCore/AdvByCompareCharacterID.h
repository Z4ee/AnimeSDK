#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_195F3D57885D6273_OFFSET UNITYSDK_OFFSET(0x19417540)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2140CF8E59527506_OFFSET UNITYSDK_OFFSET(0x194176A0)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2EBFAD70693A6C50_OFFSET UNITYSDK_OFFSET(0x19417940)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_6E44AFD8A7185A2B_OFFSET UNITYSDK_OFFSET(0x19417880)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x19417600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareCharacterID_TypeDefinitionIndex = 19449;

	class AdvByCompareCharacterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_195F3D57885D6273(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_195F3D57885D6273_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2140CF8E59527506(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2140CF8E59527506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E44AFD8A7185A2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_6E44AFD8A7185A2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2EBFAD70693A6C50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2EBFAD70693A6C50_OFFSET))(a1, a2);
		}
	};
}
