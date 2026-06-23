#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C8367C6C0668EB79___C_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x1206A3A0)
#define CLASS_1_C8367C6C0668EB79___C_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1206A390)
#define CLASS_1_C8367C6C0668EB79___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1206A340)
#define CLASS_1_C8367C6C0668EB79___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1206A380)

inline static constexpr unsigned int Class_1_C8367C6C0668EB79___c_TypeDefinitionIndex = 45844;

class Class_1_C8367C6C0668EB79___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8367C6C0668EB79___c_TypeDefinitionIndex)->GetStaticField(0x3BA10);
	}
	static ::Class_1_C8367C6C0668EB79___c** StaticGet___9()
	{
		return (::Class_1_C8367C6C0668EB79___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8367C6C0668EB79___c_TypeDefinitionIndex)->GetStaticField(0x3BA18);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8367C6C0668EB79___c_TypeDefinitionIndex)->GetStaticField(0x3BA20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79___C_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8367C6C0668EB79___C_METHOD_1_7D201B4343E63821_1_OFFSET))(this, a1);
	}
};
