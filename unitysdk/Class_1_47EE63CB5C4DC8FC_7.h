#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;

#define CLASS_1_47EE63CB5C4DC8FC_7_CLEAR_OFFSET UNITYSDK_OFFSET(0x168970E0)
#define CLASS_1_47EE63CB5C4DC8FC_7__CTOR_OFFSET UNITYSDK_OFFSET(0x16897160)

inline static constexpr unsigned int Class_1_47EE63CB5C4DC8FC_7_TypeDefinitionIndex = 33679;

class Class_1_47EE63CB5C4DC8FC_7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_116* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_7_CLEAR_OFFSET))(this);
	}
};
