#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"

class Class_1_5A44BA76A33709FD;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define CLASS_2_C56B00FCBF52EB1F_METHOD_2_486B44A9314F3615_OFFSET UNITYSDK_OFFSET(0x17F3CB90)
#define CLASS_2_C56B00FCBF52EB1F_METHOD_2_63503EE3B2AB63BD_OFFSET UNITYSDK_OFFSET(0x17F3CC90)
#define CLASS_2_C56B00FCBF52EB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3CC80)

inline static constexpr unsigned int Class_2_C56B00FCBF52EB1F_TypeDefinitionIndex = 55845;

class Class_2_C56B00FCBF52EB1F : public ::Class_1_953952658186A166
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_2_0; // 0x10
	::Class_5_DCFF91E03A93C03C* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_486B44A9314F3615(::Class_1_5A44BA76A33709FD* a1, ::Struct_2_6E1B724B14572104_2& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A44BA76A33709FD*, ::Struct_2_6E1B724B14572104_2&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_METHOD_2_486B44A9314F3615_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_C56B00FCBF52EB1F* Method_2_63503EE3B2AB63BD(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::Class_2_C56B00FCBF52EB1F*(*)(::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_METHOD_2_63503EE3B2AB63BD_OFFSET))(a1);
	}
};
