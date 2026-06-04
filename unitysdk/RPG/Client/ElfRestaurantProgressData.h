#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_263;
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::GameCore { class RestaurantProgressRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB8F2160)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F26E0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET UNITYSDK_OFFSET(0xB8F28A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET UNITYSDK_OFFSET(0xB8F27E0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BASECUSTOMER_OFFSET UNITYSDK_OFFSET(0xB8F32F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BREAKMISSION_OFFSET UNITYSDK_OFFSET(0xB8F3530)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHECKDAY_OFFSET UNITYSDK_OFFSET(0xB8F34C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHEFNUMBER_OFFSET UNITYSDK_OFFSET(0xB8F30C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_DAYLIST_OFFSET UNITYSDK_OFFSET(0xB8F35A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ELFSLOTNUM_OFFSET UNITYSDK_OFFSET(0xB8F35F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_EMPLOYEEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB8F31A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FARMERNUMBER_OFFSET UNITYSDK_OFFSET(0xB8F3130)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0xB8F35D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_GOALQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xB8F2E00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_HASNEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0xB8F3600)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB8F2F60)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB8F35B0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_MENUNUMBER_OFFSET UNITYSDK_OFFSET(0xB8F33D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB8F3440)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_OPENTIME_OFFSET UNITYSDK_OFFSET(0xB8F2FE0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_PROFITQUESTID_OFFSET UNITYSDK_OFFSET(0xB8F2D90)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_RECIPEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB8F3360)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB8F3280)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLENUMBER_OFFSET UNITYSDK_OFFSET(0xB8F3210)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_WAITERNUMBER_OFFSET UNITYSDK_OFFSET(0xB8F3050)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB8F2F80)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0xB8F2B00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0xB8F35E0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB8F2F70)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB8F35C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB8F2780)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET UNITYSDK_OFFSET(0xB8F2E70)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F2630)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET UNITYSDK_OFFSET(0xB8F2920)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressData_TypeDefinitionIndex = 59647;

	class ElfRestaurantProgressData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantDayData*>* _Days; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>* _DaysList; // 0x18
		::Il2CppArray<::System::UInt32>* OwnerNPCIDs; // 0x20
		::System::Boolean _IsFinished_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::UInt32 _FinishDay_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantProgressData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_263* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_263*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantDayData* GetDay(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantDayData* GetDayWithOffset(::System::UInt32 a1, ::RPG::Client::ElfRestaurantDayData* a2)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsQuestFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* _FindNextDay(::RPG::Client::ElfRestaurantDayData* a1)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantDayData* TryGetNextFestival(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantProgressRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_OpenTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_OPENTIME_OFFSET))(this);
		}

		::System::UInt32 get_WaiterNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_WAITERNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_ChefNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHEFNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_FarmerNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FARMERNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_EmployeeMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_EMPLOYEEMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_TableNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLENUMBER_OFFSET))(this);
		}

		::System::UInt32 get_TableMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLEMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_BaseCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BASECUSTOMER_OFFSET))(this);
		}

		::System::UInt32 get_RecipeMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_RECIPEMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MenuNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_MENUNUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_CheckDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHECKDAY_OFFSET))(this);
		}

		::System::UInt32 get_BreakMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BREAKMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>* get_DayList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_DAYLIST_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET))(this);
		}

		::System::Void set_FinishDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ElfSlotNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ELFSLOTNUM_OFFSET))(this);
		}

		::System::UInt32 get_ProfitQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_PROFITQUESTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GoalQuestIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_GOALQUESTIDLIST_OFFSET))(this);
		}

		::System::Boolean get_HasNextProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_HASNEXTPROGRESS_OFFSET))(this);
		}
	};
}
