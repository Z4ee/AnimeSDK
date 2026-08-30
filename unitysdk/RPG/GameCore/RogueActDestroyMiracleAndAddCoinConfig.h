#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_36256F6C29220974_OFFSET UNITYSDK_OFFSET(0x1D3B71A0)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_54D1D2D094E259F8_OFFSET UNITYSDK_OFFSET(0x1D3B7150)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyMiracleAndAddCoinConfig_TypeDefinitionIndex = 19472;

	class RogueActDestroyMiracleAndAddCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_54D1D2D094E259F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_54D1D2D094E259F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_36256F6C29220974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_METHOD_6_36256F6C29220974_OFFSET))(a1, a2);
		}
	};
}
