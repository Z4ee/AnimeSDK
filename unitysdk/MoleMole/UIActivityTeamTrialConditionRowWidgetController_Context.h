#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIActivityTeamTrialConditionRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALCONDITIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152D7D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialConditionRowWidgetController_Context_TypeDefinitionIndex = 64070;

	class UIActivityTeamTrialConditionRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* btnInteractFalseFlags; // 0x28
		::System::Func_2<::MoleMole::UIActivityTeamTrialConditionRowWidgetController*, ::System::Boolean>* onClick; // 0x30
		::System::Int32 index; // 0x38
		::System::Int32 activityAbilityID; // 0x3C
		::System::Boolean isSelect; // 0x40
		::System::Boolean isShowSelect; // 0x41
		::System::Boolean enable; // 0x42
		::System::Int32 questID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALCONDITIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
