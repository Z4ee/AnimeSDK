#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_399;
class Class_2_64787C73229A04B0_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18512280)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18512310)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x185121B0)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18512210)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18512390)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x185125D0)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_SHOULDIGNORE_OFFSET UNITYSDK_OFFSET(0x18512750)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x185127F0)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18512850)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185128E0)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18512970)
#define MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18512A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerTrickTechRowWidgetController_TypeDefinitionIndex = 58307;

	class UIBabeltowerTrickTechRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_64787C73229A04B0_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_399* popGetter, ::System::Int32 avatarid, ::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_399*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, popGetter, avatarid, score);
		}

		::System::Void SetEmpty(::System::Boolean empty, ::System::Boolean showScore, ::System::Boolean showPlayVideo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, empty, showScore, showPlayVideo);
		}

		::System::Boolean ShouldIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER_SHOULDIGNORE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKTECHROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
