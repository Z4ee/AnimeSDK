#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_42D947D2D80CC77C;
class Class_2_C868A5F010AE909D;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18545400)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONGENERALLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0x18545CE0)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18545510)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18545490)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18545130)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18545620)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18545DA0)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x18545DB0)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18545E30)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18545EC0)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18545F60)
#define MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18545FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentLevelRowWidgetController_TypeDefinitionIndex = 51506;

	class UICommentLevelRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_42D947D2D80CC77C* _view; // 0x2F0
		::Class_2_C868A5F010AE909D* _model; // 0x2F8
		::System::Int32 _levelId; // 0x300
		::System::Int32 _index; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnGeneralLevelChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_ONGENERALLEVELCHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
