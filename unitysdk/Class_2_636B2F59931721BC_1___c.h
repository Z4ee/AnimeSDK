#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_636B2F59931721BC_1___C_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xDED71F0)
#define CLASS_2_636B2F59931721BC_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDED71A0)
#define CLASS_2_636B2F59931721BC_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDED71E0)

inline static constexpr unsigned int Class_2_636B2F59931721BC_1___c_TypeDefinitionIndex = 72442;

class Class_2_636B2F59931721BC_1___c : public ::System::Object
{
public:
	static ::Class_2_636B2F59931721BC_1___c** StaticGet___9()
	{
		return (::Class_2_636B2F59931721BC_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_636B2F59931721BC_1___c_TypeDefinitionIndex)->GetStaticField(0x483A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1___C_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
