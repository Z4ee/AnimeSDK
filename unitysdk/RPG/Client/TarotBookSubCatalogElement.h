#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::GameCore::Booklet { class CatalogPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xB29B550)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xB29B690)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB29B760)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0xB29B7B0)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xB29B7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookSubCatalogElement_TypeDefinitionIndex = 66766;

	class TarotBookSubCatalogElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CatalogPageElementConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
