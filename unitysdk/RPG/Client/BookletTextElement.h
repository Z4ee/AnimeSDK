#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::GameCore::Booklet { class TextElementConfig; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETTEXTELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x91FB1F0)
#define RPG_CLIENT_BOOKLETTEXTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x91FB260)
#define RPG_CLIENT_BOOKLETTEXTELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x91FB2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletTextElement_TypeDefinitionIndex = 59301;

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

		::System::Void __iFixBaseProxy_RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETTEXTELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET))(this);
		}
	};
}
