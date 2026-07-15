#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_METHOD_3_5581143DB5CBB6F9_OFFSET UNITYSDK_OFFSET(0x1D166970)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_METHOD_3_E76BB8B70F3BF0F5_OFFSET UNITYSDK_OFFSET(0x1D166920)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D166960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWorkbenchReforgeSetCostCountConfig_TypeDefinitionIndex = 17152;

	class RogueModifierWorkbenchReforgeSetCostCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E76BB8B70F3BF0F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_METHOD_3_E76BB8B70F3BF0F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5581143DB5CBB6F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_METHOD_3_5581143DB5CBB6F9_OFFSET))(a1, a2);
		}
	};
}
