#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_697;
class Class_2_79AE422BA06F6D26_40;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DCCC0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONJUMPCLICK_OFFSET UNITYSDK_OFFSET(0x186DE8F0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x186DCDD0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DCD50)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DCA60)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_REFRESHREWARDS_OFFSET UNITYSDK_OFFSET(0x186DDBA0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x186DDB10)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186DEAD0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER__ONJUMPCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0x186DEAE0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DEBA0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x186DEC30)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DECD0)
#define MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DED60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTowerItemWidgetController_TypeDefinitionIndex = 43960;

	class UIHandBookTowerItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 towerId; // 0x2F0
		::Class_2_79AE422BA06F6D26_40* _view; // 0x2F8
		::Class_2_208CC9941471731A_697* _data; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void RefreshRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_REFRESHREWARDS_OFFSET))(this);
		}

		::System::Void OnJumpClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER_ONJUMPCLICK_OFFSET))(this);
		}

		::System::Void _OnJumpClick_b__9_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER__ONJUMPCLICK_B__9_0_OFFSET))(this, success);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTOWERITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
