#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE3A255CA9C42FA9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_96;

#define CLASS_1_03DF5C4457066928_CLEAR_OFFSET UNITYSDK_OFFSET(0x167F7400)
#define CLASS_1_03DF5C4457066928__CTOR_OFFSET UNITYSDK_OFFSET(0x167F74B0)

inline static constexpr unsigned int Class_1_03DF5C4457066928_TypeDefinitionIndex = 32298;

class Class_1_03DF5C4457066928 : public ::System::Object
{
public:
	::Struct_2_AE3A255CA9C42FA9 Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_96* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DF5C4457066928__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DF5C4457066928_CLEAR_OFFSET))(this);
	}
};
