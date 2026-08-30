#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UserTicketStatus.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AgeGateTicketModel; }
namespace System { class String; }

#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1A193F00)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1A193EE0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A193F20)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1A193EC0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1A193F10)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1A193EF0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A193F30)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1A193ED0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A193F70)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A193FB0)
#define MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A193F40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateTicketUpdateModel_TypeDefinitionIndex = 7510;

	class AgeGateTicketUpdateModel : public ::System::Object
	{
	public:
		::System::String* _Birthday_k__BackingField; // 0x10
		::System::String* _TicketId_k__BackingField; // 0x18
		::System::String* _ParentEmail_k__BackingField; // 0x20
		::MiHoYo::SDK::UserTicketStatus _Status_k__BackingField; // 0x28

		::System::Void _ctor(::MiHoYo::SDK::AgeGateTicketModel* a1, ::MiHoYo::SDK::UserTicketStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AgeGateTicketModel*, ::MiHoYo::SDK::UserTicketStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_TicketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_TICKETID_OFFSET))(this);
		}

		::System::Void set_TicketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_TICKETID_OFFSET))(this, a1);
		}

		::System::String* get_ParentEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_PARENTEMAIL_OFFSET))(this);
		}

		::System::Void set_ParentEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_PARENTEMAIL_OFFSET))(this, a1);
		}

		::System::String* get_Birthday()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_BIRTHDAY_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::UserTicketStatus get_Status()
		{
			return ((::MiHoYo::SDK::UserTicketStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::MiHoYo::SDK::UserTicketStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UserTicketStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATETICKETUPDATEMODEL_SET_STATUS_OFFSET))(this, a1);
		}
	};
}
