#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD893FD36F6A3A6D_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D05699509194BF9B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C51D290)
#define CLASS_1_D05699509194BF9B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51D2D0)
#define CLASS_1_D05699509194BF9B___C__GET_ISOVERLAPFREE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C51D2E0)

inline static constexpr unsigned int Class_1_D05699509194BF9B___c_TypeDefinitionIndex = 41806;

class Class_1_D05699509194BF9B___c : public ::System::Object
{
public:
	static ::Class_1_D05699509194BF9B___c** StaticGet___9()
	{
		return (::Class_1_D05699509194BF9B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05699509194BF9B___c_TypeDefinitionIndex)->GetStaticField(0x20070);
	}
	static ::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05699509194BF9B___c_TypeDefinitionIndex)->GetStaticField(0x20078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsOverlapFree_b__31_0(::Class_1_FD893FD36F6A3A6D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_2*))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B___C__GET_ISOVERLAPFREE_B__31_0_OFFSET))(this, a1);
	}
};
