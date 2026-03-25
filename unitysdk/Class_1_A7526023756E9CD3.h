#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_199;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_867B6CE75953535A;

#define CLASS_1_A7526023756E9CD3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16822800)
#define CLASS_1_A7526023756E9CD3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16822720)
#define CLASS_1_A7526023756E9CD3__CTOR_OFFSET UNITYSDK_OFFSET(0x16822700)

inline static constexpr unsigned int Class_1_A7526023756E9CD3_TypeDefinitionIndex = 32615;

class Class_1_A7526023756E9CD3 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_199* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_1_47EE63CB5C4DC8FC_5*))((::PBYTE)hIl2Cpp + CLASS_1_A7526023756E9CD3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7526023756E9CD3_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7526023756E9CD3_EXECUTE_OFFSET))(this);
	}
};
