#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B219A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPreparePageController_Context_TypeDefinitionIndex = 80719;

	class UIZenkovPreparePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DungeonId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
