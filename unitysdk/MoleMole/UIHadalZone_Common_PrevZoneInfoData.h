#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_A9098CF80773ED2D;

#define MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0A430)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_PrevZoneInfoData_TypeDefinitionIndex = 43788;

	class UIHadalZone_Common_PrevZoneInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_A9098CF80773ED2D* prevRecord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET))(this);
		}
	};
}
