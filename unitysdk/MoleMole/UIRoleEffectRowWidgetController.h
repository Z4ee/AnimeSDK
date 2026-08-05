#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_A8C94EA612F5CBF3_3;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_HIDEACTIVEICON_OFFSET UNITYSDK_OFFSET(0x17A2CFE0)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A2CB60)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONDROPDOWNCLICK_OFFSET UNITYSDK_OFFSET(0x17A2D0E0)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17A2CC70)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A2CBF0)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A2C860)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_REFRESHDETAILSTATE_OFFSET UNITYSDK_OFFSET(0x17A2CA00)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2D130)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A2D140)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17A2D1D0)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A2D270)
#define MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A2D300)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEffectRowWidgetController_TypeDefinitionIndex = 44725;

	class UIRoleEffectRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Boolean _isUnfold; // 0x2F0
		::Class_2_A8C94EA612F5CBF3_3* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void HideActiveIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_HIDEACTIVEICON_OFFSET))(this);
		}

		::System::Void OnDropDownClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_ONDROPDOWNCLICK_OFFSET))(this);
		}

		::System::Void RefreshDetailState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER_REFRESHDETAILSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
