#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_91;
class Class_2_8139880E3DA2C2D0;
class Class_2_A8C94EA612F5CBF3_8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ISNEW_OFFSET UNITYSDK_OFFSET(0x152DEF10)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152DDE90)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONLEVELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x152DDF20)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152DF0B0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152DDBE0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152DDE20)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x152DE890)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETREAD_OFFSET UNITYSDK_OFFSET(0x152DE480)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x152DE800)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152DF130)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152DF190)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152DF220)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152DF2B0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152DF340)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioLevelSpotWidgetController_TypeDefinitionIndex = 72847;

	class UIArpeggioLevelSpotWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A8C94EA612F5CBF3_8* _view; // 0x2B8
		::System::Action* LevelClickAction; // 0x2C0
		::Class_2_208CC9941471731A_91* _levelCfg; // 0x2C8
		::Class_2_8139880E3DA2C2D0* _arpeggioModel; // 0x2D0
		::System::String* FloorStr; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLevelClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONLEVELCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetLevel(::System::Int32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, levelID);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ISNEW_OFFSET))(this);
		}

		::System::Void SetRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETREAD_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
