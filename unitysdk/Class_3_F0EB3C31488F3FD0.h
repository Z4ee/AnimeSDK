#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DA7C9B2D7841637.h"

namespace System { class String; }

#define CLASS_3_F0EB3C31488F3FD0__CTOR_OFFSET UNITYSDK_OFFSET(0x16895610)

inline static constexpr unsigned int Class_3_F0EB3C31488F3FD0_TypeDefinitionIndex = 76088;

class Class_3_F0EB3C31488F3FD0 : public ::Class_2_3DA7C9B2D7841637
{
public:
	::System::String* Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x40

	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F0EB3C31488F3FD0__CTOR_OFFSET))(this, a1, a2);
	}
};
