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

#define CLASS_2_32745D0274E3D8FF_METHOD_2_63503EE3B2AB63BD_OFFSET UNITYSDK_OFFSET(0x16DF3090)
#define CLASS_2_32745D0274E3D8FF_METHOD_2_C71C576048C359D1_OFFSET UNITYSDK_OFFSET(0x16DF2CC0)
#define CLASS_2_32745D0274E3D8FF__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF3080)

inline static constexpr unsigned int Class_2_32745D0274E3D8FF_TypeDefinitionIndex = 91510;

class Class_2_32745D0274E3D8FF : public ::Class_1_953952658186A166
{
public:
	::Class_5_DCFF91E03A93C03C* Field_2_1; // 0x10
	::MoleMole::UIHollowChessboard3DModelController* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32745D0274E3D8FF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_C71C576048C359D1(::Class_1_5A44BA76A33709FD* a1, ::Struct_2_6E1B724B14572104_2& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A44BA76A33709FD*, ::Struct_2_6E1B724B14572104_2&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_32745D0274E3D8FF_METHOD_2_C71C576048C359D1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_32745D0274E3D8FF* Method_2_63503EE3B2AB63BD(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::Class_2_32745D0274E3D8FF*(*)(::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_2_32745D0274E3D8FF_METHOD_2_63503EE3B2AB63BD_OFFSET))(a1);
	}
};
