#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_070447EE4188B20D.h"

namespace System { class String; }

#define CLASS_2_40ADB44059E270C5_3_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16251280)
#define CLASS_2_40ADB44059E270C5_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x162512D0)
#define CLASS_2_40ADB44059E270C5_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16251270)

inline static constexpr unsigned int Class_2_40ADB44059E270C5_3_TypeDefinitionIndex = 64729;

class Class_2_40ADB44059E270C5_3 : public ::Class_1_070447EE4188B20D
{
public:
	static ::Class_2_40ADB44059E270C5_3** StaticGet_Field_2_0()
	{
		return (::Class_2_40ADB44059E270C5_3**)Il2CppClass::FromTypeDefinitionIndex(Class_2_40ADB44059E270C5_3_TypeDefinitionIndex)->GetStaticField(0x60660);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_3__CCTOR_OFFSET))();
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_3_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
