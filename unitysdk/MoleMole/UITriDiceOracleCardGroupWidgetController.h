#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_861;
class Class_2_66D04185C1273380;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F9A360)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F9A3F0)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F9A290)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F9A2F0)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_SHOWSAMENAMECARD_OFFSET UNITYSDK_OFFSET(0x15F9A470)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9AC20)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F9AC80)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F9AD10)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F9ADA0)
#define MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F9AE30)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleCardGroupWidgetController_TypeDefinitionIndex = 76917;

	class UITriDiceOracleCardGroupWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_66D04185C1273380* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowSameNameCard(::System::Boolean isLocked, ::Class_2_208CC9941471731A_861* template_, ::System::Collections::Generic::List_1<::System::Int32>* showImgListInt, ::System::Boolean showTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_208CC9941471731A_861*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER_SHOWSAMENAMECARD_OFFSET))(this, isLocked, template_, showImgListInt, showTitle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDGROUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
