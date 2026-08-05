#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_652;
class Class_2_60638234271CCDB8_85;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_GET_NONEMPTYROOT_OFFSET UNITYSDK_OFFSET(0x10F15F90)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x10F162D0)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10F14E60)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x10F16160)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x10F150F0)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10F15060)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10F14EF0)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x10F15E70)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_SETWEAKFOCUS_OFFSET UNITYSDK_OFFSET(0x10F16210)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10F16320)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x10F16460)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10F16470)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x10F16500)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x10F16590)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10F16630)
#define MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10F166C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchItemWidgetController_TypeDefinitionIndex = 79741;

	class UIZenkovWorkbenchItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_85* _view; // 0x2F0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardRarityWidget; // 0x2F8
		::System::UInt32 _productId; // 0x300
		::Class_2_208CC9941471731A_652* _productConfig; // 0x308
		::Il2CppArray<::System::String*>* rarityBgPath; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetWeakFocus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_SETWEAKFOCUS_OFFSET))(this, enable);
		}

		::UnityEngine::GameObject* get_NonEmptyRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_GET_NONEMPTYROOT_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
