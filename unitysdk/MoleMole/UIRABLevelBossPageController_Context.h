#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRABLevelBossPageController_EOnUIOpenSelectType.h"

#define MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x15F2CEF0)
#define MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2CF90)
#define MOLEMOLE_UIRABLEVELBOSSPAGECONTROLLER_CONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x15F2CFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossPageController_Context_TypeDefinitionIndex = 40044;

	class UIRABLevelBossPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRABLevelBossPageController_EOnUIOpenSelectType selectType; // 0x28
		::System::Int32 selectBossID; // 0x2C

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
