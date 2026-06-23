#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_6A0D4EAED55BBF8C;
class Class_2_0635D45669B13199;
class Class_2_DDDA8B6B2BF87559;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISearchObjectTaskRowWidgetControllerContext; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x17B84050)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_GET_SCANMAP_OFFSET UNITYSDK_OFFSET(0x17B83F90)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17B83AE0)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17B83BF0)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17B83B70)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B83A80)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x17B83D10)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B84110)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17B84160)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17B841F0)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17B84290)
#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B84320)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectTaskRowWidgetController_TypeDefinitionIndex = 79271;

	class UISearchObjectTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_0635D45669B13199* _view; // 0x2F0
		::System::String* m_animFinish; // 0x2F8
		::System::String* UNKNOWN_PIC; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByContext(::MoleMole::UISearchObjectTaskRowWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISearchObjectTaskRowWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, ctx);
		}

		::Class_1_6A0D4EAED55BBF8C* get_ScanMap()
		{
			return ((::Class_1_6A0D4EAED55BBF8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_GET_SCANMAP_OFFSET))(this);
		}

		::Class_2_DDDA8B6B2BF87559* get_Model()
		{
			return ((::Class_2_DDDA8B6B2BF87559*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
