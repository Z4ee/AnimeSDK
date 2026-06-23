#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRABLevelPageController_EOnUIOpenSelectType.h"

#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x15F2D080)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2D520)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x15F2D580)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_Context_TypeDefinitionIndex = 78506;

	class UIRABLevelPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectTowerFloor; // 0x28
		::MoleMole::UIRABLevelPageController_EOnUIOpenSelectType selectType; // 0x2C

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
