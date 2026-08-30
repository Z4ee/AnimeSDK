#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_22C4A17053597C00_OFFSET UNITYSDK_OFFSET(0x1EE85360)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_90DA48C4D0FE3AFC_OFFSET UNITYSDK_OFFSET(0x1EE853B0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE853A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetCoinByLoseCoinConfig_TypeDefinitionIndex = 19392;

	class RogueActGetCoinByLoseCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_22C4A17053597C00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_22C4A17053597C00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_90DA48C4D0FE3AFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_90DA48C4D0FE3AFC_OFFSET))(a1, a2);
		}
	};
}
