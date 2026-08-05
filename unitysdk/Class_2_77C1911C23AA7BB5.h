#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"

namespace System { class String; }

#define CLASS_2_77C1911C23AA7BB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD81210)

inline static constexpr unsigned int Class_2_77C1911C23AA7BB5_TypeDefinitionIndex = 93118;

class Class_2_77C1911C23AA7BB5 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::String* Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77C1911C23AA7BB5__CTOR_OFFSET))(this);
	}
};
