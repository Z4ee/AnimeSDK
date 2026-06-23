#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRamenStoreItemWidgetChildWindowController_AnimState.h"

class Class_2_208CC9941471731A_649;
class Class_2_79F6D62CE30E3F8E_155;
class Class_2_C1865A61828EE67A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRamenStoreItemTipsInfoWidgetWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x15F2DE70)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x15F2FB50)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F2DF40)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15F2F840)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F2E040)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15F2F920)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F2F970)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F2DAB0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F2DFD0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_PLAYSELECTFADE_OFFSET UNITYSDK_OFFSET(0x15F2F380)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SETRAMENDATA_OFFSET UNITYSDK_OFFSET(0x15F2E150)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0x15F2FCB0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F2FD80)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2FD60)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER__ONCLICK_B__8_0_OFFSET UNITYSDK_OFFSET(0x15F2FD90)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F2FDD0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15F2FE60)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F2FEF0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15F2FF90)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F2FFA0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F30030)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F300C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex = 85220;

	class UIRamenStoreItemWidgetChildWindowController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::UnityEngine::Material** StaticGet__unlockIconMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3CBA0);
		}
		static ::UnityEngine::Material** StaticGet__unlockBuffIcon2Mat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3CBA8);
		}
		static ::UnityEngine::Material** StaticGet__unlockBuffIcon1Mat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3CBB0);
		}
		static ::UnityEngine::Material** StaticGet__greyMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3CBB8);
		}
		static ::System::Int32* StaticGet__greyMatRefCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreItemWidgetChildWindowController_TypeDefinitionIndex)->GetStaticField(0xEE70);
		}
		::System::Int32 currentId; // 0x2F0
		::Class_2_79F6D62CE30E3F8E_155* _view; // 0x2F8
		::Class_2_208CC9941471731A_649* _hollowBuffTemplate; // 0x300
		::Class_2_C1865A61828EE67A* _ramenModel; // 0x308
		::MoleMole::UIRamenStoreItemWidgetChildWindowController_AnimState _animState; // 0x310
		::MoleMole::UIRamenStoreItemTipsInfoWidgetWidgetController* _tipsInfo; // 0x318
		::MoleMole::UIWidgetController* _animWidget; // 0x320

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
