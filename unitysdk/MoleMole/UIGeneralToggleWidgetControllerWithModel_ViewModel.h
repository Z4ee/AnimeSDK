#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19E88150)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E88140)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetControllerWithModel_ViewModel_TypeDefinitionIndex = 54119;

	class UIGeneralToggleWidgetControllerWithModel_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::System::Action_1<::System::Boolean>* OnStateChangeCallback; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Boolean>* isOn; // 0x88
		::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback; // 0x90
		::System::Action_1<::System::Action*>* doubleCheckAction; // 0x98
		::System::Func_1<::System::Boolean>* CheckCanToggle; // 0xA0

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
