#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_74FE797324C62A88_METHOD_1_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0x1EC30D50)
#define CLASS_1_74FE797324C62A88__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC30F80)

inline static constexpr unsigned int Class_1_74FE797324C62A88_TypeDefinitionIndex = 35310;

class Class_1_74FE797324C62A88 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_AAKLPOBKFGL()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74FE797324C62A88_TypeDefinitionIndex)->GetStaticField(0x4E380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_74FE797324C62A88__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74FE797324C62A88_METHOD_1_7E0102A7D81125F5_OFFSET))(a1);
	}
};
