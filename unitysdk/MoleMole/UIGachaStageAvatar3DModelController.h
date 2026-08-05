#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStageAvatar3DModelControllerBase.h"

class Class_2_60638234271CCDB8_118;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET UNITYSDK_OFFSET(0x1859A6A0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1859A5A0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1859A630)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1859A500)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1859A550)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1859AC50)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1859AD70)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1859AE00)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1859AE10)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1859AE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageAvatar3DModelController_TypeDefinitionIndex = 63675;

	class UIGachaStageAvatar3DModelController : public ::MoleMole::UIGachaStageAvatar3DModelControllerBase
	{
	public:
		::Class_2_60638234271CCDB8_118* _view; // 0x7A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyItemRef2BaseCtrler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
