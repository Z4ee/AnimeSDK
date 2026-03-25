#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_METHOD_3_A06595649527DE07_OFFSET UNITYSDK_OFFSET(0x17634810)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_METHOD_3_BF698B981E1C109E_OFFSET UNITYSDK_OFFSET(0x176348E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17634890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitRatioByCntConfig_TypeDefinitionIndex = 16291;

	class RogueModifierModifyMagicUnitRatioByCntConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A06595649527DE07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_METHOD_3_A06595649527DE07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF698B981E1C109E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYCNTCONFIG_METHOD_3_BF698B981E1C109E_OFFSET))(a1, a2);
		}
	};
}
