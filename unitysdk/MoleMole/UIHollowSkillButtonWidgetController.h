#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5BA0256FCCEF80F3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199DBF10)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199DBFA0)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199DBD40)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199DBEA0)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199DC020)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x199DC080)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199DC0A0)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199DC130)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199DC1C0)
#define MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199DC250)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowSkillButtonWidgetController_TypeDefinitionIndex = 47203;

	class UIHollowSkillButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5BA0256FCCEF80F3* _view; // 0x2C0
		::UnityEngine::Events::UnityAction* OnClick; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
