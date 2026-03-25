#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleViewModeDarkInitData; }
namespace RPG::Client { class BattleViewModeLightInitData; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATEDARKTEAM_OFFSET UNITYSDK_OFFSET(0x91E0B10)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATELIGHTTEAM_OFFSET UNITYSDK_OFFSET(0x91E0AB0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x91D9D00)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_BLOCKID_OFFSET UNITYSDK_OFFSET(0x91E10E0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0x91E1120)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x91E10C0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_LIGHTINITDATA_OFFSET UNITYSDK_OFFSET(0x91E1100)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SETBLOCKID_OFFSET UNITYSDK_OFFSET(0x91DA5A0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_BLOCKID_OFFSET UNITYSDK_OFFSET(0x91E10F0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0x91E1130)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x91E10D0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_LIGHTINITDATA_OFFSET UNITYSDK_OFFSET(0x91E1110)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x91E07E0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91E0D90)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETCASTER_OFFSET UNITYSDK_OFFSET(0x91E0E30)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETFIRSTSHOWNENTITY_OFFSET UNITYSDK_OFFSET(0x91E0B70)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETNEARESTVISIBLEENTITY_OFFSET UNITYSDK_OFFSET(0x91E0F30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeInitData_TypeDefinitionIndex = 59040;

	class BattleViewModeInitData : public ::System::Object
	{
	public:
		::RPG::Client::BattleViewModeDarkInitData* _DarkInitData_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::RPG::Client::BattleViewModeLightInitData* _LightInitData_k__BackingField; // 0x20
		::System::UInt32 _BlockID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleViewModeInitData* Create(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATE_OFFSET))(entity);
		}

		static ::RPG::Client::BattleViewModeInitData* CreateLightTeam(::RPG::GameCore::GameEntity* character, ::RPG::Client::BattleViewModeLightInitData* lightInitData)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::BattleViewModeLightInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATELIGHTTEAM_OFFSET))(character, lightInitData);
		}

		static ::RPG::Client::BattleViewModeInitData* CreateDarkTeam(::RPG::GameCore::GameEntity* monster, ::RPG::Client::BattleViewModeDarkInitData* monsterInitData)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::BattleViewModeDarkInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATEDARKTEAM_OFFSET))(monster, monsterInitData);
		}

		static ::RPG::Client::BattleViewModeInitData* _CreateInternal(::RPG::GameCore::GameEntity* entity, ::RPG::Client::BattleViewModeLightInitData* lightInitData, ::RPG::Client::BattleViewModeDarkInitData* darkInitData)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::BattleViewModeLightInitData*, ::RPG::Client::BattleViewModeDarkInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__CREATEINTERNAL_OFFSET))(entity, lightInitData, darkInitData);
		}

		static ::RPG::GameCore::GameEntity* _GetFirstShownEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETFIRSTSHOWNENTITY_OFFSET))(entity);
		}

		static ::RPG::GameCore::GameEntity* _GetCaster(::RPG::GameCore::GameEntity* battleEventEntity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETCASTER_OFFSET))(battleEventEntity);
		}

		static ::RPG::GameCore::GameEntity* _GetNearestVisibleEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETNEARESTVISIBLEENTITY_OFFSET))(entity);
		}

		::System::Void SetBlockID(::System::UInt32 blockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SETBLOCKID_OFFSET))(this, blockID);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_ENTITY_OFFSET))(this, value);
		}

		::System::UInt32 get_BlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_BLOCKID_OFFSET))(this);
		}

		::System::Void set_BlockID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_BLOCKID_OFFSET))(this, value);
		}

		::RPG::Client::BattleViewModeLightInitData* get_LightInitData()
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_LIGHTINITDATA_OFFSET))(this);
		}

		::System::Void set_LightInitData(::RPG::Client::BattleViewModeLightInitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeLightInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_LIGHTINITDATA_OFFSET))(this, value);
		}

		::RPG::Client::BattleViewModeDarkInitData* get_DarkInitData()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_DARKINITDATA_OFFSET))(this);
		}

		::System::Void set_DarkInitData(::RPG::Client::BattleViewModeDarkInitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeDarkInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_DARKINITDATA_OFFSET))(this, value);
		}
	};
}
