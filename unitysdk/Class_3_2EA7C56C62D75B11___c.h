#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_E9CB61782B1950E4;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_2EA7C56C62D75B11___C_METHOD_1_6051EF65108B24F2_OFFSET UNITYSDK_OFFSET(0x139570B0)
#define CLASS_3_2EA7C56C62D75B11___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13957060)
#define CLASS_3_2EA7C56C62D75B11___C__CTOR_OFFSET UNITYSDK_OFFSET(0x139570A0)

inline static constexpr unsigned int Class_3_2EA7C56C62D75B11___c_TypeDefinitionIndex = 81923;

class Class_3_2EA7C56C62D75B11___c : public ::System::Object
{
public:
	static ::Class_3_2EA7C56C62D75B11___c** StaticGet___9()
	{
		return (::Class_3_2EA7C56C62D75B11___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2EA7C56C62D75B11___c_TypeDefinitionIndex)->GetStaticField(0x45B30);
	}
	static ::System::Action_2<::Class_3_E9CB61782B1950E4*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_E9CB61782B1950E4*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2EA7C56C62D75B11___c_TypeDefinitionIndex)->GetStaticField(0x45B38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6051EF65108B24F2(::Class_3_E9CB61782B1950E4* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E9CB61782B1950E4*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11___C_METHOD_1_6051EF65108B24F2_OFFSET))(this, a1, a2);
	}
};
