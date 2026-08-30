#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MINIGAMECOLLECTCOIN_CURVECONFIG_METHOD_2_D13B583A864F2BCF_OFFSET UNITYSDK_OFFSET(0x1D29E9E0)
#define RPG_GAMECORE_MINIGAMECOLLECTCOIN_CURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameCollectCoin_CurveConfig_TypeDefinitionIndex = 18592;

	class MiniGameCollectCoin_CurveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CurveID; // 0x10
		::System::String* CoinPresetName; // 0x18
		::System::String* CoinTriggerName; // 0x20
		::System::Single CoinMoveEndDestroyDelay; // 0x28
		::System::UInt32 SlotID; // 0x2C
		::System::Single MoveUpwardTime; // 0x30
		::System::Single BakedInitVerticalSpeed; // 0x34
		::System::Single BakedInitHorizontalSpeed; // 0x38
		::System::Single BakedGravity; // 0x3C
		::System::Single BakedMoveTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMECOLLECTCOIN_CURVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D13B583A864F2BCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameCollectCoin_CurveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameCollectCoin_CurveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMECOLLECTCOIN_CURVECONFIG_METHOD_2_D13B583A864F2BCF_OFFSET))(a1, a2);
		}
	};
}
