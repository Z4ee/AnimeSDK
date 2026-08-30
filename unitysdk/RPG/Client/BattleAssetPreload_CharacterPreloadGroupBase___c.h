#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F33A00)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F33A40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEALLPRELOAD_B__77_0_OFFSET UNITYSDK_OFFSET(0x19F33A50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEULTRAPRELOAD_B__80_0_OFFSET UNITYSDK_OFFSET(0x19F33A90)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex = 59795;

	class BattleAssetPreload_CharacterPreloadGroupBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase___c** StaticGet___9()
		{
			return (::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase___c**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>** StaticGet___9__77_0()
		{
			return (::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex)->GetStaticField(0x5FD8);
		}
		static ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>** StaticGet___9__80_0()
		{
			return (::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex)->GetStaticField(0x5FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _set_DisableAllPreload_b__77_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEALLPRELOAD_B__77_0_OFFSET))(this, a1);
		}

		::System::Void _set_DisableUltraPreload_b__80_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEULTRAPRELOAD_B__80_0_OFFSET))(this, a1);
		}
	};
}
