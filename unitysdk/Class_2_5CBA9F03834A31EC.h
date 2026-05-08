#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_5CBA9F03834A31EC__CTOR_OFFSET UNITYSDK_OFFSET(0x141A0070)

inline static constexpr unsigned int Class_2_5CBA9F03834A31EC_TypeDefinitionIndex = 48275;

class Class_2_5CBA9F03834A31EC : public ::System::EventArgs
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CBA9F03834A31EC__CTOR_OFFSET))(this);
	}
};
