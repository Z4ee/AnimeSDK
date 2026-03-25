#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64B0865F947DD0FB_Class_1_03CFDA324E856C87;
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define CLASS_1_64B0865F947DD0FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11470A20)

inline static constexpr unsigned int Class_1_64B0865F947DD0FB_TypeDefinitionIndex = 49642;

class Class_1_64B0865F947DD0FB : public ::System::Object
{
public:
	static ::Class_1_64B0865F947DD0FB_Class_1_03CFDA324E856C87** StaticGet_Field_1_0()
	{
		return (::Class_1_64B0865F947DD0FB_Class_1_03CFDA324E856C87**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64B0865F947DD0FB_TypeDefinitionIndex)->GetStaticField(0x35B90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB__CCTOR_OFFSET))();
	}
};
