#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_507DDA3332D1FC73;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_CALPREVYOROZUYALV_OFFSET UNITYSDK_OFFSET(0x186FA770)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186FA0D0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x186FB520)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186FA160)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186F9FA0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186FA060)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_1_OFFSET UNITYSDK_OFFSET(0x186FA840)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_2_OFFSET UNITYSDK_OFFSET(0x186FB7D0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_OFFSET UNITYSDK_OFFSET(0x186FA2F0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETADDEXP_OFFSET UNITYSDK_OFFSET(0x186FB430)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x186FC330)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186FC3B0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186FC410)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186FC4A0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186FC530)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186FC5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotLevelWidgetController_TypeDefinitionIndex = 71781;

	class UIInterKnotLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_507DDA3332D1FC73* _view; // 0x2C0
		::System::Single _progressOffset; // 0x2C8
		::System::Single _maxProgressValue; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshLevelTxtView(::System::Int32 addedExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_OFFSET))(this, addedExp);
		}

		::System::Void RefreshLevelTxtView_1(::System::Int32 curLv, ::System::Int32 prvLv, ::System::Int32 remainExp, ::System::Int32 expNeededForNxtLv, ::System::Int32 prvRemainExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_1_OFFSET))(this, curLv, prvLv, remainExp, expNeededForNxtLv, prvRemainExp);
		}

		::System::Void RefreshLevelTxtView_2(::System::Int32 curLv, ::System::Int32 prvLv, ::System::Int32 remainExp, ::System::Int32 prevNeededForNxtLv, ::System::Int32 expNeededForNxtLv, ::System::Int32 prvRemainExp, ::System::Int32 maxLevel, ::System::Int32 maxExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_2_OFFSET))(this, curLv, prvLv, remainExp, prevNeededForNxtLv, expNeededForNxtLv, prvRemainExp, maxLevel, maxExp);
		}

		::System::Void OnProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONPROGRESS_OFFSET))(this, progress);
		}

		::System::Int32 CalPrevYorozuyaLv(::System::Int32 addedExp, ::System::Int32 remainExp, ::System::Int32 curLv, ::System::Int32& prvRemainExp)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_CALPREVYOROZUYALV_OFFSET))(this, addedExp, remainExp, curLv, prvRemainExp);
		}

		::System::Void SetAddExp(::System::Int32 addedExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETADDEXP_OFFSET))(this, addedExp);
		}

		::System::Void SetLevelText(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETLEVELTEXT_OFFSET))(this, key);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
