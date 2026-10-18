#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BC7D0AE9CC339A13_METHOD_1_FD8EF41141F13240_OFFSET UNITYSDK_OFFSET(0xB3FC450)
#define CLASS_1_BC7D0AE9CC339A13__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3FC580)

inline static constexpr unsigned int Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex = 47743;

class Class_1_BC7D0AE9CC339A13 : public ::System::Object
{
public:
	static ::System::String** StaticGet_NOIOHCOBNHI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x53320);
	}
	static ::System::String** StaticGet_LBLMCEHCPPF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x53328);
	}
	static ::System::String** StaticGet_KJDONINPOGA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x53330);
	}
	static ::System::String** StaticGet_KANJNIBPCPD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x53338);
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
