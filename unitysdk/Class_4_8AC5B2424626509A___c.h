#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_AD99097E9C0ABD9C;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_8AC5B2424626509A___C_METHOD_1_33903CC6836F4169_OFFSET UNITYSDK_OFFSET(0x13447140)
#define CLASS_4_8AC5B2424626509A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134470F0)
#define CLASS_4_8AC5B2424626509A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13447130)

inline static constexpr unsigned int Class_4_8AC5B2424626509A___c_TypeDefinitionIndex = 81271;

class Class_4_8AC5B2424626509A___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_4_AD99097E9C0ABD9C*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_4_AD99097E9C0ABD9C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8AC5B2424626509A___c_TypeDefinitionIndex)->GetStaticField(0x30110);
	}
	static ::Class_4_8AC5B2424626509A___c** StaticGet___9()
	{
		return (::Class_4_8AC5B2424626509A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_8AC5B2424626509A___c_TypeDefinitionIndex)->GetStaticField(0x30118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_8AC5B2424626509A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8AC5B2424626509A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33903CC6836F4169(::Class_4_AD99097E9C0ABD9C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AD99097E9C0ABD9C*))((::PBYTE)hIl2Cpp + CLASS_4_8AC5B2424626509A___C_METHOD_1_33903CC6836F4169_OFFSET))(this, a1);
	}
};
