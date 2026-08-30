#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_4865AABFB86824AE_OFFSET UNITYSDK_OFFSET(0x1E535900)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_C85C4285AB740412_OFFSET UNITYSDK_OFFSET(0x1E5358B0)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5358F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWorkbenchReforgeExtraFreeCountConfig_TypeDefinitionIndex = 17667;

	class RogueModifierWorkbenchReforgeExtraFreeCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C85C4285AB740412(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_C85C4285AB740412_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4865AABFB86824AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_METHOD_3_4865AABFB86824AE_OFFSET))(a1, a2);
		}
	};
}
