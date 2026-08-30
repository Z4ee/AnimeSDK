#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }

#define CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17847640)
#define CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS5_0__GETEMPLOYEECHECK_B__0_OFFSET UNITYSDK_OFFSET(0x1784C0A0)

inline static constexpr unsigned int Class_1_AB4ED2B21F301DB7___c__DisplayClass5_0_TypeDefinitionIndex = 78993;

class Class_1_AB4ED2B21F301DB7___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 employeeID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetEmployeeCheck_b__0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS5_0__GETEMPLOYEECHECK_B__0_OFFSET))(this, a1);
	}
};
