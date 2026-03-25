#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA54DF60)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_METHOD_7_653F7195DAB048FB_OFFSET UNITYSDK_OFFSET(0xA54E010)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA54E0D0)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA54E1A0)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA54E1F0)
#define RPG_CLIENT_TAROTBOOKCHARACTERELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA54E2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCharacterElement_TypeDefinitionIndex = 59364;

	class TarotBookCharacterElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CustomPageElementConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* Method_7_653F7195DAB048FB()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT_METHOD_7_653F7195DAB048FB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTERELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
