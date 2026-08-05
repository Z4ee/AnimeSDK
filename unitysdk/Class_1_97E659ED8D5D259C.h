#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1EFE2FB0)
#define CLASS_1_97E659ED8D5D259C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE2FA0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_TypeDefinitionIndex = 29469;

class Class_1_97E659ED8D5D259C : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_7 = 0x40000000; // 0x0
	::System::UInt32 Field_1_6; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}
};
