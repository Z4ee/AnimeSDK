#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3AAD2B26053F7D77__CTOR_OFFSET UNITYSDK_OFFSET(0x181830A0)

inline static constexpr unsigned int Class_1_3AAD2B26053F7D77_TypeDefinitionIndex = 35310;

class Class_1_3AAD2B26053F7D77 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x2; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x1F4; // 0x0
	::System::UInt32 Field_1_2; // 0x10
	::System::Single Field_1_3; // 0x14
	::System::Single Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AAD2B26053F7D77__CTOR_OFFSET))(this);
	}
};
