#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_D18368877C119AD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F75E00)
#define CLASS_1_D18368877C119AD2__CTOR_OFFSET UNITYSDK_OFFSET(0x16F75DF0)

inline static constexpr unsigned int Class_1_D18368877C119AD2_TypeDefinitionIndex = 64563;

class Class_1_D18368877C119AD2 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D18368877C119AD2_TypeDefinitionIndex)->GetStaticField(0x29F20);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::UInt32 Field_1_3 = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D18368877C119AD2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D18368877C119AD2__CCTOR_OFFSET))();
	}
};
