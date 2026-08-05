#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattlePortal_HadalZoneV2PageController_CurrentStatus.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_UIBATTLEPORTAL_HADALZONEV2PAGECONTEXT_APPLYTELEPORTUIPARAMS_OFFSET UNITYSDK_OFFSET(0x1936A9A0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_UIBATTLEPORTAL_HADALZONEV2PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1936AB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext_TypeDefinitionIndex = 70036;

	class UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::System::Int32> OverrideSubLayerIndex; // 0x28
		::System::Nullable_1<::System::Int32> OverrideLayerIndex; // 0x30
		::MoleMole::UIBattlePortal_HadalZoneV2PageController_CurrentStatus CurrentStatus; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_UIBATTLEPORTAL_HADALZONEV2PAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyTeleportUIParams(::Il2CppArray<::System::Int32>* uiParams)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_UIBATTLEPORTAL_HADALZONEV2PAGECONTEXT_APPLYTELEPORTUIPARAMS_OFFSET))(this, uiParams);
		}
	};
}
