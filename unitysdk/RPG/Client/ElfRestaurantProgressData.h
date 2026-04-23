#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_249;
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::GameCore { class RestaurantProgressRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA26F3C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA26F880)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET UNITYSDK_OFFSET(0xA26FA40)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET UNITYSDK_OFFSET(0xA26F990)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BASECUSTOMER_OFFSET UNITYSDK_OFFSET(0xA270340)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BREAKMISSION_OFFSET UNITYSDK_OFFSET(0xA270580)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHECKDAY_OFFSET UNITYSDK_OFFSET(0xA270510)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHEFNUMBER_OFFSET UNITYSDK_OFFSET(0xA270180)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_DAYLIST_OFFSET UNITYSDK_OFFSET(0xA2705F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ELFSLOTNUM_OFFSET UNITYSDK_OFFSET(0xA270640)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_EMPLOYEEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA250270)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FARMERNUMBER_OFFSET UNITYSDK_OFFSET(0xA2701F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0xA270620)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_GOALQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xA2640B0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_HASNEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0xA270650)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA270020)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA270600)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_MENUNUMBER_OFFSET UNITYSDK_OFFSET(0xA270420)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA270490)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_OPENTIME_OFFSET UNITYSDK_OFFSET(0xA2700A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_PROFITQUESTID_OFFSET UNITYSDK_OFFSET(0xA264040)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_RECIPEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA2703B0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA2702D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLENUMBER_OFFSET UNITYSDK_OFFSET(0xA270260)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_WAITERNUMBER_OFFSET UNITYSDK_OFFSET(0xA270110)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA270040)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0xA26FC90)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0xA270630)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA270030)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA270610)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA26F930)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET UNITYSDK_OFFSET(0xA26FF30)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA26F7D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET UNITYSDK_OFFSET(0xA26FAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressData_TypeDefinitionIndex = 58717;

	class ElfRestaurantProgressData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>* _DaysList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantDayData*>* _Days; // 0x18
		::Il2CppArray<::System::UInt32>* OwnerNPCIDs; // 0x20
		::System::UInt32 _FinishDay_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::Boolean _IsFinished_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantProgressData* Create(::System::UInt32 progressID)
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET))(progressID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_249* finishedProgress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_249*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET))(this, finishedProgress);
		}

		::RPG::Client::ElfRestaurantDayData* GetDay(::System::UInt32 dayID)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET))(this, dayID);
		}

		::RPG::Client::ElfRestaurantDayData* GetDayWithOffset(::System::UInt32 dayOffset, ::RPG::Client::ElfRestaurantDayData* currentDay)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET))(this, dayOffset, currentDay);
		}

		::System::Boolean IsQuestFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* _FindNextDay(::RPG::Client::ElfRestaurantDayData* day)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET))(this, day);
		}

		::RPG::Client::ElfRestaurantDayData* TryGetNextFestival(::System::UInt32 dayID)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET))(this, dayID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET))(this, value);
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

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET))(this);
		}

		::System::Void set_FinishDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET))(this, value);
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
