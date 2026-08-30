#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70D5AA87C5BBA20B_10;

#define CLASS_1_70D5AA87C5BBA20B_10___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC2FE60)
#define CLASS_1_70D5AA87C5BBA20B_10___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2FE90)
#define CLASS_1_70D5AA87C5BBA20B_10___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EC2FEA0)

inline static constexpr unsigned int Class_1_70D5AA87C5BBA20B_10___c_TypeDefinitionIndex = 33425;

class Class_1_70D5AA87C5BBA20B_10___c : public ::System::Object
{
public:
	static ::Class_1_70D5AA87C5BBA20B_10___c** StaticGet___9()
	{
		return (::Class_1_70D5AA87C5BBA20B_10___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70D5AA87C5BBA20B_10___c_TypeDefinitionIndex)->GetStaticField(0x1E480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70D5AA87C5BBA20B_10___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D5AA87C5BBA20B_10___C__CTOR_OFFSET))(this);
	}

	::Class_1_70D5AA87C5BBA20B_10* __cctor_b__38_0()
	{
		return ((::Class_1_70D5AA87C5BBA20B_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D5AA87C5BBA20B_10___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
