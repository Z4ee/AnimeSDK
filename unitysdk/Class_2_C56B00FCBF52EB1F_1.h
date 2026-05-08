#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"

class Class_1_CC6544DCEA8E336D;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define CLASS_2_C56B00FCBF52EB1F_1_METHOD_2_486B44A9314F3615_OFFSET UNITYSDK_OFFSET(0x12464D10)
#define CLASS_2_C56B00FCBF52EB1F_1_METHOD_2_63503EE3B2AB63BD_OFFSET UNITYSDK_OFFSET(0x12464E20)
#define CLASS_2_C56B00FCBF52EB1F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12464E10)

inline static constexpr unsigned int Class_2_C56B00FCBF52EB1F_1_TypeDefinitionIndex = 81458;

class Class_2_C56B00FCBF52EB1F_1 : public ::Class_1_953952658186A166
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x10
	::Class_5_AF65C3A968E836D2* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_486B44A9314F3615(::Class_1_CC6544DCEA8E336D* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CC6544DCEA8E336D*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_1_METHOD_2_486B44A9314F3615_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_C56B00FCBF52EB1F_1* Method_2_63503EE3B2AB63BD(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::Class_2_C56B00FCBF52EB1F_1*(*)(::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_1_METHOD_2_63503EE3B2AB63BD_OFFSET))(a1);
	}
};
