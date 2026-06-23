#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D35E9E460230298E_Enum_3_DC4AE9FBDD3EA9F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_10;
namespace System { class String; }

#define CLASS_1_D35E9E460230298E_METHOD_1_2D730252EA599DD2_OFFSET UNITYSDK_OFFSET(0x1B211180)
#define CLASS_1_D35E9E460230298E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2110B0)
#define CLASS_1_D35E9E460230298E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B211370)

inline static constexpr unsigned int Class_1_D35E9E460230298E_TypeDefinitionIndex = 15849;

class Class_1_D35E9E460230298E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_10* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_10* Field_1_1; // 0x18
	::Class_1_D35E9E460230298E_Enum_3_DC4AE9FBDD3EA9F1 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35E9E460230298E__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35E9E460230298E_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_1_2D730252EA599DD2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35E9E460230298E_METHOD_1_2D730252EA599DD2_OFFSET))(this);
	}
};
