#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6E9568744155E92F;

#define MOLEMOLE_UIHADALZONE_COMMON_ZONEITEMINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB5780)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_ZoneItemInfoData_TypeDefinitionIndex = 54855;

	class UIHadalZone_Common_ZoneItemInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_6E9568744155E92F* entranceData; // 0x28
		::System::Boolean isValid; // 0x30
		::System::Boolean isLockButCanClick; // 0x31
		::System::Boolean isSelected; // 0x32
		::System::Int32 entranceID; // 0x34
		::System::Int32 curZoneID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_ZONEITEMINFODATA__CTOR_OFFSET))(this);
		}
	};
}
