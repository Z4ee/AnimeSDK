#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroup.h"
#include "unitysdk/RPG/GameCore/StageType.h"

namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_ADDTEMPCACHEUI_OFFSET UNITYSDK_OFFSET(0x19F3BB60)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x19F3BB10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x19F3B920)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_REMOVETEMPCACHEUI_OFFSET UNITYSDK_OFFSET(0x19F3BC40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__ADDSTAGEUIASSETS_OFFSET UNITYSDK_OFFSET(0x19F3B5D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__COLLECTRESOURCEIMPLFORCOLLECTIONMODE_OFFSET UNITYSDK_OFFSET(0x19F3B470)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x19F3B1F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3BCB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__REFRESHINBATTLEUIASSETSFROMLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x19F3B970)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__RELEASERESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x19F3B8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_UIAssetPreloadGroup_TypeDefinitionIndex = 59803;

	class BattleAssetPreload_UIAssetPreloadGroup : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroup
	{
	public:
		static ::System::Boolean* StaticGet_DebugDisableUIPreload()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_UIAssetPreloadGroup_TypeDefinitionIndex)->GetStaticField(0x14DD0);
		}
		::Il2CppArray<::System::String*>* BattleUICacheList; // 0x68
		::Il2CppArray<::System::String*>* CommonUICacheList; // 0x70
		::RPG::GameCore::StageType _LastStageType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__CTOR_OFFSET))(this);
		}

		::System::Void _CollectResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET))(this);
		}

		::System::Void _CollectResourceImplForCollectionMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__COLLECTRESOURCEIMPLFORCOLLECTIONMODE_OFFSET))(this);
		}

		::System::Void _ReleaseResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__RELEASERESOURCEIMPL_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET))(this);
		}

		::System::Void _RefreshInBattleUIAssetsFromLineupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__REFRESHINBATTLEUIASSETSFROMLINEUPDATA_OFFSET))(this);
		}

		::System::Void _AddStageUIAssets(::RPG::GameCore::StageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP__ADDSTAGEUIASSETS_OFFSET))(this, a1);
		}

		::System::Void AddTempCacheUI(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_ADDTEMPCACHEUI_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveTempCacheUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UIASSETPRELOADGROUP_REMOVETEMPCACHEUI_OFFSET))(this, a1);
		}
	};
}
