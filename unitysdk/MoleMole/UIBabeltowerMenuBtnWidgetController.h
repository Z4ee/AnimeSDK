#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5934BFCF1206F4CB_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172BA090)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172BA120)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172B9FC0)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172BA020)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_OPENTOWERUTIL_OFFSET UNITYSDK_OFFSET(0x172BA7E0)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_REFRESHTOWERID_OFFSET UNITYSDK_OFFSET(0x172BA1A0)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_SETNAME_OFFSET UNITYSDK_OFFSET(0x172BA750)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BAD70)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172BAD10)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172BAE70)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172BAF00)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172BAF90)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172BB020)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerMenuBtnWidgetController_TypeDefinitionIndex = 61856;

	class UIBabeltowerMenuBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_towerid2LockID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerMenuBtnWidgetController_TypeDefinitionIndex)->GetStaticField(0x46B20);
		}
		::Class_2_5934BFCF1206F4CB_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshTowerID(::System::Int32 towerid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_REFRESHTOWERID_OFFSET))(this, towerid);
		}

		::System::Void SetName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_SETNAME_OFFSET))(this, name);
		}

		static ::System::Void OpenTowerUtil(::System::Int32 towerid, ::System::Boolean directOpen)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER_OPENTOWERUTIL_OFFSET))(towerid, directOpen);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
