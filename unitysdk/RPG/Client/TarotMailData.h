#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTMAILDATA_HASSEEN_OFFSET UNITYSDK_OFFSET(0xC9DBAE0)
#define RPG_CLIENT_TAROTMAILDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xC9EAF00)
#define RPG_CLIENT_TAROTMAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EAD50)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotMailData_TypeDefinitionIndex = 63663;

	class TarotMailData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* TextIDList; // 0x10
		::RPG::Client::TextID FromTextID; // 0x18
		::RPG::Client::TextID ToTextID; // 0x28
		::System::UInt32 ID; // 0x38
		::System::Boolean IsSpecial; // 0x3C
		::RPG::Client::TextID TitleTextID; // 0x40

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA__CTOR_OFFSET))(this, a1);
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
