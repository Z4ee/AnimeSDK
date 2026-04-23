#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ELFHINTHANDLER_GETCONTENT_OFFSET UNITYSDK_OFFSET(0xA23CB70)
#define RPG_CLIENT_ELFHINTHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0xA23CB20)
#define RPG_CLIENT_ELFHINTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA23CB10)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintHandler_TypeDefinitionIndex = 58691;

	class ElfHintHandler : public ::System::Object
	{
	public:
		::System::Action* _OnShown; // 0x10
		::RPG::Client::TextID _Content; // 0x18

		::System::Void _ctor(::RPG::Client::TextID content, ::System::Action* onShown)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTHANDLER__CTOR_OFFSET))(this, content, onShown);
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
