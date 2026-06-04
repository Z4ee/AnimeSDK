#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG_METHOD_2_3B13AD7841184E71_OFFSET UNITYSDK_OFFSET(0x1973F3E0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19746BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCollectionConfig_TypeDefinitionIndex = 15842;

	class FiveDimMiniGameCollectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CoinDelayDestroyTimeOutEvent; // 0x10
		::System::Single MiniGameScoreMultiplierAddInterval; // 0x18
		::System::Single MiniGameScoreMultiplierAddValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3B13AD7841184E71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCollectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCollectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG_METHOD_2_3B13AD7841184E71_OFFSET))(a1, a2);
		}
	};
}
