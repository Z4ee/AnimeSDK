#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE6080)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___C__DISPLAYCLASS3_0__SETURL_B__0_OFFSET UNITYSDK_OFFSET(0x19EE6090)
#define MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___C__DISPLAYCLASS3_0__SETURL_B__1_OFFSET UNITYSDK_OFFSET(0x19EE61A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClickToProceed02WidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 61559;

	class UIGeneralClickToProceed02WidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Action_1<::System::String*>* __9__1; // 0x18
		::System::Boolean webView; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetUrl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___C__DISPLAYCLASS3_0__SETURL_B__0_OFFSET))(this);
		}

		::System::Void _SetUrl_b__1(::System::String* convertUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLICKTOPROCEED02WIDGETCONTROLLER___C__DISPLAYCLASS3_0__SETURL_B__1_OFFSET))(this, convertUrl);
		}
	};
}
