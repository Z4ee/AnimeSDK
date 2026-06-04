#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_4865AABFB86824AE_OFFSET UNITYSDK_OFFSET(0x19B9D6B0)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_C6969E5D84AA19D7_OFFSET UNITYSDK_OFFSET(0x19B9D5E0)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9D660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWorkbenchReforgeExtraFreeCountConfig_TypeDefinitionIndex = 16989;

	class RogueModifierWorkbenchReforgeExtraFreeCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6969E5D84AA19D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_C6969E5D84AA19D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4865AABFB86824AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_4865AABFB86824AE_OFFSET))(a1, a2);
		}
	};
}
