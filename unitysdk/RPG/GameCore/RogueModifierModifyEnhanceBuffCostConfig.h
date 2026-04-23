#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYENHANCEBUFFCOSTCONFIG_METHOD_3_90CCDC0EB85D72F4_OFFSET UNITYSDK_OFFSET(0x18D40C50)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYENHANCEBUFFCOSTCONFIG_METHOD_3_FCAECB26B92D5C3D_OFFSET UNITYSDK_OFFSET(0x18D40B80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYENHANCEBUFFCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyEnhanceBuffCostConfig_TypeDefinitionIndex = 17057;

	class RogueModifierModifyEnhanceBuffCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYENHANCEBUFFCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FCAECB26B92D5C3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyEnhanceBuffCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyEnhanceBuffCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYENHANCEBUFFCOSTCONFIG_METHOD_3_FCAECB26B92D5C3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_90CCDC0EB85D72F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyEnhanceBuffCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyEnhanceBuffCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYENHANCEBUFFCOSTCONFIG_METHOD_3_90CCDC0EB85D72F4_OFFSET))(a1, a2);
		}
	};
}
