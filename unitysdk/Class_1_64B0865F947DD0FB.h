#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64B0865F947DD0FB_Class_1_013A96B3D36C22A3;
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define CLASS_1_64B0865F947DD0FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x142448A0)

inline static constexpr unsigned int Class_1_64B0865F947DD0FB_TypeDefinitionIndex = 57226;

class Class_1_64B0865F947DD0FB : public ::System::Object
{
public:
	static ::Class_1_64B0865F947DD0FB_Class_1_013A96B3D36C22A3** StaticGet_Field_1_0()
	{
		return (::Class_1_64B0865F947DD0FB_Class_1_013A96B3D36C22A3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64B0865F947DD0FB_TypeDefinitionIndex)->GetStaticField(0x1B5D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB__CCTOR_OFFSET))();
	}
};
