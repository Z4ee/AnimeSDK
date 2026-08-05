#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_20AF406BEC9AD61A;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_51F82F1DEF431B48___C_METHOD_1_6F96EE21404E26F7_OFFSET UNITYSDK_OFFSET(0x157CA5B0)
#define CLASS_3_51F82F1DEF431B48___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157CA560)
#define CLASS_3_51F82F1DEF431B48___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157CA5A0)

inline static constexpr unsigned int Class_3_51F82F1DEF431B48___c_TypeDefinitionIndex = 51174;

class Class_3_51F82F1DEF431B48___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_20AF406BEC9AD61A*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::Class_3_20AF406BEC9AD61A*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51F82F1DEF431B48___c_TypeDefinitionIndex)->GetStaticField(0x47690);
	}
	static ::Class_3_51F82F1DEF431B48___c** StaticGet___9()
	{
		return (::Class_3_51F82F1DEF431B48___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51F82F1DEF431B48___c_TypeDefinitionIndex)->GetStaticField(0x47698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_51F82F1DEF431B48___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51F82F1DEF431B48___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F96EE21404E26F7(::Class_3_20AF406BEC9AD61A* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_20AF406BEC9AD61A*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_51F82F1DEF431B48___C_METHOD_1_6F96EE21404E26F7_OFFSET))(this, a1, a2);
	}
};
