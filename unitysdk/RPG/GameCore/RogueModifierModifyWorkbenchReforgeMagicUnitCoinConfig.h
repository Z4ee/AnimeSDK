#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_1A9F0308BBBBE027_OFFSET UNITYSDK_OFFSET(0x1D3FB210)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_F55E1E6C5644E9A3_OFFSET UNITYSDK_OFFSET(0x1D3FB1C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig_TypeDefinitionIndex = 17671;

	class RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F55E1E6C5644E9A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_F55E1E6C5644E9A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A9F0308BBBBE027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeMagicUnitCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEMAGICUNITCOINCONFIG_METHOD_3_1A9F0308BBBBE027_OFFSET))(a1, a2);
		}
	};
}
