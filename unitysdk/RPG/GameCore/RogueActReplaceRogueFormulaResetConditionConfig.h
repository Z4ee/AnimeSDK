#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_6_2D87CCD981D70520_OFFSET UNITYSDK_OFFSET(0x1D3BAE20)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_6_5E529CFE6666EFE4_OFFSET UNITYSDK_OFFSET(0x1D3BADD0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BAE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueFormulaResetConditionConfig_TypeDefinitionIndex = 19428;

	class RogueActReplaceRogueFormulaResetConditionConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5E529CFE6666EFE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_6_5E529CFE6666EFE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2D87CCD981D70520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_METHOD_6_2D87CCD981D70520_OFFSET))(a1, a2);
		}
	};
}
