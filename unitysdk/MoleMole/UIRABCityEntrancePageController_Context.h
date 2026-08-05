#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIRABCITYENTRANCEPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x16A7E330)
#define MOLEMOLE_UIRABCITYENTRANCEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7E3A0)
#define MOLEMOLE_UIRABCITYENTRANCEPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x16A7E400)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityEntrancePageController_Context_TypeDefinitionIndex = 59809;

	class UIRABCityEntrancePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* ConfirmAction; // 0x28
		::System::Action* CancelAction; // 0x30
		::System::Int32 ChallengeId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYENTRANCEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYENTRANCEPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYENTRANCEPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
