#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIActivityTeamTrialConditionRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALCONDITIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173D94B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialConditionRowWidgetController_Context_TypeDefinitionIndex = 81619;

	class UIActivityTeamTrialConditionRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::MoleMole::UIActivityTeamTrialConditionRowWidgetController*, ::System::Boolean>* onClick; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* btnInteractFalseFlags; // 0x30
		::System::Int32 questID; // 0x38
		::System::Int32 index; // 0x3C
		::System::Boolean enable; // 0x40
		::System::Boolean isSelect; // 0x41
		::System::Boolean isShowSelect; // 0x42
		::System::Int32 activityAbilityID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALCONDITIONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
