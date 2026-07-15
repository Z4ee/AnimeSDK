#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityAvatarDeliverRow; }
namespace System { class String; }

#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19B1D660)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19B1D310)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILCONTENT_OFFSET UNITYSDK_OFFSET(0x19B1D4E0)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILGREETING_OFFSET UNITYSDK_OFFSET(0x19B1D420)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_MAILSIGNATURE_OFFSET UNITYSDK_OFFSET(0x19B1D5A0)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19B1D390)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19B1D2B0)
#define RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1D070)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryAvatarDeliverModule_DelivererData_TypeDefinitionIndex = 59632;

	class AnniversaryAvatarDeliverModule_DelivererData : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10

		::System::Void _ctor(::RPG::GameCore::ActivityAvatarDeliverRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityAvatarDeliverRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA__CTOR_OFFSET))(this, a1);
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

		::System::Int32 CompareTo(::RPG::Client::AnniversaryAvatarDeliverModule_DelivererData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AnniversaryAvatarDeliverModule_DelivererData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYAVATARDELIVERMODULE_DELIVERERDATA_COMPARETO_OFFSET))(this, a1);
		}
	};
}
