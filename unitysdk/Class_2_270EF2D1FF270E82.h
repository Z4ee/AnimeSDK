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

#define CLASS_2_270EF2D1FF270E82_METHOD_2_15D83F11F5833B66_OFFSET UNITYSDK_OFFSET(0xD34AC90)
#define CLASS_2_270EF2D1FF270E82_METHOD_2_63503EE3B2AB63BD_OFFSET UNITYSDK_OFFSET(0xD34B010)
#define CLASS_2_270EF2D1FF270E82__CTOR_OFFSET UNITYSDK_OFFSET(0xD34B000)

inline static constexpr unsigned int Class_2_270EF2D1FF270E82_TypeDefinitionIndex = 46831;

class Class_2_270EF2D1FF270E82 : public ::Class_1_953952658186A166
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x10
	::Class_5_FCAF801AC482D3B5* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270EF2D1FF270E82__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_15D83F11F5833B66(::Class_1_A59E81C83F485325* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9_1& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A59E81C83F485325*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9_1&))((::PBYTE)hIl2Cpp + CLASS_2_270EF2D1FF270E82_METHOD_2_15D83F11F5833B66_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_270EF2D1FF270E82* Method_2_63503EE3B2AB63BD(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::Class_2_270EF2D1FF270E82*(*)(::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_2_270EF2D1FF270E82_METHOD_2_63503EE3B2AB63BD_OFFSET))(a1);
	}
};
