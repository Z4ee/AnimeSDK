#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_5D0998FB29ADE574;

#define MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15CAFD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_PrevZoneInfoData_TypeDefinitionIndex = 54853;

	class UIHadalZone_Common_PrevZoneInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_5D0998FB29ADE574* prevRecord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET))(this);
		}
	};
}
