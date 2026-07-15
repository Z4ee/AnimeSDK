#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_070447EE4188B20D.h"

namespace System { class String; }

#define CLASS_2_40ADB44059E270C5_2_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x162327E0)
#define CLASS_2_40ADB44059E270C5_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x16232830)
#define CLASS_2_40ADB44059E270C5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x162327D0)

inline static constexpr unsigned int Class_2_40ADB44059E270C5_2_TypeDefinitionIndex = 64715;

class Class_2_40ADB44059E270C5_2 : public ::Class_1_070447EE4188B20D
{
public:
	static ::Class_2_40ADB44059E270C5_2** StaticGet_Field_2_0()
	{
		return (::Class_2_40ADB44059E270C5_2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_40ADB44059E270C5_2_TypeDefinitionIndex)->GetStaticField(0x57A20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_2__CCTOR_OFFSET))();
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_2_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
