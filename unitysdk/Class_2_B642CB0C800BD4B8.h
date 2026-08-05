#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_27B64C371CD70710.h"

class Class_1_C5CEA8DD589BD643;
class Class_1_EDECBB3B4D362847;
class Class_4_A060C7A25BF23AE2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B642CB0C800BD4B8_METHOD_2_86101967C52E3D42_OFFSET UNITYSDK_OFFSET(0x1FC241D0)
#define CLASS_2_B642CB0C800BD4B8_METHOD_2_CC220DC0FB0EA80B_OFFSET UNITYSDK_OFFSET(0x1FC24400)
#define CLASS_2_B642CB0C800BD4B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC245A0)

inline static constexpr unsigned int Class_2_B642CB0C800BD4B8_TypeDefinitionIndex = 94974;

class Class_2_B642CB0C800BD4B8 : public ::Class_1_27B64C371CD70710
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B642CB0C800BD4B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_86101967C52E3D42(::Class_1_EDECBB3B4D362847* a1, ::Class_1_EDECBB3B4D362847* a2, ::Class_1_C5CEA8DD589BD643* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDECBB3B4D362847*, ::Class_1_EDECBB3B4D362847*, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_2_B642CB0C800BD4B8_METHOD_2_86101967C52E3D42_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CC220DC0FB0EA80B(::Class_4_A060C7A25BF23AE2* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_A060C7A25BF23AE2*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B642CB0C800BD4B8_METHOD_2_CC220DC0FB0EA80B_OFFSET))(this, a1, a2);
	}
};
