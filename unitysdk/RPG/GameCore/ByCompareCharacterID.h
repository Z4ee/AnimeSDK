#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_957C20B1F770B54C_OFFSET UNITYSDK_OFFSET(0x17004300)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_D73A40BD30406E35_OFFSET UNITYSDK_OFFSET(0x17004460)
#define RPG_GAMECORE_BYCOMPARECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x170043C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterID_TypeDefinitionIndex = 20734;

	class ByCompareCharacterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_957C20B1F770B54C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_957C20B1F770B54C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D73A40BD30406E35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_METHOD_4_D73A40BD30406E35_OFFSET))(a1, a2);
		}
	};
}
