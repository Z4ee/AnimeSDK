#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStageWeapon3DModelControllerBase.h"

class Class_2_60638234271CCDB8_35;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET UNITYSDK_OFFSET(0x173089D0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173088D0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17308960)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17308820)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17308880)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173090D0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173091C0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17309250)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17309260)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173092F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageWeapon3DModelController_TypeDefinitionIndex = 44899;

	class UIGachaStageWeapon3DModelController : public ::MoleMole::UIGachaStageWeapon3DModelControllerBase
	{
	public:
		::Class_2_60638234271CCDB8_35* _view; // 0x798

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyItemRef2BaseCtrler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
