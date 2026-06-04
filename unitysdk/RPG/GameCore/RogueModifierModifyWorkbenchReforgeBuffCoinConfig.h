#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_METHOD_3_6505AD0EC4759DFE_OFFSET UNITYSDK_OFFSET(0x19B99720)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_METHOD_3_B1E274FD9378D9F7_OFFSET UNITYSDK_OFFSET(0x19B997F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B997A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeBuffCoinConfig_TypeDefinitionIndex = 16991;

	class RogueModifierModifyWorkbenchReforgeBuffCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6505AD0EC4759DFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_METHOD_3_6505AD0EC4759DFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1E274FD9378D9F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeBuffCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEBUFFCOINCONFIG_METHOD_3_B1E274FD9378D9F7_OFFSET))(a1, a2);
		}
	};
}
