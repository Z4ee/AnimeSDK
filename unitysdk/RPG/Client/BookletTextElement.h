#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::GameCore::Booklet { class TextElementConfig; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETTEXTELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC967860)
#define RPG_CLIENT_BOOKLETTEXTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9678D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletTextElement_TypeDefinitionIndex = 72321;

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
