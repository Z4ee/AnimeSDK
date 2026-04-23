#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityAvatarDeliverRow; }
namespace System { class String; }

#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D29A50)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9D297A0)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILCONTENT_OFFSET UNITYSDK_OFFSET(0x9D29930)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILGREETING_OFFSET UNITYSDK_OFFSET(0x9D298B0)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9D299B0)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9D29820)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9D29740)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D29A30)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryAvatarDeliverModule_DelivererData_TypeDefinitionIndex = 57558;

	class AnniversaryAvatarDeliverModule_DelivererData : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10

		::System::Void _ctor(::RPG::GameCore::ActivityAvatarDeliverRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityAvatarDeliverRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA__CTOR_OFFSET))(this, row);
		}

		::RPG::GameCore::ActivityAvatarDeliverRow* get__Row()
		{
			return ((::RPG::GameCore::ActivityAvatarDeliverRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET__ROW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MailGreeting()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILGREETING_OFFSET))(this);
		}

		::RPG::Client::TextID get_MailContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILCONTENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_MailSignature()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILSIGNATURE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::AnniversaryAvatarDeliverModule_DelivererData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AnniversaryAvatarDeliverModule_DelivererData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_COMPARETO_OFFSET))(this, other);
		}
	};
}
