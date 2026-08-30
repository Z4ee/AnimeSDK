#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirPlaneStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET UNITYSDK_OFFSET(0x1BD0E800)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET UNITYSDK_OFFSET(0x1BD0E7E0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0x1BD0E900)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0x1BD0E920)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E860)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1BD0EB80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E880)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E820)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD0E840)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0x1BD0E8E0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E8A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x1BD0E8C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1BD0E7A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD0EA70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET UNITYSDK_OFFSET(0x1BD0E960)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1BD0E7C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1BD0E940)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET UNITYSDK_OFFSET(0x1BD07D60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD0A600)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET UNITYSDK_OFFSET(0x1BD0E810)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET UNITYSDK_OFFSET(0x1BD0E7F0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0x1BD0E910)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0x1BD0E930)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E870)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1BD0EB90)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E890)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E830)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD0E850)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0x1BD0E8F0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0x1BD0E8B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x1BD0E8D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x1BD0E7B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1BD0E7D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1BD0E950)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1BD0E530)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD0E720)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneData_TypeDefinitionIndex = 78888;

	class PixAirPlaneData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _EquipIDList_k__BackingField; // 0x18
		::System::String* _OwnerIconPath_k__BackingField; // 0x20
		::System::String* _ModelPath_k__BackingField; // 0x28
		::System::String* _LargePlaneIconPath_k__BackingField; // 0x30
		::System::UInt32 _PlaneID_k__BackingField; // 0x38
		::System::UInt32 _UnLockScore_k__BackingField; // 0x3C
		::RPG::Client::TextID _OwnerName_k__BackingField; // 0x40
		::System::UInt32 _CoreEquipID_k__BackingField; // 0x50
		::RPG::Client::PixAir::PixAirPlaneStatus _Status_k__BackingField; // 0x54
		::RPG::GameCore::FixPoint _BaseHP_k__BackingField; // 0x58
		::RPG::Client::TextID _OwnerDesc_k__BackingField; // 0x60
		::RPG::Client::TextID _Name_k__BackingField; // 0x70
		::System::Int32 _BaseLife_k__BackingField; // 0x80
		::System::Boolean _IsSelectable_k__BackingField; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirPlaneData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirPlaneData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET))(a1);
		}

		::System::Void SetNotObtained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET))(this);
		}

		::System::Void SetUnlocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneStatus get_Status()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::PixAir::PixAirPlaneStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_BaseLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET))(this);
		}

		::System::Void set_BaseLife(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET))(this);
		}

		::System::Void set_BaseHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_LargePlaneIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET))(this);
		}

		::System::Void set_LargePlaneIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_OwnerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET))(this);
		}

		::System::Void set_OwnerIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET))(this);
		}

		::System::Void set_OwnerName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET))(this);
		}

		::System::Void set_OwnerDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoreEquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET))(this);
		}

		::System::Void set_CoreEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_EquipIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET))(this);
		}

		::System::Void set_EquipIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnLockScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET))(this);
		}

		::System::Void set_UnLockScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PurchaseItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET))(this);
		}

		::System::UInt32 get_PurchaseItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET))(this);
		}

		::System::Void set_IsSelectable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET))(this, a1);
		}
	};
}
