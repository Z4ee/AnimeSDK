#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_GET_GAMELANGCODE2PLATFORM_OFFSET UNITYSDK_OFFSET(0x1BB709B0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_METHOD_2_633628DB9E197472_OFFSET UNITYSDK_OFFSET(0x1BB70830)
#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_METHOD_2_A5058F1AD6A80A4F_OFFSET UNITYSDK_OFFSET(0x1BB709D0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB709A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefFallbackLangConfig_TypeDefinitionIndex = 16962;

	class RogueTournBuildRefFallbackLangConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CN; // 0x10
		::System::String* Oversea; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PlatformLangCodeMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _GameLangCode2Platform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_633628DB9E197472(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuildRefFallbackLangConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuildRefFallbackLangConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_METHOD_2_633628DB9E197472_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_GameLangCode2Platform()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_GET_GAMELANGCODE2PLATFORM_OFFSET))(this);
		}

		::System::Void Method_2_A5058F1AD6A80A4F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_METHOD_2_A5058F1AD6A80A4F_OFFSET))(this);
		}
	};
}
