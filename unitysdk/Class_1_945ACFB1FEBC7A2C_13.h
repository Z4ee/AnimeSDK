#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_13_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1764AF20)
#define CLASS_1_945ACFB1FEBC7A2C_13_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1764AF70)
#define CLASS_1_945ACFB1FEBC7A2C_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1764AFE0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_13_TypeDefinitionIndex = 85233;

class Class_1_945ACFB1FEBC7A2C_13 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_13__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_13_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_13_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
