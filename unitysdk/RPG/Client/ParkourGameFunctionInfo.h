#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_CHECKSKILLUSABLE_OFFSET UNITYSDK_OFFSET(0x9F0E540)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_CHARGINGRATIO_OFFSET UNITYSDK_OFFSET(0x9F0E4E0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_COUNTDOWNRATIO_OFFSET UNITYSDK_OFFSET(0x9F0E500)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x9F0E520)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x9F0E4C0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_CHARGINGRATIO_OFFSET UNITYSDK_OFFSET(0x9F0E4F0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_COUNTDOWNRATIO_OFFSET UNITYSDK_OFFSET(0x9F0E510)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x9F0E530)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x9F0E4D0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F0E5B0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0E650)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFunctionInfo_TypeDefinitionIndex = 50199;

	class ParkourGameFunctionInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsUsable_k__BackingField; // 0x10
		::System::Single _ChargingRatio_k__BackingField; // 0x14
		::System::Single _Quantity_k__BackingField; // 0x18
		::System::Single _CountDownRatio_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Single get_Quantity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_QUANTITY_OFFSET))(this);
		}

		::System::Void set_Quantity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_QUANTITY_OFFSET))(this, value);
		}

		::System::Single get_ChargingRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_CHARGINGRATIO_OFFSET))(this);
		}

		::System::Void set_ChargingRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_CHARGINGRATIO_OFFSET))(this, value);
		}

		::System::Single get_CountDownRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_COUNTDOWNRATIO_OFFSET))(this);
		}

		::System::Void set_CountDownRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_COUNTDOWNRATIO_OFFSET))(this, value);
		}

		::System::Boolean get_IsUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_ISUSABLE_OFFSET))(this);
		}

		::System::Void set_IsUsable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_ISUSABLE_OFFSET))(this, value);
		}

		::System::Boolean CheckSkillUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_CHECKSKILLUSABLE_OFFSET))(this);
		}

		::System::Void Update(::System::Single quantity, ::System::Single chargingRatio, ::System::Single countDownRatio, ::System::Boolean isUsable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_UPDATE_OFFSET))(this, quantity, chargingRatio, countDownRatio, isUsable);
		}
	};
}
