#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A509A996D269C6F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDD94230)

inline static constexpr unsigned int Class_1_A509A996D269C6F2_1_TypeDefinitionIndex = 53336;

class Class_1_A509A996D269C6F2_1 : public ::System::Object
{
public:
	::System::String* ICDNCHJJDBH; // 0x10
	::System::String* FFJLJEFAGKB; // 0x18
	::System::UInt32 OIFPEADMMCD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A509A996D269C6F2_1__CTOR_OFFSET))(this);
	}
};
