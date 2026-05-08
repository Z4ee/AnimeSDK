#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/BangbooBaseWidget.h"

class Class_2_79F6D62CE30E3F8E_84;
class Class_2_C832474F3EB70101_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETHASSTARMATERIAL_OFFSET UNITYSDK_OFFSET(0x1563F320)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x1563F570)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1563DD60)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONSTARUP_OFFSET UNITYSDK_OFFSET(0x1563EEF0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1563DDF0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1563DBA0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x1563F620)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0x1563E330)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x1563EC70)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWCURSTAR_OFFSET UNITYSDK_OFFSET(0x1563E1E0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWNEXTSTAR_OFFSET UNITYSDK_OFFSET(0x1563E2C0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_SHOWPROPERTY_OFFSET UNITYSDK_OFFSET(0x1563EB80)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1563E080)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1563FA10)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1563F9B0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_0_OFFSET UNITYSDK_OFFSET(0x1563FA50)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__ONSTARUP_B__9_1_OFFSET UNITYSDK_OFFSET(0x1563FA60)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER__RIGHTBTNCALL_B__13_0_OFFSET UNITYSDK_OFFSET(0x1563FA70)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x1563FAB0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1563FB40)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1563FBD0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1563FC60)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x1563FCF0)
#define MOLEMOLE_UIBANGBOOSTARUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1563FD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooStarUpWidgetController_TypeDefinitionIndex = 64800;

	class UIBangbooStarUpWidgetController : public ::MoleMole::BangbooBaseWidget
	{
	public:
		static ::System::String** StaticGet_StarUPAni()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooStarUpWidgetController_TypeDefinitionIndex)->GetStaticField(0x40720);
		}
		::Class_2_C832474F3EB70101_1* _view; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x2E0
		::MoleMole::UIItemIconBtnWidgetController* _itemController; // 0x2E8
		::Class_2_79F6D62CE30E3F8E_84* _ParentView; // 0x2F0
		::System::Int32 useMat; // 0x2F8
		::System::Boolean isStarUpShowing; // 0x2FC
		::System::Boolean isUseAdaptiveItem; // 0x2FD
		::System::Boolean isSuggestUseAdaptiveItem; // 0x2FE

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
