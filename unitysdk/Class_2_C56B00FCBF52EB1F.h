#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"

class Class_1_A59E81C83F485325;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define CLASS_2_C56B00FCBF52EB1F_METHOD_2_486B44A9314F3615_OFFSET UNITYSDK_OFFSET(0x10732820)
#define CLASS_2_C56B00FCBF52EB1F_METHOD_2_63503EE3B2AB63BD_OFFSET UNITYSDK_OFFSET(0x10732930)
#define CLASS_2_C56B00FCBF52EB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x10732920)

inline static constexpr unsigned int Class_2_C56B00FCBF52EB1F_TypeDefinitionIndex = 47666;

class Class_2_C56B00FCBF52EB1F : public ::Class_1_953952658186A166
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x10
	::Class_5_FCAF801AC482D3B5* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_486B44A9314F3615(::Class_1_A59E81C83F485325* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9_1& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A59E81C83F485325*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9_1&))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_METHOD_2_486B44A9314F3615_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_C56B00FCBF52EB1F* Method_2_63503EE3B2AB63BD(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::Class_2_C56B00FCBF52EB1F*(*)(::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_METHOD_2_63503EE3B2AB63BD_OFFSET))(a1);
	}
};
