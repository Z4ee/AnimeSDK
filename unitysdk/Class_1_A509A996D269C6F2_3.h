#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A509A996D269C6F2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xAF64D10)

inline static constexpr unsigned int Class_1_A509A996D269C6F2_3_TypeDefinitionIndex = 67562;

class Class_1_A509A996D269C6F2_3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A509A996D269C6F2_3__CTOR_OFFSET))(this);
	}
};
