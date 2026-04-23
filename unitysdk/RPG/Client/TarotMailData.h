#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTMAILDATA_HASSEEN_OFFSET UNITYSDK_OFFSET(0xB28D990)
#define RPG_CLIENT_TAROTMAILDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xB29C210)
#define RPG_CLIENT_TAROTMAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB29C080)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotMailData_TypeDefinitionIndex = 62730;

	class TarotMailData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* TextIDList; // 0x10
		::RPG::Client::TextID TitleTextID; // 0x18
		::RPG::Client::TextID FromTextID; // 0x28
		::RPG::Client::TextID ToTextID; // 0x38
		::System::Boolean IsSpecial; // 0x48
		::System::UInt32 ID; // 0x4C

		::System::Void _ctor(::System::UInt32 mailID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA__CTOR_OFFSET))(this, mailID);
		}

		::System::Boolean HasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA_HASSEEN_OFFSET))(this);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA_MARKSEEN_OFFSET))(this);
		}
	};
}
