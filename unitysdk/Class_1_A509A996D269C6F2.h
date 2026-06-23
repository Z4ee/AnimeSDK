#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A509A996D269C6F2__CTOR_OFFSET UNITYSDK_OFFSET(0x154887D0)

inline static constexpr unsigned int Class_1_A509A996D269C6F2_TypeDefinitionIndex = 70581;

class Class_1_A509A996D269C6F2 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A509A996D269C6F2__CTOR_OFFSET))(this);
	}
};
