#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_13FA7ABD96D1051D_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x188AB080)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ISALIVE_OFFSET UNITYSDK_OFFSET(0x188AB2B0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x188AAE60)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x188AB020)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188AAF70)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188AAEF0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188AAD90)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188AADF0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188AB310)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x188AB370)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x188AB400)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188AB490)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188AB530)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188AB5C0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188AB650)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootScoreWidgetController_TypeDefinitionIndex = 75137;

	class UITriggerShootScoreWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_13FA7ABD96D1051D_1* _view; // 0x2C0
		::UnityEngine::Vector3 worldPosition; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 score, ::UnityEngine::Vector3 position, ::System::Boolean isWeakPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_INIT_OFFSET))(this, score, position, isWeakPoint);
		}

		::System::Boolean IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ISALIVE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
