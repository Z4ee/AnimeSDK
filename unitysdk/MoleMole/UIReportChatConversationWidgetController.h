#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_F964D28D070F4284;
class Class_2_C2DD7A2A29E27407;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179AB590)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x179AB6A0)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179AB620)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179AB3E0)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179ABA20)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179ABA30)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x179ABAC0)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179ABB60)
#define MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179ABBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportChatConversationWidgetController_TypeDefinitionIndex = 70253;

	class UIReportChatConversationWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_C2DD7A2A29E27407* _view; // 0x2F0
		::Class_1_F964D28D070F4284* _data; // 0x2F8
		::System::Boolean _isSelected; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATCONVERSATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
