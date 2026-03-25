#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x918B2D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x918B310)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEALLPRELOAD_B__53_0_OFFSET UNITYSDK_OFFSET(0x918B320)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEULTRAPRELOAD_B__56_0_OFFSET UNITYSDK_OFFSET(0x918B3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex = 48291;

	class BattleAssetPreload_CharacterPreloadGroupBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase___c** StaticGet___9()
		{
			return (::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase___c**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex)->GetStaticField(0x379F0);
		}
		static ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>** StaticGet___9__53_0()
		{
			return (::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex)->GetStaticField(0x379F8);
		}
		static ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>** StaticGet___9__56_0()
		{
			return (::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase___c_TypeDefinitionIndex)->GetStaticField(0x37A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _set_DisableAllPreload_b__53_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEALLPRELOAD_B__53_0_OFFSET))(this, group);
		}

		::System::Void _set_DisableUltraPreload_b__56_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE___C__SET_DISABLEULTRAPRELOAD_B__56_0_OFFSET))(this, group);
		}
	};
}
