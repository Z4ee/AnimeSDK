#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_D76391934630D6CD;
class Class_2_9FBB709904E5162A;
class Class_3_01B4CC30216C9ABE_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_GETHOST_OFFSET UNITYSDK_OFFSET(0x1EC61200)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EC61330)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1EC614C0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC61670)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EC615E0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EC60F00)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EC612B0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_SENDCLICK_OFFSET UNITYSDK_OFFSET(0x1EC60FF0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC61E60)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EC61E70)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EC61E80)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1EC61F10)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC61FA0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EC62040)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EC620D0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EC62160)

namespace MoleMole
{
	inline static constexpr unsigned int UICpSelectItemWidgetController_TypeDefinitionIndex = 94843;

	class UICpSelectItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_9FBB709904E5162A* _view; // 0x2F0
		::Class_1_D76391934630D6CD* _info; // 0x2F8
		::MoleMole::UIGeneralPopUpHintWidgetController* _popCtrl; // 0x300
		::System::Boolean showRedpoint; // 0x308
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* _loadSprite; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SendClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_SENDCLICK_OFFSET))(this);
		}

		::Class_3_01B4CC30216C9ABE_5* GetHost()
		{
			return ((::Class_3_01B4CC30216C9ABE_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_GETHOST_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
