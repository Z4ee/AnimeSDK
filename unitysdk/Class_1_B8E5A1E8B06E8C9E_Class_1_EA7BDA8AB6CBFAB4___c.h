#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D05699509194BF9B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_EA7BDA8AB6CBFAB4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C2570)
#define CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_EA7BDA8AB6CBFAB4___C__CREATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x156C25C0)
#define CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_EA7BDA8AB6CBFAB4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C25B0)

inline static constexpr unsigned int Class_1_B8E5A1E8B06E8C9E_Class_1_EA7BDA8AB6CBFAB4___c_TypeDefinitionIndex = 79463;

class Class_1_B8E5A1E8B06E8C9E_Class_1_EA7BDA8AB6CBFAB4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E5A1E8B06E8C9E_Class_1_EA7BDA8AB6CBFAB4___c_TypeDefinitionIndex)->GetStaticField(0x55700);
	}
	static ::Class_1_B8E5A1E8B06E8C9E_Class_1_EA7BDA8AB6CBFAB4___c** StaticGet___9()
	{
		return (::Class_1_B8E5A1E8B06E8C9E_Class_1_EA7BDA8AB6CBFAB4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E5A1E8B06E8C9E_Class_1_EA7BDA8AB6CBFAB4___c_TypeDefinitionIndex)->GetStaticField(0x55708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_EA7BDA8AB6CBFAB4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_EA7BDA8AB6CBFAB4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Create_b__6_0(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_EA7BDA8AB6CBFAB4___C__CREATE_B__6_0_OFFSET))(this, a1);
	}
};
