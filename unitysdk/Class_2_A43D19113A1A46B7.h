#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E09EDF4C569FD46A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_0AFACF733846A6F9.h"
#include "unitysdk/Struct_2_CAC7B5E2CFB5753B.h"

class Class_1_8B24B7BEBDBC5654;

#define CLASS_2_A43D19113A1A46B7_METHOD_2_39AD11E7C36AEA9E_OFFSET UNITYSDK_OFFSET(0x166B6F50)
#define CLASS_2_A43D19113A1A46B7_METHOD_2_84711D6D5C1CC062_OFFSET UNITYSDK_OFFSET(0x166B6FD0)
#define CLASS_2_A43D19113A1A46B7_METHOD_2_999A3EE4B4120CCE_OFFSET UNITYSDK_OFFSET(0x166B6740)
#define CLASS_2_A43D19113A1A46B7__CTOR_OFFSET UNITYSDK_OFFSET(0x166B6730)

inline static constexpr unsigned int Class_2_A43D19113A1A46B7_TypeDefinitionIndex = 83271;

class Class_2_A43D19113A1A46B7 : public ::Class_1_E09EDF4C569FD46A
{
public:
	::System::Void _ctor(::Class_1_8B24B7BEBDBC5654* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8B24B7BEBDBC5654*))((::PBYTE)hIl2Cpp + CLASS_2_A43D19113A1A46B7__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_0AFACF733846A6F9 Method_2_999A3EE4B4120CCE()
	{
		return ((::Struct_2_0AFACF733846A6F9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A43D19113A1A46B7_METHOD_2_999A3EE4B4120CCE_OFFSET))(this);
	}

	::Struct_2_CAC7B5E2CFB5753B Method_2_39AD11E7C36AEA9E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Struct_2_CAC7B5E2CFB5753B(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_A43D19113A1A46B7_METHOD_2_39AD11E7C36AEA9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_84711D6D5C1CC062(::MoleMole::HollowChessboard::HollowCell a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_A43D19113A1A46B7_METHOD_2_84711D6D5C1CC062_OFFSET))(this, a1, a2);
	}
};
