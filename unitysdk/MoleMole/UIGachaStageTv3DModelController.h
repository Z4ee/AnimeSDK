#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStageTv3DModelControllerBase.h"

class Class_2_60638234271CCDB8_19;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET UNITYSDK_OFFSET(0x172EBD70)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172EBC70)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172EBD00)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172EBBC0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172EBC20)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172ECD20)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172ECD30)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172ECDC0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172ECDD0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172ECE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageTv3DModelController_TypeDefinitionIndex = 42449;

	class UIGachaStageTv3DModelController : public ::MoleMole::UIGachaStageTv3DModelControllerBase
	{
	public:
		::Class_2_60638234271CCDB8_19* _view; // 0x6B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyItemRef2BaseCtrler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
