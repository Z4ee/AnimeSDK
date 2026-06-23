#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A6C27A12AD62162A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_E8FA6BBFC3FCEBFC___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x1150AB70)
#define CLASS_4_E8FA6BBFC3FCEBFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1150AB20)
#define CLASS_4_E8FA6BBFC3FCEBFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1150AB60)

inline static constexpr unsigned int Class_4_E8FA6BBFC3FCEBFC___c_TypeDefinitionIndex = 54192;

class Class_4_E8FA6BBFC3FCEBFC___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_A6C27A12AD62162A*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Class_2_A6C27A12AD62162A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E8FA6BBFC3FCEBFC___c_TypeDefinitionIndex)->GetStaticField(0x3B7E0);
	}
	static ::Class_4_E8FA6BBFC3FCEBFC___c** StaticGet___9()
	{
		return (::Class_4_E8FA6BBFC3FCEBFC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E8FA6BBFC3FCEBFC___c_TypeDefinitionIndex)->GetStaticField(0x3B7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_A6C27A12AD62162A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
