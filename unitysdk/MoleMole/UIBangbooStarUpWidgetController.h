#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/BangbooBaseWidget.h"

class Class_2_79F6D62CE30E3F8E_27;
class Class_2_C832474F3EB70101;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETHASSTARMATERIAL_OFFSET UNITYSDK_OFFSET(0x19785C90)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x19785EE0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197846E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONSTARUP_OFFSET UNITYSDK_OFFSET(0x19785860)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19784770)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19784520)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x19785F90)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0x19784CA0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x197855E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWCURSTAR_OFFSET UNITYSDK_OFFSET(0x19784B50)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWNEXTSTAR_OFFSET UNITYSDK_OFFSET(0x19784C30)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWPROPERTY_OFFSET UNITYSDK_OFFSET(0x197854F0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x19784A00)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19786380)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19786320)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_0_OFFSET UNITYSDK_OFFSET(0x197863C0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_1_OFFSET UNITYSDK_OFFSET(0x197863D0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__RIGHTBTNCALL_B__13_0_OFFSET UNITYSDK_OFFSET(0x197863E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x19786420)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197864B0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19786540)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197865D0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x19786660)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x197866F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooStarUpWidgetController_TypeDefinitionIndex = 82378;

	class UIBangbooStarUpWidgetController : public ::MoleMole::BangbooBaseWidget
	{
	public:
		static ::System::String** StaticGet_StarUPAni()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooStarUpWidgetController_TypeDefinitionIndex)->GetStaticField(0x47060);
		}
		::Class_2_C832474F3EB70101* _view; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x2E8
		::MoleMole::UIItemIconBtnWidgetController* _itemController; // 0x2F0
		::Class_2_79F6D62CE30E3F8E_27* _ParentView; // 0x2F8
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
