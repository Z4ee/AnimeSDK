#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/BangbooBaseWidget.h"

class Class_2_79F6D62CE30E3F8E_21;
class Class_2_C832474F3EB70101_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETHASSTARMATERIAL_OFFSET UNITYSDK_OFFSET(0x16ED93E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x16ED9630)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ED7E40)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONSTARUP_OFFSET UNITYSDK_OFFSET(0x16ED8FB0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ED7ED0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ED7C80)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x16ED96E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0x16ED8410)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x16ED8D30)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWCURSTAR_OFFSET UNITYSDK_OFFSET(0x16ED82C0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWNEXTSTAR_OFFSET UNITYSDK_OFFSET(0x16ED83A0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWPROPERTY_OFFSET UNITYSDK_OFFSET(0x16ED8C40)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x16ED8160)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ED9AD0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED9A70)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_0_OFFSET UNITYSDK_OFFSET(0x16ED9B10)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_1_OFFSET UNITYSDK_OFFSET(0x16ED9B20)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__RIGHTBTNCALL_B__13_0_OFFSET UNITYSDK_OFFSET(0x16ED9B30)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x16ED9B60)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ED9BF0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ED9C80)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ED9D10)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x16ED9DA0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x16ED9E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooStarUpWidgetController_TypeDefinitionIndex = 64019;

	class UIBangbooStarUpWidgetController : public ::MoleMole::BangbooBaseWidget
	{
	public:
		static ::System::String** StaticGet_StarUPAni()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooStarUpWidgetController_TypeDefinitionIndex)->GetStaticField(0x431A0);
		}
		::Class_2_C832474F3EB70101_1* _view; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x2E8
		::MoleMole::UIItemIconBtnWidgetController* _itemController; // 0x2F0
		::Class_2_79F6D62CE30E3F8E_21* _ParentView; // 0x2F8
		::System::Int32 useMat; // 0x300
		::System::Boolean isStarUpShowing; // 0x304
		::System::Boolean isUseAdaptiveItem; // 0x305
		::System::Boolean isSuggestUseAdaptiveItem; // 0x306

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void ShowProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWPROPERTY_OFFSET))(this);
		}

		::System::Void ShowCurStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWCURSTAR_OFFSET))(this);
		}

		::System::Void ShowNextStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWNEXTSTAR_OFFSET))(this);
		}

		::System::Void SetStar(::System::Int32 starCount, ::UnityEngine::Transform* starRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETSTAR_OFFSET))(this, starCount, starRoot);
		}

		::System::Void OnStarUp(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONSTARUP_OFFSET))(this, arg);
		}

		::System::Boolean GetHasStarMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETHASSTARMATERIAL_OFFSET))(this);
		}

		::System::Void SetConsume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETCONSUME_OFFSET))(this);
		}

		::System::Void RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::String* GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::Void _OnStarUp_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_0_OFFSET))(this);
		}

		::System::Void _OnStarUp_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_1_OFFSET))(this);
		}

		::System::Void _RightBtnCall_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__RIGHTBTNCALL_B__13_0_OFFSET))(this);
		}

		::System::String* __base_GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void __base_UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET))(this);
		}
	};
}
