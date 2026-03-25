#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95DDD00)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_COMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x95F3A60)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_CUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x95F3A20)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_DAILYTHUMB_OFFSET UNITYSDK_OFFSET(0x95F3A10)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_GOLDEARNED_OFFSET UNITYSDK_OFFSET(0x95F3A00)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_MAXCOMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x95F3AD0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x95F3A30)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TOTALLIFETIME_OFFSET UNITYSDK_OFFSET(0x95F3A40)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0x95DD7E0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_COMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x95F3A70)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_CUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x95F3930)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_DAILYTHUMB_OFFSET UNITYSDK_OFFSET(0x95F38D0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_GOLDEARNED_OFFSET UNITYSDK_OFFSET(0x95F3870)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_MAXCOMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x95F3AE0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x95F3990)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TOTALLIFETIME_OFFSET UNITYSDK_OFFSET(0x95F3A50)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x95DD7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantViewModel_TypeDefinitionIndex = 51803;

	class ElfRestaurantViewModel : public ::System::Object
	{
	public:
		::System::Int32 _CustomerCnt; // 0x10
		::System::Single _TotalLifeTime_k__BackingField; // 0x14
		::System::Single _TimeCountDown; // 0x18
		::System::Int32 _ComboCustomerCnt; // 0x1C
		::System::Int32 _GoldEarned; // 0x20
		::System::Int32 _MaxComboCustomerCnt_k__BackingField; // 0x24
		::System::Int32 _DailyThumb; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_GoldEarned()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_GOLDEARNED_OFFSET))(this);
		}

		::System::Void set_GoldEarned(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_GOLDEARNED_OFFSET))(this, value);
		}

		::System::Int32 get_DailyThumb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_DAILYTHUMB_OFFSET))(this);
		}

		::System::Void set_DailyThumb(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_DAILYTHUMB_OFFSET))(this, value);
		}

		::System::Int32 get_CustomerCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_CUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_CustomerCnt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_CUSTOMERCNT_OFFSET))(this, value);
		}

		::System::Single get_TimeCountDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TIMECOUNTDOWN_OFFSET))(this);
		}

		::System::Void set_TimeCountDown(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TIMECOUNTDOWN_OFFSET))(this, value);
		}

		::System::Single get_TotalLifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TOTALLIFETIME_OFFSET))(this);
		}

		::System::Void set_TotalLifeTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TOTALLIFETIME_OFFSET))(this, value);
		}

		::System::Int32 get_ComboCustomerCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_COMBOCUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_ComboCustomerCnt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_COMBOCUSTOMERCNT_OFFSET))(this, value);
		}

		::System::Int32 get_MaxComboCustomerCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_MAXCOMBOCUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_MaxComboCustomerCnt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_MAXCOMBOCUSTOMERCNT_OFFSET))(this, value);
		}
	};
}
