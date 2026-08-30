#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xE16F2D0)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_METHOD_7_94C39761778BCE52_OFFSET UNITYSDK_OFFSET(0xE16F380)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xE16FEC0)
#define RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE170050)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMainCatalogElement_TypeDefinitionIndex = 72389;

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

		::RPG::Client::BookletLuaPanelParam* Method_7_94C39761778BCE52()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAINCATALOGELEMENT_METHOD_7_94C39761778BCE52_OFFSET))(this);
		}
	};
}
