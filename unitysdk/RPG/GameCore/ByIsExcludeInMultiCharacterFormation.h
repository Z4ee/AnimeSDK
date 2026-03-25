#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_823671EDF5FC5D89_OFFSET UNITYSDK_OFFSET(0x1702DBB0)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_82CBA3C6851A5C47_OFFSET UNITYSDK_OFFSET(0x1702DC80)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1702DC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsExcludeInMultiCharacterFormation_TypeDefinitionIndex = 20825;

	class ByIsExcludeInMultiCharacterFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_823671EDF5FC5D89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_823671EDF5FC5D89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82CBA3C6851A5C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_METHOD_4_82CBA3C6851A5C47_OFFSET))(a1, a2);
		}
	};
}
