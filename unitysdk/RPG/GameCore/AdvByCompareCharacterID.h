#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_195F3D57885D6273_OFFSET UNITYSDK_OFFSET(0x186474D0)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_METHOD_4_2140CF8E59527506_OFFSET UNITYSDK_OFFSET(0x18647630)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x18647590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareCharacterID_TypeDefinitionIndex = 19557;

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
	};
}
