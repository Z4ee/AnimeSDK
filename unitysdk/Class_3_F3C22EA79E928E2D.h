#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F16D33FE2B56727.h"

class Class_2_A48F3719AA1CF200;
namespace System { class String; }

#define CLASS_3_F3C22EA79E928E2D__CTOR_OFFSET UNITYSDK_OFFSET(0xAC15280)

inline static constexpr unsigned int Class_3_F3C22EA79E928E2D_TypeDefinitionIndex = 70583;

class Class_3_F3C22EA79E928E2D : public ::Class_2_5F16D33FE2B56727
{
public:
	::System::String* Field_3_0; // 0x30
	::Class_2_A48F3719AA1CF200* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3C22EA79E928E2D__CTOR_OFFSET))(this);
	}
};
