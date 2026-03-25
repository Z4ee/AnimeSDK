#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_240;
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::GameCore { class RestaurantProgressRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95E90D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95E9590)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET UNITYSDK_OFFSET(0x95E9750)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET UNITYSDK_OFFSET(0x95E96A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BASECUSTOMER_OFFSET UNITYSDK_OFFSET(0x95E9F00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BREAKMISSION_OFFSET UNITYSDK_OFFSET(0x95EA050)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHECKDAY_OFFSET UNITYSDK_OFFSET(0x95E9FE0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHEFNUMBER_OFFSET UNITYSDK_OFFSET(0x95BF630)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_DAYLIST_OFFSET UNITYSDK_OFFSET(0x95EA0C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ELFSLOTNUM_OFFSET UNITYSDK_OFFSET(0x95EA110)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_EMPLOYEEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x95CAA70)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FARMERNUMBER_OFFSET UNITYSDK_OFFSET(0x95BF6A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0x95EA0F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_GOALQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x95DDDB0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_HASNEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0x95EA120)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x95E9D30)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x95EA0D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_MENUNUMBER_OFFSET UNITYSDK_OFFSET(0x95BED00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95BFA80)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_OPENTIME_OFFSET UNITYSDK_OFFSET(0x95E9DB0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_PROFITQUESTID_OFFSET UNITYSDK_OFFSET(0x95DDD40)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_RECIPEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x95E9F70)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x95E9E90)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLENUMBER_OFFSET UNITYSDK_OFFSET(0x95E9E20)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_WAITERNUMBER_OFFSET UNITYSDK_OFFSET(0x95BF5C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x95E9D50)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x95E99A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0x95EA100)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x95E9D40)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x95EA0E0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x95E9640)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET UNITYSDK_OFFSET(0x95E9C40)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95E94E0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET UNITYSDK_OFFSET(0x95E97D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressData_TypeDefinitionIndex = 51769;

	class ElfRestaurantProgressData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantDayData*>* _Days; // 0x10
		::Il2CppArray<::System::UInt32>* OwnerNPCIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>* _DaysList; // 0x20
		::System::Boolean _IsFinished_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::UInt32 _FinishDay_k__BackingField; // 0x30

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

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_240* finishedProgress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_240*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET))(this, finishedProgress);
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
