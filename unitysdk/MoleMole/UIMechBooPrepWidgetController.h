#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_181;
class Class_2_79F6D62CE30E3F8E_80;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_GETRANKRARITYICONPATH_OFFSET UNITYSDK_OFFSET(0x17453C70)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ISCLOSETORESETTIME_OFFSET UNITYSDK_OFFSET(0x17454EE0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17453B60)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17453BF0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17453A90)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17453AF0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17453E20)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174550C0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17455120)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174551B0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17455240)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174552D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepWidgetController_TypeDefinitionIndex = 49182;

	class UIMechBooPrepWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_80* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Foundation::AssetPath GetRankRarityIconPath(::System::Int32 rank)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_GETRANKRARITYICONPATH_OFFSET))(this, rank);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_181* levelInfo, ::System::Action_1<::Class_0_16E4307DCC419505_181*>* onClickScriptBtn)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_181*, ::System::Action_1<::Class_0_16E4307DCC419505_181*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, levelInfo, onClickScriptBtn);
		}

		::System::Boolean IsCloseToResetTime(::System::Int64 unlockTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER_ISCLOSETORESETTIME_OFFSET))(this, unlockTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
