#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_A519A5E7D365CC6E_OFFSET UNITYSDK_OFFSET(0x18754480)
#define RPG_GAMECORE_BYISINDISTRICT_METHOD_4_B1B5C2BA085F136E_OFFSET UNITYSDK_OFFSET(0x187543B0)
#define RPG_GAMECORE_BYISINDISTRICT__CTOR_OFFSET UNITYSDK_OFFSET(0x18754430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInDistrict_TypeDefinitionIndex = 19562;

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
	};
}
