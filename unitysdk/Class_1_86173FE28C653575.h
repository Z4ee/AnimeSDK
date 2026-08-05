#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_217EE568A28FAED7.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_86173FE28C653575_COMPARE_OFFSET UNITYSDK_OFFSET(0x10F4B370)
#define CLASS_1_86173FE28C653575__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F4B490)
#define CLASS_1_86173FE28C653575__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4B480)

inline static constexpr unsigned int Class_1_86173FE28C653575_TypeDefinitionIndex = 65599;

class Class_1_86173FE28C653575 : public ::System::Object
{
public:
	static ::Class_1_86173FE28C653575** StaticGet_Field_1_0()
	{
		return (::Class_1_86173FE28C653575**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86173FE28C653575_TypeDefinitionIndex)->GetStaticField(0x3C3B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86173FE28C653575__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86173FE28C653575__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Struct_2_217EE568A28FAED7 a1, ::Struct_2_217EE568A28FAED7 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_217EE568A28FAED7, ::Struct_2_217EE568A28FAED7))((::PBYTE)hIl2Cpp + CLASS_1_86173FE28C653575_COMPARE_OFFSET))(this, a1, a2);
	}
};
