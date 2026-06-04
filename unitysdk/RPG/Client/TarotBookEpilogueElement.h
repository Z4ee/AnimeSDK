#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC9D9E00)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_METHOD_7_653F7195DAB048FB_OFFSET UNITYSDK_OFFSET(0xC9D9EB0)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC9D9F70)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9DA050)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC9DA0A0)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC9DA150)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookEpilogueElement_TypeDefinitionIndex = 67701;

	class TarotBookEpilogueElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CustomPageElementConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* Method_7_653F7195DAB048FB()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_METHOD_7_653F7195DAB048FB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
