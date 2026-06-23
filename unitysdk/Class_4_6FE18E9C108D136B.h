#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_4_425BBC3CBFD638A0_2;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_6FE18E9C108D136B_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12B52720)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12B52C30)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_BB05EEC9DF987392_OFFSET UNITYSDK_OFFSET(0x12B52870)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_CC17E4B020B0F15E_OFFSET UNITYSDK_OFFSET(0x12B52AE0)
#define CLASS_4_6FE18E9C108D136B__CTOR_OFFSET UNITYSDK_OFFSET(0x12B52B40)

inline static constexpr unsigned int Class_4_6FE18E9C108D136B_TypeDefinitionIndex = 82506;

class Class_4_6FE18E9C108D136B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x30
	::Class_4_425BBC3CBFD638A0_2* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_BB05EEC9DF987392(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_BB05EEC9DF987392_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_CC17E4B020B0F15E(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_CC17E4B020B0F15E_OFFSET))(this, a1, a2, a3);
	}
};
