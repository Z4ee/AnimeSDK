#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_68FB6AC612B480CD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_GET_EFFANIM_OFFSET UNITYSDK_OFFSET(0x14B6A310)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x14B6A550)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B6A440)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B6A4D0)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B6A370)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B6A3D0)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYMAXANIM_OFFSET UNITYSDK_OFFSET(0x14B6A880)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYNOTMAXANIM_OFFSET UNITYSDK_OFFSET(0x14B6A970)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_REFRESHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0x14B6AA60)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B6AB90)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B6ABF0)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B6AC80)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B6AD10)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B6ADA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPulchraWidgetController_TypeDefinitionIndex = 55001;

	class UIInLevelPulchraWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_68FB6AC612B480CD* _view; // 0x2B8
		::System::Int32 _index; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_EffAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_GET_EFFANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_INIT_OFFSET))(this, index);
		}

		::System::Void PlayMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYMAXANIM_OFFSET))(this);
		}

		::System::Void PlayNotMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYNOTMAXANIM_OFFSET))(this);
		}

		::System::Void RefreshLightState(::System::Int32 curAttackTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_REFRESHLIGHTSTATE_OFFSET))(this, curAttackTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
