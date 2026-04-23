#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_117;

#define CLASS_1_47EE63CB5C4DC8FC_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E679E0)
#define CLASS_1_47EE63CB5C4DC8FC_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E67A60)

inline static constexpr unsigned int Class_1_47EE63CB5C4DC8FC_8_TypeDefinitionIndex = 39473;

class Class_1_47EE63CB5C4DC8FC_8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_117* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_8_CLEAR_OFFSET))(this);
	}
};
