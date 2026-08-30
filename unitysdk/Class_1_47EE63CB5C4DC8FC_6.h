#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_138;

#define CLASS_1_47EE63CB5C4DC8FC_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAB4FF0)
#define CLASS_1_47EE63CB5C4DC8FC_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB5070)

inline static constexpr unsigned int Class_1_47EE63CB5C4DC8FC_6_TypeDefinitionIndex = 41805;

class Class_1_47EE63CB5C4DC8FC_6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_138* JIIKAEMELPJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_6_CLEAR_OFFSET))(this);
	}
};
