#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_23D9BB4D5379D91C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x15F99F30)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F99E30)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F99EC0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F999C0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F99A10)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_SETCAMERA_OFFSET UNITYSDK_OFFSET(0x15F99AA0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9A0D0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x15F9A140)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F9A1D0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F9A260)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F9A270)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F9A280)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStrore3DModelController_TypeDefinitionIndex = 90918;

	class UITrendyStrore3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_23D9BB4D5379D91C* _view; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void SetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_SETCAMERA_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
