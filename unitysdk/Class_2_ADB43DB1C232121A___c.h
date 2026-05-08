#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_ADB43DB1C232121A___C_METHOD_1_BF6431F148CDB0D3_OFFSET UNITYSDK_OFFSET(0x1BB9C100)
#define CLASS_2_ADB43DB1C232121A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB9C0B0)
#define CLASS_2_ADB43DB1C232121A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9C0F0)

inline static constexpr unsigned int Class_2_ADB43DB1C232121A___c_TypeDefinitionIndex = 83023;

class Class_2_ADB43DB1C232121A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_3659D99D9E0DCBB9, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Struct_2_3659D99D9E0DCBB9, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ADB43DB1C232121A___c_TypeDefinitionIndex)->GetStaticField(0x497B0);
	}
	static ::Class_2_ADB43DB1C232121A___c** StaticGet___9()
	{
		return (::Class_2_ADB43DB1C232121A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ADB43DB1C232121A___c_TypeDefinitionIndex)->GetStaticField(0x497B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ADB43DB1C232121A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADB43DB1C232121A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF6431F148CDB0D3(::Struct_2_3659D99D9E0DCBB9 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9))((::PBYTE)hIl2Cpp + CLASS_2_ADB43DB1C232121A___C_METHOD_1_BF6431F148CDB0D3_OFFSET))(this, a1);
	}
};
