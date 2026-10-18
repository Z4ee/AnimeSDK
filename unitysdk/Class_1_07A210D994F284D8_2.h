#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA9DC80)
#define CLASS_1_07A210D994F284D8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9DCE0)

inline static constexpr unsigned int Class_1_07A210D994F284D8_2_TypeDefinitionIndex = 42996;

class Class_1_07A210D994F284D8_2 : public ::System::Object
{
public:
	::System::UInt32 ONOGIODHCEC; // 0x10
	::System::UInt32 LOGDJCNCDPK; // 0x14
	::System::UInt32 JCJGJBLENCP; // 0x18
	::System::Boolean ENAMBNDFMPI; // 0x1C
	::System::UInt32 DDCOGNDMBFJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_2_CLEAR_OFFSET))(this);
	}
};
