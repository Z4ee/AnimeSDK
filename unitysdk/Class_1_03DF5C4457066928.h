#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE3A255CA9C42FA9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_114;

#define CLASS_1_03DF5C4457066928_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE1C200)
#define CLASS_1_03DF5C4457066928__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1C2B0)

inline static constexpr unsigned int Class_1_03DF5C4457066928_TypeDefinitionIndex = 39567;

class Class_1_03DF5C4457066928 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_114* Field_1_0; // 0x10
	::Struct_2_AE3A255CA9C42FA9 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DF5C4457066928__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DF5C4457066928_CLEAR_OFFSET))(this);
	}
};
