#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_47.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_42;
class Class_1_53763D498DB8321D_2;
class Class_1_6A206029A8384F7E_1;
class Class_1_CD010263573232AE_1;
class Class_1_D17272E82AE804C2_647;
class Class_1_D17272E82AE804C2_654;
class Class_1_D17272E82AE804C2_657;
class Class_1_D1E0AD3915BCCF29_78;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumRandomEventData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTargetData; }
namespace RPG::GameCore { class MuseumPhaseRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MUSEUMDATA_ADDEXHIBITITEM_OFFSET UNITYSDK_OFFSET(0xC2098D0)
#define RPG_CLIENT_MUSEUMDATA_ADDSTAFF_OFFSET UNITYSDK_OFFSET(0xC209780)
#define RPG_CLIENT_MUSEUMDATA_CALCULATEANDUPDATEDATA_OFFSET UNITYSDK_OFFSET(0xC207DE0)
#define RPG_CLIENT_MUSEUMDATA_FINISHCURTURN_OFFSET UNITYSDK_OFFSET(0xC209B40)
#define RPG_CLIENT_MUSEUMDATA_GETAREADATA_OFFSET UNITYSDK_OFFSET(0xC209510)
#define RPG_CLIENT_MUSEUMDATA_GETUNLOCKAREANUM_OFFSET UNITYSDK_OFFSET(0xC209C60)
#define RPG_CLIENT_MUSEUMDATA_GET_CURFUNDS_OFFSET UNITYSDK_OFFSET(0xC20B1C0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xC20B1A0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC20B1F0)
#define RPG_CLIENT_MUSEUMDATA_GET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xC20B250)
#define RPG_CLIENT_MUSEUMDATA_GET_FINISHTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC20B210)
#define RPG_CLIENT_MUSEUMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC207210)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMAREADATAS_OFFSET UNITYSDK_OFFSET(0xC20B150)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0xC20B270)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMTARGETDATA_OFFSET UNITYSDK_OFFSET(0xC20B290)
#define RPG_CLIENT_MUSEUMDATA_GET_RENEWPOINTDATA_OFFSET UNITYSDK_OFFSET(0xC20B170)
#define RPG_CLIENT_MUSEUMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC20B190)
#define RPG_CLIENT_MUSEUMDATA_GET_STAFFS_OFFSET UNITYSDK_OFFSET(0xC20B230)
#define RPG_CLIENT_MUSEUMDATA_GET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC20B1D0)
#define RPG_CLIENT_MUSEUMDATA_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xC209D00)
#define RPG_CLIENT_MUSEUMDATA_ISPHASELOCK_OFFSET UNITYSDK_OFFSET(0xC209600)
#define RPG_CLIENT_MUSEUMDATA_SETSTAFF_OFFSET UNITYSDK_OFFSET(0xC209670)
#define RPG_CLIENT_MUSEUMDATA_SET_CURFUNDS_OFFSET UNITYSDK_OFFSET(0xC209EF0)
#define RPG_CLIENT_MUSEUMDATA_SET_CURRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xC20B1B0)
#define RPG_CLIENT_MUSEUMDATA_SET_CURTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC20B200)
#define RPG_CLIENT_MUSEUMDATA_SET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xC20B260)
#define RPG_CLIENT_MUSEUMDATA_SET_FINISHTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC20B220)
#define RPG_CLIENT_MUSEUMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC209FD0)
#define RPG_CLIENT_MUSEUMDATA_SET_MUSEUMAREADATAS_OFFSET UNITYSDK_OFFSET(0xC20B160)
#define RPG_CLIENT_MUSEUMDATA_SET_MUSEUMRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0xC20B280)
#define RPG_CLIENT_MUSEUMDATA_SET_RENEWPOINTDATA_OFFSET UNITYSDK_OFFSET(0xC20B180)
#define RPG_CLIENT_MUSEUMDATA_SET_STAFFS_OFFSET UNITYSDK_OFFSET(0xC20B240)
#define RPG_CLIENT_MUSEUMDATA_SET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC20B1E0)
#define RPG_CLIENT_MUSEUMDATA_SYNCFINISHCURTURN_OFFSET UNITYSDK_OFFSET(0xC20AC50)
#define RPG_CLIENT_MUSEUMDATA_SYNCFUNDSCHANGE_OFFSET UNITYSDK_OFFSET(0xC20ABF0)
#define RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_1_OFFSET UNITYSDK_OFFSET(0xC20AAA0)
#define RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xC209DA0)
#define RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREASTAT_OFFSET UNITYSDK_OFFSET(0xC20AD90)
#define RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREA_OFFSET UNITYSDK_OFFSET(0xC20ACA0)
#define RPG_CLIENT_MUSEUMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2090F0)
#define RPG_CLIENT_MUSEUMDATA__GETINDEXBYAREAID_OFFSET UNITYSDK_OFFSET(0xC2095B0)
#define RPG_CLIENT_MUSEUMDATA__RESETAREASSTATE_OFFSET UNITYSDK_OFFSET(0xC20AF20)
#define RPG_CLIENT_MUSEUMDATA__SYNCAREADATAS_OFFSET UNITYSDK_OFFSET(0xC20A6B0)
#define RPG_CLIENT_MUSEUMDATA__SYNCEXHIBITITEMS_OFFSET UNITYSDK_OFFSET(0xC20A400)
#define RPG_CLIENT_MUSEUMDATA__SYNCSTAFFS_OFFSET UNITYSDK_OFFSET(0xC20A0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumData_TypeDefinitionIndex = 62020;

