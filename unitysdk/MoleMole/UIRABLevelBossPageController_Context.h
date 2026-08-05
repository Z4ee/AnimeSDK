#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRABLevelBossPageController_EOnUIOpenSelectType.h"

#define MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x12FF6840)
#define MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF68E0)
#define MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x12FF6940)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossPageController_Context_TypeDefinitionIndex = 61938;

	class UIRABLevelBossPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectBossID; // 0x28
		::MoleMole::UIRABLevelBossPageController_EOnUIOpenSelectType selectType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
