#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_90DA48C4D0FE3AFC_OFFSET UNITYSDK_OFFSET(0x18CC14C0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_AE251F1F877DBA81_OFFSET UNITYSDK_OFFSET(0x18CC12A0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC13E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetCoinByLoseCoinConfig_TypeDefinitionIndex = 18622;

	class RogueActGetCoinByLoseCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AE251F1F877DBA81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_AE251F1F877DBA81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_90DA48C4D0FE3AFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_METHOD_6_90DA48C4D0FE3AFC_OFFSET))(a1, a2);
		}
	};
}
