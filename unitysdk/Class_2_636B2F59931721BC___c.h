#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_636B2F59931721BC___C_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x13547350)
#define CLASS_2_636B2F59931721BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13547300)
#define CLASS_2_636B2F59931721BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13547340)

inline static constexpr unsigned int Class_2_636B2F59931721BC___c_TypeDefinitionIndex = 54651;

class Class_2_636B2F59931721BC___c : public ::System::Object
{
public:
	static ::Class_2_636B2F59931721BC___c** StaticGet___9()
	{
		return (::Class_2_636B2F59931721BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_636B2F59931721BC___c_TypeDefinitionIndex)->GetStaticField(0x370A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC___C_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
