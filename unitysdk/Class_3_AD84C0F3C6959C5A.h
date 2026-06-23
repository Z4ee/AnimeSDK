#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DA7C9B2D7841637.h"

namespace System { class String; }

#define CLASS_3_AD84C0F3C6959C5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1059BE60)

inline static constexpr unsigned int Class_3_AD84C0F3C6959C5A_TypeDefinitionIndex = 45941;

class Class_3_AD84C0F3C6959C5A : public ::Class_2_3DA7C9B2D7841637
{
public:
	::System::String* Field_3_1; // 0x38
	::System::String* Field_3_0; // 0x40

	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_AD84C0F3C6959C5A__CTOR_OFFSET))(this, a1, a2);
	}
};
