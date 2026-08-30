#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirPlaneStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASEHP_OFFSET UNITYSDK_OFFSET(0xDB1AAF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_BASELIFE_OFFSET UNITYSDK_OFFSET(0xDB1AAD0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0xDB1ABF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0xDB1AC10)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB50)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0xDB1AE70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB10)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDB1AB30)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0xDB1ABD0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB90)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0xDB1ABB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xDB1AA90)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xDB1AD60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_PURCHASEITEMID_OFFSET UNITYSDK_OFFSET(0xDB1AC50)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xDB1AAB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0xDB1AC30)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETNOTOBTAINED_OFFSET UNITYSDK_OFFSET(0xDB14090)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDB16910)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASEHP_OFFSET UNITYSDK_OFFSET(0xDB1AB00)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_BASELIFE_OFFSET UNITYSDK_OFFSET(0xDB1AAE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0xDB1AC00)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_EQUIPIDLIST_OFFSET UNITYSDK_OFFSET(0xDB1AC20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0xDB1AE80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xDB1AB20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xDB1AB40)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0xDB1ABE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0xDB1ABA0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0xDB1ABC0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xDB1AAA0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xDB1AAC0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_SET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0xDB1AC40)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xDB1A820)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB1AA10)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneData_TypeDefinitionIndex = 78889;

	class PixAirPlaneData : public ::System::Object
	{
	public:
		::System::String* _ModelPath_k__BackingField; // 0x10
		::System::String* _OwnerIconPath_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::String* _LargePlaneIconPath_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _EquipIDList_k__BackingField; // 0x30
		::System::UInt32 _PlaneID_k__BackingField; // 0x38
		::System::Int32 _BaseLife_k__BackingField; // 0x3C
		::RPG::GameCore::FixPoint _BaseHP_k__BackingField; // 0x40
		::RPG::Client::PixAir::PixAirPlaneStatus _Status_k__BackingField; // 0x48
		::System::Boolean _IsSelectable_k__BackingField; // 0x4C
		::System::UInt32 _UnLockScore_k__BackingField; // 0x50
		::System::UInt32 _CoreEquipID_k__BackingField; // 0x54
		::RPG::Client::TextID _OwnerName_k__BackingField; // 0x58
		::RPG::Client::TextID _OwnerDesc_k__BackingField; // 0x68
		::RPG::Client::TextID _Name_k__BackingField; // 0x78

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