	class MuseumData : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_AREA_COUNT = 0x4; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _Staffs_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::MuseumAreaData*>* _MuseumAreaDatas_k__BackingField; // 0x18
		::RPG::Client::MuseumRandomEventData* _MuseumRandomEventData_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _ExhibitStuffs_k__BackingField; // 0x28
		::RPG::Client::MuseumTargetData* _MuseumTargetData_k__BackingField; // 0x30
		::RPG::Client::MuseumPropertyData* _RenewPointData_k__BackingField; // 0x38
		::RPG::GameCore::MuseumPhaseRow* _Row; // 0x40
		::System::UInt32 _CurRenewPoint_k__BackingField; // 0x48
		::System::UInt32 _FinishTurnCount_k__BackingField; // 0x4C
		::System::UInt32 _CurTurnCount_k__BackingField; // 0x50
		::System::UInt32 _CurFunds; // 0x54
		::System::UInt32 _TurnCount_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__CTOR_OFFSET))(this);
		}

		::System::Void CalculateAndUpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_CALCULATEANDUPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MuseumAreaData* GetAreaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GETAREADATA_OFFSET))(this, a1);
		}

		::System::Boolean IsPhaseLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ISPHASELOCK_OFFSET))(this);
		}

		::System::Void SetStaff(::RPG::Client::MuseumStaffData* a1, ::Enum_3_DB663931210BBC27_47 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::Enum_3_DB663931210BBC27_47))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SETSTAFF_OFFSET))(this, a1, a2);
		}

		::System::Void AddStaff(::RPG::Client::MuseumStaffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ADDSTAFF_OFFSET))(this, a1);
		}

		::System::Void AddExhibitItem(::RPG::Client::MuseumExhibitItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumExhibitItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ADDEXHIBITITEM_OFFSET))(this, a1);
		}

		::System::Void FinishCurTurn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_FINISHCURTURN_OFFSET))(this);
		}

		::System::Int32 GetUnlockAreaNum(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GETUNLOCKAREANUM_OFFSET))(this, a1);
		}

		::System::Boolean IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void SyncMuseumData(::Class_1_6A206029A8384F7E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A206029A8384F7E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_OFFSET))(this, a1);
		}

		::System::Void SyncMuseumData_1(::Class_1_CD010263573232AE_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_1_OFFSET))(this, a1);
		}

		::System::Void SyncFundsChange(::Class_1_D17272E82AE804C2_657* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_657*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCFUNDSCHANGE_OFFSET))(this, a1);
		}

		::System::Void SyncFinishCurTurn(::Class_1_D17272E82AE804C2_654* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_654*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCFINISHCURTURN_OFFSET))(this, a1);
		}

		::System::Void SyncUpgradeArea(::Class_1_D1E0AD3915BCCF29_78* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREA_OFFSET))(this, a1);
		}

		::System::Void SyncUpgradeAreaStat(::Class_1_1CBA230307F9C289_42* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREASTAT_OFFSET))(this, a1);
		}

		::System::Void _SyncAreaDatas(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_53763D498DB8321D_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCAREADATAS_OFFSET))(this, a1);
		}

		::System::Void _ResetAreasState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__RESETAREASSTATE_OFFSET))(this);
		}

		::System::Void _SyncStaffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_647*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_647*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCSTAFFS_OFFSET))(this, a1);
		}

		::System::Void _SyncExhibitItems(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCEXHIBITITEMS_OFFSET))(this, a1);
		}

		::System::Int32 _GetIndexByAreaID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__GETINDEXBYAREAID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::MuseumAreaData*>* get_MuseumAreaDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MuseumAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMAREADATAS_OFFSET))(this);
		}

		::System::Void set_MuseumAreaDatas(::Il2CppArray<::RPG::Client::MuseumAreaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_MUSEUMAREADATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumPropertyData* get_RenewPointData()
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_RENEWPOINTDATA_OFFSET))(this);
		}

		::System::Void set_RenewPointData(::RPG::Client::MuseumPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_RENEWPOINTDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumPhaseRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumPhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_CurRenewPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_CurRenewPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURRENEWPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurFunds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURFUNDS_OFFSET))(this);
		}

		::System::Void set_CurFunds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURFUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_TURNCOUNT_OFFSET))(this);
		}

		::System::Void set_TurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_TURNCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_CurTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURTURNCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_FINISHTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_FINISHTURNCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* get_Staffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_STAFFS_OFFSET))(this);
		}

		::System::Void set_Staffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_STAFFS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* get_ExhibitStuffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_EXHIBITSTUFFS_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_EXHIBITSTUFFS_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumRandomEventData* get_MuseumRandomEventData()
		{
			return ((::RPG::Client::MuseumRandomEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMRANDOMEVENTDATA_OFFSET))(this);
		}

		::System::Void set_MuseumRandomEventData(::RPG::Client::MuseumRandomEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_MUSEUMRANDOMEVENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTargetData* get_MuseumTargetData()
		{
			return ((::RPG::Client::MuseumTargetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMTARGETDATA_OFFSET))(this);
		}
	};
}
