#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_1A9F0308BBBBE027_OFFSET UNITYSDK_OFFSET(0x19B999B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_548A8C8E838B76AE_OFFSET UNITYSDK_OFFSET(0x19B998E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig_TypeDefinitionIndex = 16993;

	class RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_548A8C8E838B76AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_548A8C8E838B76AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A9F0308BBBBE027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_1A9F0308BBBBE027_OFFSET))(a1, a2);
		}
	};
}
