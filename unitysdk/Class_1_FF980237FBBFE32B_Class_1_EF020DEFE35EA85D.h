#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_FF980237FBBFE32B;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define CLASS_1_FF980237FBBFE32B_CLASS_1_EF020DEFE35EA85D_METHOD_1_6D84001547624ECB_OFFSET UNITYSDK_OFFSET(0x1020D1C0)
#define CLASS_1_FF980237FBBFE32B_CLASS_1_EF020DEFE35EA85D__CTOR_OFFSET UNITYSDK_OFFSET(0x1020D120)

inline static constexpr unsigned int Class_1_FF980237FBBFE32B_Class_1_EF020DEFE35EA85D_TypeDefinitionIndex = 46294;

class Class_1_FF980237FBBFE32B_Class_1_EF020DEFE35EA85D : public ::System::Object
{
public:
	::Class_1_FF980237FBBFE32B* Field_1_1; // 0x10
	::MoleMole::Config::ConfigHollowChessboard* Field_1_2; // 0x18
	::Class_5_AF65C3A968E836D2* Field_1_0; // 0x20

	::System::Void _ctor(::Class_5_AF65C3A968E836D2* a1, ::Class_1_FF980237FBBFE32B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_1_FF980237FBBFE32B*))((::PBYTE)hIl2Cpp + CLASS_1_FF980237FBBFE32B_CLASS_1_EF020DEFE35EA85D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D84001547624ECB(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_FF980237FBBFE32B_CLASS_1_EF020DEFE35EA85D_METHOD_1_6D84001547624ECB_OFFSET))(this, a1);
	}
};
