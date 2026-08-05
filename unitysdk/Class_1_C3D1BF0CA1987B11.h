#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_7.h"
#include "unitysdk/System/Object.h"

class Class_2_9A16BB53176B1EDB;

#define CLASS_1_C3D1BF0CA1987B11_METHOD_1_BDBA00FB43D83ECB_OFFSET UNITYSDK_OFFSET(0xF633640)
#define CLASS_1_C3D1BF0CA1987B11__CTOR_OFFSET UNITYSDK_OFFSET(0xF633630)

inline static constexpr unsigned int Class_1_C3D1BF0CA1987B11_TypeDefinitionIndex = 49324;

class Class_1_C3D1BF0CA1987B11 : public ::System::Object
{
public:
	::Class_2_9A16BB53176B1EDB* Field_1_0; // 0x10
	::Enum_3_4608E37A1B3D374A_7 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3D1BF0CA1987B11__CTOR_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_7 Method_1_BDBA00FB43D83ECB()
	{
		return ((::Enum_3_4608E37A1B3D374A_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3D1BF0CA1987B11_METHOD_1_BDBA00FB43D83ECB_OFFSET))(this);
	}
};
