#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1176;
class Class_3_B277246A3FA15361;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C39BFA4E37E2BEC7_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB7E6AF0)
#define CLASS_1_C39BFA4E37E2BEC7_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB7E6E10)
#define CLASS_1_C39BFA4E37E2BEC7_METHOD_1_8FEA0BF7983E58A3_OFFSET UNITYSDK_OFFSET(0xB7E6E70)
#define CLASS_1_C39BFA4E37E2BEC7_METHOD_1_A3A5363DC5B4E085_OFFSET UNITYSDK_OFFSET(0xB7E6CC0)
#define CLASS_1_C39BFA4E37E2BEC7_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB7E6D80)
#define CLASS_1_C39BFA4E37E2BEC7_METHOD_1_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0xB7E6B70)
#define CLASS_1_C39BFA4E37E2BEC7__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E7020)

inline static constexpr unsigned int Class_1_C39BFA4E37E2BEC7_TypeDefinitionIndex = 73295;

class Class_1_C39BFA4E37E2BEC7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1176*>* NOLJFCAPFHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_1176* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1176*))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7_METHOD_1_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3A5363DC5B4E085(::Class_0_16E4307DCC419505_1176* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1176*))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7_METHOD_1_A3A5363DC5B4E085_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_1_8FEA0BF7983E58A3(::System::String* a1, ::System::Object* a2, ::Class_3_B277246A3FA15361* a3, ::Struct_2_F5FBDA629A1B439F a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::Class_3_B277246A3FA15361*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_C39BFA4E37E2BEC7_METHOD_1_8FEA0BF7983E58A3_OFFSET))(this, a1, a2, a3, a4);
	}
};
