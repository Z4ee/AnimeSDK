#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_5D0998FB29ADE574_1;

#define MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18810E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_PrevZoneInfoData_TypeDefinitionIndex = 83408;

	class UIHadalZone_Common_PrevZoneInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_5D0998FB29ADE574_1* prevRecord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET))(this);
		}
	};
}
