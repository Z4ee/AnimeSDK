#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UserTicketStatus.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AgeGateTicketModel; }
namespace System { class String; }

#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1C7B1EF0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1C7B1ED0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C7B1F10)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1C7B1EB0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1C7B1F00)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1C7B1EE0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C7B1F20)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1C7B1EC0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7B1F60)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C7B1FC0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B1F30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateTicketUpdateModel_TypeDefinitionIndex = 19665;

	class AgeGateTicketUpdateModel : public ::System::Object
	{
	public:
		::System::String* _ParentEmail_k__BackingField; // 0x10
		::System::String* _Birthday_k__BackingField; // 0x18
		::System::String* _TicketId_k__BackingField; // 0x20
		::MiHoYo::SDK::UserTicketStatus _Status_k__BackingField; // 0x28

		::System::Void _ctor(::MiHoYo::SDK::AgeGateTicketModel* model, ::MiHoYo::SDK::UserTicketStatus update_status)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AgeGateTicketModel*, ::MiHoYo::SDK::UserTicketStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_OFFSET))(this, model, update_status);
		}

		::System::Void _ctor_1(::System::String* ticketId, ::System::Int64 timestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_1_OFFSET))(this, ticketId, timestamp);
		}

		::System::Void _ctor_2(::System::String* ticketId, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_2_OFFSET))(this, ticketId, email);
		}

		::System::String* get_TicketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_TICKETID_OFFSET))(this);
		}

		::System::Void set_TicketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_TICKETID_OFFSET))(this, value);
		}

		::System::String* get_ParentEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_PARENTEMAIL_OFFSET))(this);
		}

		::System::Void set_ParentEmail(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_PARENTEMAIL_OFFSET))(this, value);
		}

		::System::String* get_Birthday()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_BIRTHDAY_OFFSET))(this, value);
		}

		::MiHoYo::SDK::UserTicketStatus get_Status()
		{
			return ((::MiHoYo::SDK::UserTicketStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::MiHoYo::SDK::UserTicketStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UserTicketStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_STATUS_OFFSET))(this, value);
		}
	};
}
