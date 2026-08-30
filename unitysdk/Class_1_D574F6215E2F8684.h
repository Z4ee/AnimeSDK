#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D574F6215E2F8684_METHOD_1_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0x1E57FAA0)
#define CLASS_1_D574F6215E2F8684__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57FCA0)

inline static constexpr unsigned int Class_1_D574F6215E2F8684_TypeDefinitionIndex = 34646;

class Class_1_D574F6215E2F8684 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_AAKLPOBKFGL()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D574F6215E2F8684_TypeDefinitionIndex)->GetStaticField(0x5DA20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D574F6215E2F8684__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D574F6215E2F8684_METHOD_1_7DB540F7EC4E5E2C_OFFSET))(a1);
	}
};
