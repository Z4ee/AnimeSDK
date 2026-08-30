#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleViewModeDarkInitData; }
namespace RPG::Client { class BattleViewModeLightInitData; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATEDARKTEAM_OFFSET UNITYSDK_OFFSET(0xC946B10)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATELIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xC946AB0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC93EAF0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_BLOCKID_OFFSET UNITYSDK_OFFSET(0xC947130)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0xC947170)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xC947110)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_LIGHTINITDATA_OFFSET UNITYSDK_OFFSET(0xC947150)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SETBLOCKID_OFFSET UNITYSDK_OFFSET(0xC93F3A0)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_BLOCKID_OFFSET UNITYSDK_OFFSET(0xC947140)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0xC947180)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xC947120)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_LIGHTINITDATA_OFFSET UNITYSDK_OFFSET(0xC947160)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xC946900)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC946D90)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETCASTER_OFFSET UNITYSDK_OFFSET(0xC946E30)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETFIRSTSHOWNENTITY_OFFSET UNITYSDK_OFFSET(0xC946B70)
#define RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETNEARESTVISIBLEENTITY_OFFSET UNITYSDK_OFFSET(0xC946F30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeInitData_TypeDefinitionIndex = 72016;

	class BattleViewModeInitData : public ::System::Object
	{
	public:
		::RPG::Client::BattleViewModeLightInitData* _LightInitData_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::RPG::Client::BattleViewModeDarkInitData* _DarkInitData_k__BackingField; // 0x20
		::System::UInt32 _BlockID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleViewModeInitData* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleViewModeInitData* CreateLightTeam(::RPG::GameCore::GameEntity* a1, ::RPG::Client::BattleViewModeLightInitData* a2)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::BattleViewModeLightInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATELIGHTTEAM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BattleViewModeInitData* CreateDarkTeam(::RPG::GameCore::GameEntity* a1, ::RPG::Client::BattleViewModeDarkInitData* a2)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::BattleViewModeDarkInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_CREATEDARKTEAM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BattleViewModeInitData* _CreateInternal(::RPG::GameCore::GameEntity* a1, ::RPG::Client::BattleViewModeLightInitData* a2, ::RPG::Client::BattleViewModeDarkInitData* a3)
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::BattleViewModeLightInitData*, ::RPG::Client::BattleViewModeDarkInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__CREATEINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* _GetFirstShownEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETFIRSTSHOWNENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _GetCaster(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETCASTER_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _GetNearestVisibleEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA__GETNEARESTVISIBLEENTITY_OFFSET))(a1);
		}

		::System::Void SetBlockID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SETBLOCKID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_BlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_BLOCKID_OFFSET))(this);
		}

		::System::Void set_BlockID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_BLOCKID_OFFSET))(this, a1);
		}

		::RPG::Client::BattleViewModeLightInitData* get_LightInitData()
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_LIGHTINITDATA_OFFSET))(this);
		}

		::System::Void set_LightInitData(::RPG::Client::BattleViewModeLightInitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeLightInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_LIGHTINITDATA_OFFSET))(this, a1);
		}

		::RPG::Client::BattleViewModeDarkInitData* get_DarkInitData()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_GET_DARKINITDATA_OFFSET))(this);
		}

		::System::Void set_DarkInitData(::RPG::Client::BattleViewModeDarkInitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeDarkInitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEINITDATA_SET_DARKINITDATA_OFFSET))(this, a1);
		}
	};
}
