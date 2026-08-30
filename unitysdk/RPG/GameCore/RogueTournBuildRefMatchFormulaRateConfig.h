#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG_METHOD_2_D1C113438BA2F418_OFFSET UNITYSDK_OFFSET(0x1E54FB40)
#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E54FDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefMatchFormulaRateConfig_TypeDefinitionIndex = 17466;

	class RogueTournBuildRefMatchFormulaRateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>* Essential; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>* Optional; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1C113438BA2F418(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuildRefMatchFormulaRateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHFORMULARATECONFIG_METHOD_2_D1C113438BA2F418_OFFSET))(a1, a2);
		}
	};
}
