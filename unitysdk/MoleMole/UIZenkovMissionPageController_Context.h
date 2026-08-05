#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVMISSIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA5C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionPageController_Context_TypeDefinitionIndex = 83732;

	class UIZenkovMissionPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitDungeonId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
