#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FDDC446F970A6752__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0CC50)

inline static constexpr unsigned int Class_1_FDDC446F970A6752_TypeDefinitionIndex = 58967;

class Class_1_FDDC446F970A6752 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::UInt16 Field_1_0; // 0x18
	::System::UInt16 Field_1_1; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDC446F970A6752__CTOR_OFFSET))(this);
	}
};
