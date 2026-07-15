#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64B0865F947DD0FB_1_Class_1_013A96B3D36C22A3;
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define CLASS_1_64B0865F947DD0FB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AE5560)

inline static constexpr unsigned int Class_1_64B0865F947DD0FB_1_TypeDefinitionIndex = 58484;

class Class_1_64B0865F947DD0FB_1 : public ::System::Object
{
public:
	static ::Class_1_64B0865F947DD0FB_1_Class_1_013A96B3D36C22A3** StaticGet_Field_1_0()
	{
		return (::Class_1_64B0865F947DD0FB_1_Class_1_013A96B3D36C22A3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64B0865F947DD0FB_1_TypeDefinitionIndex)->GetStaticField(0x1A420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_1__CCTOR_OFFSET))();
	}
};
