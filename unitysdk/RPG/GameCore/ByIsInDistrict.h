#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_38C98DC19F06B970_OFFSET UNITYSDK_OFFSET(0x19566F10)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_594FB7B565F2C127_OFFSET UNITYSDK_OFFSET(0x19566F90)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_A519A5E7D365CC6E_OFFSET UNITYSDK_OFFSET(0x19566D50)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_B1B5C2BA085F136E_OFFSET UNITYSDK_OFFSET(0x19566C80)
#define RPG_GAMECORE_BYISINDISTRICT__CTOR_OFFSET UNITYSDK_OFFSET(0x19566D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInDistrict_TypeDefinitionIndex = 19454;

	class ByIsInDistrict : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DistrictType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B1B5C2BA085F136E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_B1B5C2BA085F136E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A519A5E7D365CC6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_A519A5E7D365CC6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38C98DC19F06B970(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_38C98DC19F06B970_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_594FB7B565F2C127(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_594FB7B565F2C127_OFFSET))(a1, a2);
		}
	};
}
