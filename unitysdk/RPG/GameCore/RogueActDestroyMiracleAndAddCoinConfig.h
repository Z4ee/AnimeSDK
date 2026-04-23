#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_36256F6C29220974_OFFSET UNITYSDK_OFFSET(0x18CC0110)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_BBE3833491D631D9_OFFSET UNITYSDK_OFFSET(0x18CBFEF0)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC0030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyMiracleAndAddCoinConfig_TypeDefinitionIndex = 18702;

	class RogueActDestroyMiracleAndAddCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BBE3833491D631D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_BBE3833491D631D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_36256F6C29220974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_36256F6C29220974_OFFSET))(a1, a2);
		}
	};
}
