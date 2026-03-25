#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_119;

#define CLASS_1_47EE63CB5C4DC8FC_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x16753CF0)
#define CLASS_1_47EE63CB5C4DC8FC_6__CTOR_OFFSET UNITYSDK_OFFSET(0x16753D70)

inline static constexpr unsigned int Class_1_47EE63CB5C4DC8FC_6_TypeDefinitionIndex = 33472;

class Class_1_47EE63CB5C4DC8FC_6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_119* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_6_CLEAR_OFFSET))(this);
	}
};
