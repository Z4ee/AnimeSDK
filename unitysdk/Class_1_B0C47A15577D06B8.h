#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EBC86B04CFFF8F2C.h"
#include "unitysdk/System/Object.h"

class Class_1_2BEAA93324417DF4;
namespace System { class EventArgs; }

#define CLASS_1_B0C47A15577D06B8_METHOD_1_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0x11887C70)
#define CLASS_1_B0C47A15577D06B8_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x118881D0)
#define CLASS_1_B0C47A15577D06B8_METHOD_1_883886AACE3A8445_OFFSET UNITYSDK_OFFSET(0x11887FC0)
#define CLASS_1_B0C47A15577D06B8__CTOR_OFFSET UNITYSDK_OFFSET(0x11887C60)

inline static constexpr unsigned int Class_1_B0C47A15577D06B8_TypeDefinitionIndex = 51583;

class Class_1_B0C47A15577D06B8 : public ::System::Object
{
public:
	::Struct_2_EBC86B04CFFF8F2C Field_1_1; // 0x10
	::Class_1_2BEAA93324417DF4* Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0C47A15577D06B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0C47A15577D06B8_METHOD_1_1832E29FF208A65E_OFFSET))(this, a1);
	}

	::System::Void Method_1_883886AACE3A8445(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B0C47A15577D06B8_METHOD_1_883886AACE3A8445_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0C47A15577D06B8_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}
};
