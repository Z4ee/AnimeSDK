#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_604;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_F2B96F2C60871B23___C_METHOD_1_D9778B51CD7ACF2D_OFFSET UNITYSDK_OFFSET(0x101117B0)
#define CLASS_1_F2B96F2C60871B23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10111760)
#define CLASS_1_F2B96F2C60871B23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x101117A0)

inline static constexpr unsigned int Class_1_F2B96F2C60871B23___c_TypeDefinitionIndex = 63468;

class Class_1_F2B96F2C60871B23___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_604*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_604*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B96F2C60871B23___c_TypeDefinitionIndex)->GetStaticField(0x2DC50);
	}
	static ::Class_1_F2B96F2C60871B23___c** StaticGet___9()
	{
		return (::Class_1_F2B96F2C60871B23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B96F2C60871B23___c_TypeDefinitionIndex)->GetStaticField(0x2DC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D9778B51CD7ACF2D(::Class_0_16E4307DCC419505_604* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_604*))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23___C_METHOD_1_D9778B51CD7ACF2D_OFFSET))(this, a1);
	}
};
