#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_046112F54DBF767D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_56399002D78307A1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134BED50)
#define CLASS_1_56399002D78307A1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134BED90)
#define CLASS_1_56399002D78307A1___C___CTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x134BEDA0)

inline static constexpr unsigned int Class_1_56399002D78307A1___c_TypeDefinitionIndex = 78918;

class Class_1_56399002D78307A1___c : public ::System::Object
{
public:
	static ::Class_1_56399002D78307A1___c** StaticGet___9()
	{
		return (::Class_1_56399002D78307A1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56399002D78307A1___c_TypeDefinitionIndex)->GetStaticField(0x17680);
	}
	static ::System::Func_2<::Class_1_046112F54DBF767D*, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_1_046112F54DBF767D*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56399002D78307A1___c_TypeDefinitionIndex)->GetStaticField(0x17688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__13_0(::Class_1_046112F54DBF767D* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_046112F54DBF767D*))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1___C___CTOR_B__13_0_OFFSET))(this, a1);
	}
};
