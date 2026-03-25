#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleViewModeStatusTagData_BattleViewModeExtraEffectStatusTagType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ExtraEffectRow; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x91E1470)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x91E1880)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x91E1870)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91E18A0)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_PREFABLOADMETAINDEX_OFFSET UNITYSDK_OFFSET(0x91E19D0)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET__EXTRAEFFECTROW_OFFSET UNITYSDK_OFFSET(0x91E1970)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_REFRESHENTITY_OFFSET UNITYSDK_OFFSET(0x91E1510)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_RESET_OFFSET UNITYSDK_OFFSET(0x91E1660)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x91E1890)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_TRYREFRESHCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x91E1770)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_TRYREFRESHTEAMLIGHTSUPPORT_OFFSET UNITYSDK_OFFSET(0x91E16B0)
#define RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91E1500)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeStatusTagData_TypeDefinitionIndex = 59045;

	class BattleViewModeStatusTagData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _TEAM_LIGHT_SUPPORT_EXTRA_EFFECT_ID = 0x989695; // 0x0
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x10
		::RPG::Client::BattleViewModeStatusTagData_BattleViewModeExtraEffectStatusTagType _StatusTagType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleViewModeStatusTagData* Create(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::BattleViewModeStatusTagData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_CREATE_OFFSET))(entity);
		}

		::System::Void RefreshEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_REFRESHENTITY_OFFSET))(this, entity);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_RESET_OFFSET))(this);
		}

		::System::Boolean TryRefreshTeamLightSupport(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_TRYREFRESHTEAMLIGHTSUPPORT_OFFSET))(this, entity);
		}

		::System::Boolean TryRefreshCharacterConfig(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_TRYREFRESHCHARACTERCONFIG_OFFSET))(this, entity);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_SET_EXTRAEFFECTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_PrefabLoadMetaIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET_PREFABLOADMETAINDEX_OFFSET))(this);
		}

		::RPG::GameCore::ExtraEffectRow* get__ExtraEffectRow()
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODESTATUSTAGDATA_GET__EXTRAEFFECTROW_OFFSET))(this);
		}
	};
}
