#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_6C576119380E31D1;
namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONCARDSET_OFFSET UNITYSDK_OFFSET(0x17340A80)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17340970)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17340A00)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17340740)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173407A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17340AD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17340BB0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17340C40)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17340CD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17340D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffWidgetController_TypeDefinitionIndex = 83297;

	class UIBabeltowerFightingBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6C576119380E31D1* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* buffs; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnCardSet(::System::Int32 cardID, ::System::Int32 cardSetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER_ONCARDSET_OFFSET))(this, cardID, cardSetID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
