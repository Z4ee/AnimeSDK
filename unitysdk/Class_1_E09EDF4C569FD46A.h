#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_0AFACF733846A6F9.h"
#include "unitysdk/Struct_2_CAC7B5E2CFB5753B.h"
#include "unitysdk/System/Object.h"

class Class_1_8B24B7BEBDBC5654;

#define CLASS_1_E09EDF4C569FD46A_METHOD_1_083746408CB0EE30_OFFSET UNITYSDK_OFFSET(0x1B31D060)
#define CLASS_1_E09EDF4C569FD46A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31D050)

inline static constexpr unsigned int Class_1_E09EDF4C569FD46A_TypeDefinitionIndex = 53074;

class Class_1_E09EDF4C569FD46A : public ::System::Object
{
public:
	::Class_1_8B24B7BEBDBC5654* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_8B24B7BEBDBC5654* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8B24B7BEBDBC5654*))((::PBYTE)hIl2Cpp + CLASS_1_E09EDF4C569FD46A__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_083746408CB0EE30(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E09EDF4C569FD46A_METHOD_1_083746408CB0EE30_OFFSET))(this, a1, a2);
	}
};
