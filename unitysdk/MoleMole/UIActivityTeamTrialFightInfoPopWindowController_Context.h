#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x192840E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialFightInfoPopWindowController_Context_TypeDefinitionIndex = 66782;

	class UIActivityTeamTrialFightInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* conditionList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* effectList; // 0x30
		::System::Int32 activityID; // 0x38
		::System::Int32 questID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
