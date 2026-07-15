#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_CLEARCHANGE_OFFSET UNITYSDK_OFFSET(0x19EC6200)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19EC60C0)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_GET_CHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC60A0)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_GET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC6060)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_GET_FIXAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC6080)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SETFIXAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC61B0)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SET_CHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC60B0)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC6070)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SET_FIXAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC6090)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_UPDATEAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EC6160)
#define RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC6150)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirCurrencyData_TypeDefinitionIndex = 75286;

	class PixAirCurrencyData : public ::System::Object
	{
	public:
		::System::UInt32 _CurrentAmount_k__BackingField; // 0x10
		::System::Int32 _FixAmount_k__BackingField; // 0x14
		::System::Int32 _ChangeAmount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_GET_CURRENTAMOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentAmount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SET_CURRENTAMOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FixAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_GET_FIXAMOUNT_OFFSET))(this);
		}

		::System::Void set_FixAmount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SET_FIXAMOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ChangeAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_GET_CHANGEAMOUNT_OFFSET))(this);
		}

		::System::Void set_ChangeAmount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SET_CHANGEAMOUNT_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirCurrencyData* Create(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirCurrencyData*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void UpdateAmount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_UPDATEAMOUNT_OFFSET))(this, a1);
		}

		::System::Void SetFixAmount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_SETFIXAMOUNT_OFFSET))(this, a1);
		}

		::System::Void ClearChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRCURRENCYDATA_CLEARCHANGE_OFFSET))(this);
		}
	};
}
