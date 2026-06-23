#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15A76A20)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15A76A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetControllerWithModel_ViewModel_TypeDefinitionIndex = 42802;

	class UIGeneralToggleWidgetControllerWithModel_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::System::Action_1<::System::Boolean>* OnStateChangeCallback; // 0x60
		::Class_0_16E4307DCC419505_165<::System::Boolean>* isOn; // 0x68
		::System::Action_1<::System::Action*>* doubleCheckAction; // 0x70
		::System::Func_1<::System::Boolean>* CheckCanToggle; // 0x78
		::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback; // 0x80

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
