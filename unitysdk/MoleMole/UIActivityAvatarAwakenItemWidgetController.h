#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_208CC9941471731A_193;
class Class_2_60638234271CCDB8_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E3D190)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15E3DEE0)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONREWARDLISTFOCUSED_OFFSET UNITYSDK_OFFSET(0x15E3DE80)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15E3D2A0)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E3D220)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E3CE30)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_REFRESHFOCUS_OFFSET UNITYSDK_OFFSET(0x15E3DCA0)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15E3D380)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3DF70)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E3DF80)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15E3E010)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15E3E0A0)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E3E140)
#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E3E1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAvatarAwakenItemWidgetController_TypeDefinitionIndex = 74167;

	class UIActivityAvatarAwakenItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_2* _view; // 0x2F0
		::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>*>* _rewardHolders; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* _rewardItems; // 0x300
		::Class_2_208CC9941471731A_193* m_cfg; // 0x308
		::UnityEngine::Color m_themeColor; // 0x310
		::System::Boolean _isListFocused; // 0x320
		::System::Boolean _rewardListFocused; // 0x321
		::System::Boolean _isSelected; // 0x322

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_REFRESHFOCUS_OFFSET))(this);
		}

		::System::Void OnRewardListFocused(::System::Boolean isFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONREWARDLISTFOCUSED_OFFSET))(this, isFocused);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
