#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_070447EE4188B20D.h"

namespace System { class String; }

#define CLASS_2_40ADB44059E270C5_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBC5D0B0)
#define CLASS_2_40ADB44059E270C5__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC5D100)
#define CLASS_2_40ADB44059E270C5__CTOR_OFFSET UNITYSDK_OFFSET(0xBC5D0A0)

inline static constexpr unsigned int Class_2_40ADB44059E270C5_TypeDefinitionIndex = 67263;

class Class_2_40ADB44059E270C5 : public ::Class_1_070447EE4188B20D
{
public:
	static ::Class_2_40ADB44059E270C5** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_2_40ADB44059E270C5**)Il2CppClass::FromTypeDefinitionIndex(Class_2_40ADB44059E270C5_TypeDefinitionIndex)->GetStaticField(0x458A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5__CCTOR_OFFSET))();
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40ADB44059E270C5_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
