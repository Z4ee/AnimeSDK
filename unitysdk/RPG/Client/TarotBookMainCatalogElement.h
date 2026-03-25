#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA550A00)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_METHOD_7_A611F143A0941284_OFFSET UNITYSDK_OFFSET(0xA550AB0)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA551670)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5517E0)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA551830)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA5518E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMainCatalogElement_TypeDefinitionIndex = 59369;

	class TarotBookMainCatalogElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CustomPageElementConfig*>
	{
	public:
		// static const ::System::Int32 FirstChapterListBeginIndex = 0x1; // 0x0
		// static const ::System::Int32 FirstChapterListEndIndex = 0x6; // 0x0
		// static const ::System::Int32 SecondChapterListBeginIndex = 0x7; // 0x0
		// static const ::System::Int32 SecondChapterListEndIndex = 0xC; // 0x0
		// static const ::System::Int32 SpecialChapterIndex = 0xD; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* Method_7_A611F143A0941284()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_METHOD_7_A611F143A0941284_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
