#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsRowWidgetController.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0x155EE2C0)
#define MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155EE4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowInLevelWidgetController_TypeDefinitionIndex = 85562;

	class UIMissionTipsRowInLevelWidgetController : public ::MoleMole::UIMissionTipsRowWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void PlayWithCallback(::System::String* animName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET))(this, animName, callback);
		}
	};
}
