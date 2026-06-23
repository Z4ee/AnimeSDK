#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_FA5F01418B9DD1E3_METHOD_1_5DBE9D3463A7C336_OFFSET UNITYSDK_OFFSET(0x1081BF50)

inline static constexpr unsigned int Class_1_FA5F01418B9DD1E3_TypeDefinitionIndex = 42396;

class Class_1_FA5F01418B9DD1E3 : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_1_0()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA5F01418B9DD1E3_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* Method_1_5DBE9D3463A7C336(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FA5F01418B9DD1E3_METHOD_1_5DBE9D3463A7C336_OFFSET))(a1, a2, a3);
	}
};
