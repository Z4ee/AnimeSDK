#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D6BCF098B26738D7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x18BEB450)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BEBC60)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BEBCF0)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BEB1F0)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BEB3E0)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_REFRESHHPRATIO_OFFSET UNITYSDK_OFFSET(0x18BEB7B0)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEBD70)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BEBDD0)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BEBE60)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BEBEF0)
#define MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BEBF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopRoleWidgetController_TypeDefinitionIndex = 41224;

	class UIAreaShopRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D6BCF098B26738D7* _view; // 0x2C0
		::MoleMole::Battle::Entity* _cachedAvatarEntity; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitData(::MoleMole::Battle::Entity* avatarEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_INITDATA_OFFSET))(this, avatarEntity);
		}

		::System::Void RefreshHpRatio(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_REFRESHHPRATIO_OFFSET))(this, anim);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
