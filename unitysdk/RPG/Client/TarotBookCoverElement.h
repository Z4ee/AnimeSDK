#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKCOVERELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC9D9790)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT_METHOD_7_653F7195DAB048FB_OFFSET UNITYSDK_OFFSET(0xC9D9840)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC9D9900)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D99E0)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC9D9A30)
#define RPG_CLIENT_TAROTBOOKCOVERELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC9D9AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCoverElement_TypeDefinitionIndex = 67700;

	class TarotBookCoverElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CustomPageElementConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* Method_7_653F7195DAB048FB()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT_METHOD_7_653F7195DAB048FB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCOVERELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
