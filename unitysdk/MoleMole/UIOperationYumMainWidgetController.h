#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_138;
class Class_2_79AE422BA06F6D26_204;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x12E035A0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E03860)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONGOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x12E044D0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12E03970)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E038F0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E035B0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E037F0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12E03B50)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_1_OFFSET UNITYSDK_OFFSET(0x12E04EF0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x12E04800)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E055D0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x12E05630)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E05670)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12E05700)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E057A0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E05830)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E058C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumMainWidgetController_TypeDefinitionIndex = 79682;

	class UIOperationYumMainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_204* _view; // 0x2B8
		::System::Int32 _questID; // 0x2C0
		::Class_2_208CC9941471731A_138* _config; // 0x2C8
		::System::Boolean _toShowAnimation; // 0x2D0
		::System::String* _npcName; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_QuestID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_GET_QUESTID_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnGoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONGOBTNCLICK_OFFSET))(this);
		}

		::System::Single TryPlayAnimation(::System::Boolean& playedFinishAni)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_OFFSET))(this, playedFinishAni);
		}

		::System::Single TryPlayAnimation_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__7_0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
