#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ELFHINTHANDLER_GETCONTENT_OFFSET UNITYSDK_OFFSET(0xB8C1C90)
#define RPG_CLIENT_ELFHINTHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0xB8C1C30)
#define RPG_CLIENT_ELFHINTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C1C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintHandler_TypeDefinitionIndex = 59621;

	class ElfHintHandler : public ::System::Object
	{
	public:
		::System::Action* _OnShown; // 0x10
		::RPG::Client::TextID _Content; // 0x18

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTHANDLER_SHOW_OFFSET))(this);
		}

		::RPG::Client::TextID GetContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTHANDLER_GETCONTENT_OFFSET))(this);
		}
	};
}
