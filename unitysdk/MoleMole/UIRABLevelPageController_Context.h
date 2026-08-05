#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRABLevelPageController_EOnUIOpenSelectType.h"

#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x12FF69D0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF6E70)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x12FF6ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_Context_TypeDefinitionIndex = 82372;

	class UIRABLevelPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRABLevelPageController_EOnUIOpenSelectType selectType; // 0x28
		::System::Int32 selectTowerFloor; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
