#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BC7D0AE9CC339A13_METHOD_1_FD8EF41141F13240_OFFSET UNITYSDK_OFFSET(0x1069DF70)
#define CLASS_1_BC7D0AE9CC339A13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1069E0A0)

inline static constexpr unsigned int Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex = 38621;

class Class_1_BC7D0AE9CC339A13 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x27280);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x27288);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x27290);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x27298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC7D0AE9CC339A13__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_FD8EF41141F13240(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC7D0AE9CC339A13_METHOD_1_FD8EF41141F13240_OFFSET))(a1);
	}
};
