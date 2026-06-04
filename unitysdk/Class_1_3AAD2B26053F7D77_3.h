#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3AAD2B26053F7D77_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18C890D0)

inline static constexpr unsigned int Class_1_3AAD2B26053F7D77_3_TypeDefinitionIndex = 39623;

class Class_1_3AAD2B26053F7D77_3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AAD2B26053F7D77_3__CTOR_OFFSET))(this);
	}
};
