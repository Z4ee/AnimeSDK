#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_CharacterPreloadGroupBase.h"

namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class BattleEventEffectsPreloadList; }
namespace RPG::GameCore { class BattleEventRow; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_GET_BATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0x19F2F770)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_GET_ISDYNAMICPRELOAD_OFFSET UNITYSDK_OFFSET(0x19F2F6F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_JSONCONFIGPATHTOPRELOADNAME_OFFSET UNITYSDK_OFFSET(0x19F2FB20)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x19F30160)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x19F30040)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_REFRESHINADVENTURE_OFFSET UNITYSDK_OFFSET(0x19F2FFD0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_UPDATEBATTLEMODEL_OFFSET UNITYSDK_OFFSET(0x19F2FE80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x19F2FC40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F30310)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__GETDEFAULTBATTLEMODELPATH_OFFSET UNITYSDK_OFFSET(0x19F30280)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x19F2F780)
#define RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__UPDATEBATTLEMODELPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x19F2FEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_BattleEventAssetPreloadGroup_TypeDefinitionIndex = 59793;

	class BattleAssetPreload_BattleEventAssetPreloadGroup : public ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexJsonConfigPathToPreloadName()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_BattleEventAssetPreloadGroup_TypeDefinitionIndex)->GetStaticField(0x5B80);
		}
		// static const ::System::String* COMMON_EFFECT; // 0x0
		// static const ::System::String* APPEND_EFFECT; // 0x0
		::RPG::GameCore::BattleEventEffectsPreloadList* _EffectPreloadConfig; // 0xD0
		::RPG::GameCore::BattleEventConfig* _BattleEventConfig; // 0xD8
		::RPG::GameCore::BattleEventEffectsPreloadList* _AppendEffectPreloadConfig; // 0xE0
		::RPG::GameCore::BattleEventRow* _BattleEventRow; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDynamicPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_GET_ISDYNAMICPRELOAD_OFFSET))(this);
		}

		::System::UInt32 get_BattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_GET_BATTLEEVENTID_OFFSET))(this);
		}

		::System::Void _OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__ONINITIALIZE_OFFSET))(this);
		}

		::System::Void _CollectResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET))(this);
		}

		::System::Void UpdateBattleModel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_UPDATEBATTLEMODEL_OFFSET))(this, a1);
		}

		::System::Void _UpdateBattleModelPreloadType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__UPDATEBATTLEMODELPRELOADTYPE_OFFSET))(this);
		}

		::System::Void RefreshInAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_REFRESHINADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET))(this);
		}

		::System::String* _GetDefaultBattleModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP__GETDEFAULTBATTLEMODELPATH_OFFSET))(this);
		}

		static ::System::String* JsonConfigPathToPreloadName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_BATTLEEVENTASSETPRELOADGROUP_JSONCONFIGPATHTOPRELOADNAME_OFFSET))(a1);
		}
	};
}
