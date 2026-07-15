#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6FE0547AC9A9B1E1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A488800)
#define CLASS_1_6FE0547AC9A9B1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A488860)

inline static constexpr unsigned int Class_1_6FE0547AC9A9B1E1_TypeDefinitionIndex = 40878;

class Class_1_6FE0547AC9A9B1E1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Single Field_1_3; // 0x1C
	::System::Int32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FE0547AC9A9B1E1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FE0547AC9A9B1E1_CLEAR_OFFSET))(this);
	}
};
