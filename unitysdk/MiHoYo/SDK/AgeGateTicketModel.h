#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/UserTicketStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_AGEGATETICKETMODEL_AGEGATEFLOWTYPETOSTRING_OFFSET UNITYSDK_OFFSET(0x1B72C340)
#define MIHOYO_SDK_AGEGATETICKETMODEL_EXPIRETIMETOTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B72C390)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1B72C200)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1B72C240)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1B72C1A0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1B72C220)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1B72C1C0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B72C260)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1B72C180)
#define MIHOYO_SDK_AGEGATETICKETMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B72C1E0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1B72C210)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1B72C250)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1B72C1B0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1B72C230)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1B72C1D0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B72C270)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1B72C190)
#define MIHOYO_SDK_AGEGATETICKETMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B72C1F0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_TOLOGSTRING_OFFSET UNITYSDK_OFFSET(0x1B72C600)
#define MIHOYO_SDK_AGEGATETICKETMODEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B72C3A0)
#define MIHOYO_SDK_AGEGATETICKETMODEL_USERTICKETSTATUSTOSTRING_OFFSET UNITYSDK_OFFSET(0x1B72C2F0)
#define MIHOYO_SDK_AGEGATETICKETMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72C280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateTicketModel_TypeDefinitionIndex = 7509;

	class AgeGateTicketModel : public ::System::Object
	{
	public:
		// static const ::System::String* DefaultUnixTime; // 0x0
		::System::String* _TicketId_k__BackingField; // 0x10
		::System::String* _Country_k__BackingField; // 0x18
		::System::String* _ParentEmail_k__BackingField; // 0x20
		::MiHoYo::SDK::AgeGateFlowType _Type_k__BackingField; // 0x28
		::System::String* _Birthday_k__BackingField; // 0x30
		::System::Int64 _ExpireTime_k__BackingField; // 0x38
		::System::Int32 _Cooldown_k__BackingField; // 0x40
		::MiHoYo::SDK::UserTicketStatus _Status_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL__CTOR_OFFSET))(this);
		}

		::System::String* get_TicketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_TICKETID_OFFSET))(this);
		}

		::System::Void set_TicketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_TICKETID_OFFSET))(this, a1);
		}

		::System::String* get_Country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_Country(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_COUNTRY_OFFSET))(this, a1);
		}

		::System::String* get_ParentEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_PARENTEMAIL_OFFSET))(this);
		}

		::System::Void set_ParentEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_PARENTEMAIL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::AgeGateFlowType get_Type()
		{
			return ((::MiHoYo::SDK::AgeGateFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_Birthday()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_BIRTHDAY_OFFSET))(this, a1);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_EXPIRETIME_OFFSET))(this, a1);
		}

		::System::Int32 get_Cooldown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_COOLDOWN_OFFSET))(this);
		}

		::System::Void set_Cooldown(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_COOLDOWN_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::UserTicketStatus get_Status()
		{
			return ((::MiHoYo::SDK::UserTicketStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::MiHoYo::SDK::UserTicketStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UserTicketStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_SET_STATUS_OFFSET))(this, a1);
		}

		static ::System::String* UserTicketStatusToString(::MiHoYo::SDK::UserTicketStatus a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::UserTicketStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_USERTICKETSTATUSTOSTRING_OFFSET))(a1);
		}

		static ::System::String* AgeGateFlowTypeToString(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_AGEGATEFLOWTYPETOSTRING_OFFSET))(a1);
		}

		::System::Int64 ExpireTimeToTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_EXPIRETIMETOTIMESTAMP_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToLogString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETMODEL_TOLOGSTRING_OFFSET))(this);
		}
	};
}
