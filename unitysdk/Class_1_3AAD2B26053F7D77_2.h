#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3AAD2B26053F7D77_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC24C0)

inline static constexpr unsigned int Class_1_3AAD2B26053F7D77_2_TypeDefinitionIndex = 39607;

class Class_1_3AAD2B26053F7D77_2 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AAD2B26053F7D77_2__CTOR_OFFSET))(this);
	}
};
