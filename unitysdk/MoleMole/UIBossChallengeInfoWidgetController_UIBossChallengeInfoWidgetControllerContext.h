#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_UIBOSSCHALLENGEINFOWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC05A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext_TypeDefinitionIndex = 45918;

	class UIBossChallengeInfoWidgetController_UIBossChallengeInfoWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* ctrlerVisibleChangedCb; // 0x28
		::MoleMole::UIBossChallengePageController_RoomInfoData roomData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER_UIBOSSCHALLENGEINFOWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
