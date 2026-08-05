#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_59F0E78803D70076;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_2A4C011B9DDAFDA9___C_METHOD_1_0D679CBC199DE86A_OFFSET UNITYSDK_OFFSET(0x11587180)
#define CLASS_3_2A4C011B9DDAFDA9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11587130)
#define CLASS_3_2A4C011B9DDAFDA9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11587170)

inline static constexpr unsigned int Class_3_2A4C011B9DDAFDA9___c_TypeDefinitionIndex = 78820;

class Class_3_2A4C011B9DDAFDA9___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_59F0E78803D70076*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_59F0E78803D70076*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A4C011B9DDAFDA9___c_TypeDefinitionIndex)->GetStaticField(0x35C70);
	}
	static ::Class_3_2A4C011B9DDAFDA9___c** StaticGet___9()
	{
		return (::Class_3_2A4C011B9DDAFDA9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2A4C011B9DDAFDA9___c_TypeDefinitionIndex)->GetStaticField(0x35C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2A4C011B9DDAFDA9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4C011B9DDAFDA9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D679CBC199DE86A(::Class_3_59F0E78803D70076* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_59F0E78803D70076*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_2A4C011B9DDAFDA9___C_METHOD_1_0D679CBC199DE86A_OFFSET))(this, a1, a2);
	}
};
