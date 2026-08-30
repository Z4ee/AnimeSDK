#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_3E26D5D72F19C4DB;
class Class_1_41D140539C030FAC;
class Class_1_A188133F1B13F2BD;

#define CLASS_1_D7C7ABA05560413C_METHOD_1_641EFB8C34E4AAC0_OFFSET UNITYSDK_OFFSET(0x15634930)
#define CLASS_1_D7C7ABA05560413C__CTOR_OFFSET UNITYSDK_OFFSET(0x156348A0)

inline static constexpr unsigned int Class_1_D7C7ABA05560413C_TypeDefinitionIndex = 62651;

class Class_1_D7C7ABA05560413C : public ::System::Object
{
public:
	::Class_1_3E26D5D72F19C4DB* DCJCONLGILD; // 0x10
	::Class_1_41D140539C030FAC* PHODDKHPFEC; // 0x18

	::System::Void _ctor(::Class_1_3E26D5D72F19C4DB* a1, ::Class_1_41D140539C030FAC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E26D5D72F19C4DB*, ::Class_1_41D140539C030FAC*))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_A188133F1B13F2BD* Method_1_641EFB8C34E4AAC0(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::Class_1_A188133F1B13F2BD*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_METHOD_1_641EFB8C34E4AAC0_OFFSET))(this, a1, a2);
	}
};
