#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FF4F0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_COMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xB8FF590)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_CUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xB8FF550)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_DAILYTHUMB_OFFSET UNITYSDK_OFFSET(0xB8FF540)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_GOLDEARNED_OFFSET UNITYSDK_OFFSET(0xB8FF530)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_MAXCOMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xB8FF600)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xB8FF560)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TOTALLIFETIME_OFFSET UNITYSDK_OFFSET(0xB8FF570)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xB8FF1D0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_COMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xB8FF5A0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_CUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xB8FF420)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_DAILYTHUMB_OFFSET UNITYSDK_OFFSET(0xB8FF3C0)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_GOLDEARNED_OFFSET UNITYSDK_OFFSET(0xB8FF360)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_MAXCOMBOCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0xB8FF610)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xB8FF480)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TOTALLIFETIME_OFFSET UNITYSDK_OFFSET(0xB8FF580)
#define RPG_CLIENT_ELFRESTAURANTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF620)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantViewModel_TypeDefinitionIndex = 59681;

	class ElfRestaurantViewModel : public ::System::Object
	{
	public:
		::System::Int32 _MaxComboCustomerCnt_k__BackingField; // 0x10
		::System::Single _TotalLifeTime_k__BackingField; // 0x14
		::System::Int32 _ComboCustomerCnt; // 0x18
		::System::Int32 _GoldEarned; // 0x1C
		::System::Single _TimeCountDown; // 0x20
		::System::Int32 _DailyThumb; // 0x24
		::System::Int32 _CustomerCnt; // 0x28

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

		::System::Void set_GoldEarned(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_GOLDEARNED_OFFSET))(this, a1);
		}

		::System::Int32 get_DailyThumb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_DAILYTHUMB_OFFSET))(this);
		}

		::System::Void set_DailyThumb(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_DAILYTHUMB_OFFSET))(this, a1);
		}

		::System::Int32 get_CustomerCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_CUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_CustomerCnt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_CUSTOMERCNT_OFFSET))(this, a1);
		}

		::System::Single get_TimeCountDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TIMECOUNTDOWN_OFFSET))(this);
		}

		::System::Void set_TimeCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TIMECOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Single get_TotalLifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_TOTALLIFETIME_OFFSET))(this);
		}

		::System::Void set_TotalLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_TOTALLIFETIME_OFFSET))(this, a1);
		}

		::System::Int32 get_ComboCustomerCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_COMBOCUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_ComboCustomerCnt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_COMBOCUSTOMERCNT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxComboCustomerCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_GET_MAXCOMBOCUSTOMERCNT_OFFSET))(this);
		}

		::System::Void set_MaxComboCustomerCnt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTVIEWMODEL_SET_MAXCOMBOCUSTOMERCNT_OFFSET))(this, a1);
		}
	};
}
