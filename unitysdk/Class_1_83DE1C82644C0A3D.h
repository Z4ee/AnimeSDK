#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_83DE1C82644C0A3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x117D4040)

inline static constexpr unsigned int Class_1_83DE1C82644C0A3D_TypeDefinitionIndex = 69680;

class Class_1_83DE1C82644C0A3D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83DE1C82644C0A3D_TypeDefinitionIndex)->GetStaticField(0x21DB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83DE1C82644C0A3D__CCTOR_OFFSET))();
	}
};
