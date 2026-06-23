#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_9159F6FE46573B6F;
class Class_1_E97B94A13836DD20;
class Class_5_FCAF801AC482D3B5;

#define CLASS_1_E97B94A13836DD20_CLASS_1_EFA89EF2EB2508C9_METHOD_1_030E6BB331560B51_OFFSET UNITYSDK_OFFSET(0x11352EF0)
#define CLASS_1_E97B94A13836DD20_CLASS_1_EFA89EF2EB2508C9_METHOD_1_83AE46DB8772209E_OFFSET UNITYSDK_OFFSET(0x11352FF0)
#define CLASS_1_E97B94A13836DD20_CLASS_1_EFA89EF2EB2508C9__CTOR_OFFSET UNITYSDK_OFFSET(0x11351F70)

inline static constexpr unsigned int Class_1_E97B94A13836DD20_Class_1_EFA89EF2EB2508C9_TypeDefinitionIndex = 48896;

class Class_1_E97B94A13836DD20_Class_1_EFA89EF2EB2508C9 : public ::System::Object
{
public:
	::Class_1_9159F6FE46573B6F* Field_1_1; // 0x10
	::Class_1_E97B94A13836DD20* Field_1_0; // 0x18
	::Class_5_FCAF801AC482D3B5* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_CLASS_1_EFA89EF2EB2508C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_030E6BB331560B51(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_CLASS_1_EFA89EF2EB2508C9_METHOD_1_030E6BB331560B51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_83AE46DB8772209E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_CLASS_1_EFA89EF2EB2508C9_METHOD_1_83AE46DB8772209E_OFFSET))(this);
	}
};
