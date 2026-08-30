#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_D18368877C119AD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15916D10)
#define CLASS_1_D18368877C119AD2__CTOR_OFFSET UNITYSDK_OFFSET(0x15916D00)

inline static constexpr unsigned int Class_1_D18368877C119AD2_TypeDefinitionIndex = 67559;

class Class_1_D18368877C119AD2 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_ONFNBJHEIBB()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D18368877C119AD2_TypeDefinitionIndex)->GetStaticField(0x105D0);
	}
	// static const ::System::String* EGGIIFLGBJO; // 0x0
	// static const ::System::String* PBFMDJOJFKI; // 0x0
	// static const ::System::UInt32 NDPOIKOIFFM = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D18368877C119AD2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D18368877C119AD2__CCTOR_OFFSET))();
	}
};
