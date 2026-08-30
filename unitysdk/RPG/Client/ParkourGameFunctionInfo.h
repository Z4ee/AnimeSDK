#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_CHECKSKILLUSABLE_OFFSET UNITYSDK_OFFSET(0x1C4EA3A0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_CHARGINGRATIO_OFFSET UNITYSDK_OFFSET(0x1C4EA340)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_COUNTDOWNRATIO_OFFSET UNITYSDK_OFFSET(0x1C4EA360)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x1C4EA380)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x1C4EA320)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_CHARGINGRATIO_OFFSET UNITYSDK_OFFSET(0x1C4EA350)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_COUNTDOWNRATIO_OFFSET UNITYSDK_OFFSET(0x1C4EA370)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x1C4EA390)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x1C4EA330)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4EA410)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EA4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFunctionInfo_TypeDefinitionIndex = 61934;

	class ParkourGameFunctionInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsUsable_k__BackingField; // 0x10
		::System::Single _CountDownRatio_k__BackingField; // 0x14
		::System::Single _Quantity_k__BackingField; // 0x18
		::System::Single _ChargingRatio_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Single get_Quantity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_QUANTITY_OFFSET))(this);
		}

		::System::Void set_Quantity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_QUANTITY_OFFSET))(this, a1);
		}

		::System::Single get_ChargingRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_CHARGINGRATIO_OFFSET))(this);
		}

		::System::Void set_ChargingRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_CHARGINGRATIO_OFFSET))(this, a1);
		}

		::System::Single get_CountDownRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_COUNTDOWNRATIO_OFFSET))(this);
		}

		::System::Void set_CountDownRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_COUNTDOWNRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_ISUSABLE_OFFSET))(this);
		}

		::System::Void set_IsUsable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_ISUSABLE_OFFSET))(this, a1);
		}

		::System::Boolean CheckSkillUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_CHECKSKILLUSABLE_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_UPDATE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
