#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_16;

#define CLASS_1_CC2AB4C9FF1E66A2_CLEAR_OFFSET UNITYSDK_OFFSET(0x187A0840)
#define CLASS_1_CC2AB4C9FF1E66A2__CTOR_OFFSET UNITYSDK_OFFSET(0x187A08C0)

inline static constexpr unsigned int Class_1_CC2AB4C9FF1E66A2_TypeDefinitionIndex = 40747;

class Class_1_CC2AB4C9FF1E66A2 : public ::System::Object
{
public:
	::Class_1_7807B2B04302CD7B_16* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC2AB4C9FF1E66A2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC2AB4C9FF1E66A2_CLEAR_OFFSET))(this);
	}
};
