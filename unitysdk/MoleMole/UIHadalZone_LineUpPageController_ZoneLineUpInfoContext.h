#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ZONELINEUPINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF23F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineUpPageController_ZoneLineUpInfoContext_TypeDefinitionIndex = 71247;

	class UIHadalZone_LineUpPageController_ZoneLineUpInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 targetLayerIndex; // 0x28
		::System::Int32 zoneId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ZONELINEUPINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
