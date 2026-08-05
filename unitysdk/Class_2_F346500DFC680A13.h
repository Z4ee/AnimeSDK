#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_293.h"
#include "unitysdk/Share/ENpcType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_938.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_F346500DFC680A13_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A6B1360)
#define CLASS_2_F346500DFC680A13_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A6B12A0)
#define CLASS_2_F346500DFC680A13_METHOD_2_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x1A6B12B0)
#define CLASS_2_F346500DFC680A13__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B1260)

inline static constexpr unsigned int Class_2_F346500DFC680A13_TypeDefinitionIndex = 13449;

class Class_2_F346500DFC680A13 : public ::Class_1_5DA2E7556103D5A3_293
{
public:
	::System::String* Field_2_6; // 0x70
	::Share::ENpcType Field_2_0; // 0x78
	::System::Int32 Field_2_7; // 0x7C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_938 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_938, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_2_CFDB2DF757369D2B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13_METHOD_2_CFDB2DF757369D2B_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
