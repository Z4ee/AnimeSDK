#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B209BD9CC7A9C533_7;
namespace MoleMole { class MonsterFantasyInfoContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F3860)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179F38F0)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179F3340)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179F33A0)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x179F3480)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179F3970)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F39D0)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179F3A60)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179F3AF0)
#define MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179F3B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyInfoWidgetController_TypeDefinitionIndex = 56318;

	class UIMonsterFantasyInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B209BD9CC7A9C533_7* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Refresh(::MoleMole::MonsterFantasyInfoContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterFantasyInfoContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER_REFRESH_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
