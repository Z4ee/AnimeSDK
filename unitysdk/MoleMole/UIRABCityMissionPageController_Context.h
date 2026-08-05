#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF1980)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityMissionPageController_Context_TypeDefinitionIndex = 49198;

	class UIRABCityMissionPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitMissionId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
