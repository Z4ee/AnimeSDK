#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_345;
class Class_1_7B4E9156998275BE;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_0F04C7B022327561_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5C5F20)
#define CLASS_1_0F04C7B022327561_METHOD_1_09AF907FE63C2078_OFFSET UNITYSDK_OFFSET(0x1E5C6070)
#define CLASS_1_0F04C7B022327561__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE6E0)

inline static constexpr unsigned int Class_1_0F04C7B022327561_TypeDefinitionIndex = 42504;

class Class_1_0F04C7B022327561 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_345* CCLOECKDIKH; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_345* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + CLASS_1_0F04C7B022327561__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F04C7B022327561_DISPOSE_OFFSET))(this);
	}

	::System::Object* Method_1_09AF907FE63C2078(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_0F04C7B022327561_METHOD_1_09AF907FE63C2078_OFFSET))(this, a1, a2);
	}
};
