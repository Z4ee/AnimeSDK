#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_D4CEA9142C7EBAAA___C_METHOD_1_339CEA0A8F04A334_OFFSET UNITYSDK_OFFSET(0x11BBD2F0)
#define CLASS_2_D4CEA9142C7EBAAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BBD2A0)
#define CLASS_2_D4CEA9142C7EBAAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BBD2E0)

inline static constexpr unsigned int Class_2_D4CEA9142C7EBAAA___c_TypeDefinitionIndex = 50268;

class Class_2_D4CEA9142C7EBAAA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_3659D99D9E0DCBB9_7, ::Class_1_1685EC66FBD28897*>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::Struct_2_3659D99D9E0DCBB9_7, ::Class_1_1685EC66FBD28897*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D4CEA9142C7EBAAA___c_TypeDefinitionIndex)->GetStaticField(0x40320);
	}
	static ::Class_2_D4CEA9142C7EBAAA___c** StaticGet___9()
	{
		return (::Class_2_D4CEA9142C7EBAAA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D4CEA9142C7EBAAA___c_TypeDefinitionIndex)->GetStaticField(0x40328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D4CEA9142C7EBAAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4CEA9142C7EBAAA___C__CTOR_OFFSET))(this);
	}

	::Class_1_1685EC66FBD28897* Method_1_339CEA0A8F04A334(::Struct_2_3659D99D9E0DCBB9_7 a1)
	{
		return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_7))((::PBYTE)hIl2Cpp + CLASS_2_D4CEA9142C7EBAAA___C_METHOD_1_339CEA0A8F04A334_OFFSET))(this, a1);
	}
};
