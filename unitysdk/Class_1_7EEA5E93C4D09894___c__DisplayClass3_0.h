#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersDepartmentData; }

#define CLASS_1_7EEA5E93C4D09894___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB822050)
#define CLASS_1_7EEA5E93C4D09894___C__DISPLAYCLASS3_0__GETDEPARTMENTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB8242A0)

inline static constexpr unsigned int Class_1_7EEA5E93C4D09894___c__DisplayClass3_0_TypeDefinitionIndex = 78566;

class Class_1_7EEA5E93C4D09894___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt32 departmentID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetDepartmentData_b__0(::RPG::Client::TeamTowers::TeamTowersDepartmentData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894___C__DISPLAYCLASS3_0__GETDEPARTMENTDATA_B__0_OFFSET))(this, a1);
	}
};
