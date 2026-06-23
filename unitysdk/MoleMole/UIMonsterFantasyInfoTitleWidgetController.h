#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_48851D22FB651A33;
namespace MoleMole { class MonsterFantasyInfoTitleContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C574B0)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C57540)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C57140)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C571A0)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x14C57280)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C575C0)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C57620)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C576B0)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C57740)
#define MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C577D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyInfoTitleWidgetController_TypeDefinitionIndex = 52362;

	class UIMonsterFantasyInfoTitleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_48851D22FB651A33* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Refresh(::MoleMole::MonsterFantasyInfoTitleContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterFantasyInfoTitleContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER_REFRESH_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYINFOTITLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
