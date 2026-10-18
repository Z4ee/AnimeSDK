#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_431;
class Class_1_C6F4C4ABEDB8B5E9;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_0F04C7B022327561_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC88240)
#define CLASS_1_0F04C7B022327561_METHOD_1_09AF907FE63C2078_OFFSET UNITYSDK_OFFSET(0x1EC88390)
#define CLASS_1_0F04C7B022327561__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7C460)

inline static constexpr unsigned int Class_1_0F04C7B022327561_TypeDefinitionIndex = 44311;

class Class_1_0F04C7B022327561 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_431* CCLOECKDIKH; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_431* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_431*))((::PBYTE)hIl2Cpp + CLASS_1_0F04C7B022327561__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F04C7B022327561_DISPOSE_OFFSET))(this);
	}

	::System::Object* Method_1_09AF907FE63C2078(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_C6F4C4ABEDB8B5E9* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_0F04C7B022327561_METHOD_1_09AF907FE63C2078_OFFSET))(this, a1, a2);
	}
};
