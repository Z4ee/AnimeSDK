#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::GameCore::Booklet { class TextElementConfig; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETTEXTELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A105810)
#define RPG_CLIENT_BOOKLETTEXTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A105880)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletTextElement_TypeDefinitionIndex = 72320;

	class BookletTextElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::TextElementConfig*>
	{
	public:
		::UnityEngine::UI::Text* Content; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETTEXTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETTEXTELEMENT_REFRESHVIEW_OFFSET))(this);
		}
	};
}
