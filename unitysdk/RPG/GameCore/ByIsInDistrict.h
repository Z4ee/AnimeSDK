#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_2D6D0A3B0698D2B6_OFFSET UNITYSDK_OFFSET(0x1CF3F5A0)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_5275CF047A0DC778_OFFSET UNITYSDK_OFFSET(0x1CF3F570)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_A519A5E7D365CC6E_OFFSET UNITYSDK_OFFSET(0x1CF3F3B0)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_F82FA2E5FA36B78F_OFFSET UNITYSDK_OFFSET(0x1CF3F370)
#define RPG_GAMECORE_BYISINDISTRICT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3F3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInDistrict_TypeDefinitionIndex = 20358;

	class ByIsInDistrict : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DistrictType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F82FA2E5FA36B78F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_F82FA2E5FA36B78F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A519A5E7D365CC6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_A519A5E7D365CC6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5275CF047A0DC778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_5275CF047A0DC778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D6D0A3B0698D2B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_METHOD_4_2D6D0A3B0698D2B6_OFFSET))(a1, a2);
		}
	};
}
