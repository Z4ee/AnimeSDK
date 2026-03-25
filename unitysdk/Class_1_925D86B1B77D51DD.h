#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_925D86B1B77D51DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1683F0E0)

inline static constexpr unsigned int Class_1_925D86B1B77D51DD_TypeDefinitionIndex = 32752;

class Class_1_925D86B1B77D51DD : public ::System::Object
{
public:
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_925D86B1B77D51DD__CTOR_OFFSET))(this);
	}
};
