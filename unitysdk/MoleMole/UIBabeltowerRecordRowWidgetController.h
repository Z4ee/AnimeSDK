#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_833114529D3A60D4.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_754022533D501C3E_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1895B3D0)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1895B460)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1895B300)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1895B360)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x1895B6A0)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1895B4E0)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1895B850)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1895B8D0)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1895BE30)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1895BEC0)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1895BF50)
#define MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1895BFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordRowWidgetController_TypeDefinitionIndex = 78229;

	class UIBabeltowerRecordRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_754022533D501C3E_4* _view; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::Enum_3_833114529D3A60D4, ::System::String*>* recordKey; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Enum_3_833114529D3A60D4 type, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_833114529D3A60D4, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, type, value);
		}

		::System::Void RefreshView_1(::Enum_3_833114529D3A60D4 type, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_833114529D3A60D4, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, type, value);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
