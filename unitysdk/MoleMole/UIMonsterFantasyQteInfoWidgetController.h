#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0096754AC2F6E253_32;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F3C10)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179F3CA0)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_REFRESHTEXTKEY_OFFSET UNITYSDK_OFFSET(0x179F3D20)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179F3DB0)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F3E10)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179F3EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyQteInfoWidgetController_TypeDefinitionIndex = 68638;

	class UIMonsterFantasyQteInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_32* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshTextKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_REFRESHTEXTKEY_OFFSET))(this, key);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
