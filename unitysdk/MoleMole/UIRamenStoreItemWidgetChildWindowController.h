#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRamenStoreItemWidgetChildWindowController_AnimState.h"

class Class_2_208CC9941471731A_985;
class Class_2_79F6D62CE30E3F8E_109;
class Class_2_C1865A61828EE67A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRamenStoreItemTipsInfoWidgetWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0xEB8F0E0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0xEB90F40)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEB8F1B0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xEB90C30)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEB8F2B0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xEB90D10)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEB90D60)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEB8ED10)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEB8F240)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_PLAYSELECTFADE_OFFSET UNITYSDK_OFFSET(0xEB90770)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SETRAMENDATA_OFFSET UNITYSDK_OFFSET(0xEB8F3C0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0xEB910A0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB91170)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEB91150)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__ONCLICK_B__8_0_OFFSET UNITYSDK_OFFSET(0xEB91180)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEB911C0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xEB91250)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEB912E0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xEB91380)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEB91390)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEB91420)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEB914B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex = 53403;

	class UIRamenStoreItemWidgetChildWindowController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::UnityEngine::Material** StaticGet__unlockIconMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3AC00);
		}
		static ::UnityEngine::Material** StaticGet__unlockBuffIcon1Mat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3AC08);
		}
		static ::UnityEngine::Material** StaticGet__greyMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3AC10);
		}
		static ::UnityEngine::Material** StaticGet__unlockBuffIcon2Mat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3AC18);
		}
		static ::System::Int32* StaticGet__greyMatRefCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0xE720);
		}
		::System::Int32 currentId; // 0x2E8
		::Class_2_79F6D62CE30E3F8E_109* _view; // 0x2F0
		::Class_2_208CC9941471731A_985* _hollowBuffTemplate; // 0x2F8
		::Class_2_C1865A61828EE67A* _ramenModel; // 0x300
		::MoleMole::UIRamenStoreItemWidgetChildWindowController_AnimState _animState; // 0x308
		::MoleMole::UIRamenStoreItemTipsInfoWidgetWidgetController* _tipsInfo; // 0x310
		::MoleMole::UIWidgetController* _animWidget; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void SetRamenData(::System::Int32 ramenId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SETRAMENDATA_OFFSET))(this, ramenId);
		}

		::System::Void ShowEmpty(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SHOWEMPTY_OFFSET))(this, show);
		}

		::System::Void PlaySelectFade(::System::Boolean fadeIn, ::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_PLAYSELECTFADE_OFFSET))(this, fadeIn, immediately);
		}

		::System::Void _OnClick_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__ONCLICK_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
