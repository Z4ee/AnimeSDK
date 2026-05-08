#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_448;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3D174A36CEBCAEC9___C_METHOD_1_21A72E7EEEAA708C_OFFSET UNITYSDK_OFFSET(0xF088710)
#define CLASS_1_3D174A36CEBCAEC9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0886C0)
#define CLASS_1_3D174A36CEBCAEC9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF088700)

inline static constexpr unsigned int Class_1_3D174A36CEBCAEC9___c_TypeDefinitionIndex = 81940;

class Class_1_3D174A36CEBCAEC9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_448*, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_448*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D174A36CEBCAEC9___c_TypeDefinitionIndex)->GetStaticField(0x35B50);
	}
	static ::Class_1_3D174A36CEBCAEC9___c** StaticGet___9()
	{
		return (::Class_1_3D174A36CEBCAEC9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D174A36CEBCAEC9___c_TypeDefinitionIndex)->GetStaticField(0x35B58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D174A36CEBCAEC9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D174A36CEBCAEC9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_21A72E7EEEAA708C(::Class_0_16E4307DCC419505_448* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_448*))((::PBYTE)hIl2Cpp + CLASS_1_3D174A36CEBCAEC9___C_METHOD_1_21A72E7EEEAA708C_OFFSET))(this, a1);
	}
};
