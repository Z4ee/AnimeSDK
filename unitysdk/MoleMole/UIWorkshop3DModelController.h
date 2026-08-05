#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_6BC87267F41C82C6_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1147DD10)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1147DDA0)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1147DAB0)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1147DCC0)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1147DE10)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1147DE80)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1147DF10)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1147DF20)
#define MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1147DF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshop3DModelController_TypeDefinitionIndex = 65671;

	class UIWorkshop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_6BC87267F41C82C6_11* _view; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
