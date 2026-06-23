#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FED7C03EAA90E7EB_Enum_3_04668C95746262F4.h"
#include "unitysdk/Class_1_FED7C03EAA90E7EB_Struct_2_39FAD6C02817E958.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FED7C03EAA90E7EB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D95860)

inline static constexpr unsigned int Class_1_FED7C03EAA90E7EB_TypeDefinitionIndex = 82474;

class Class_1_FED7C03EAA90E7EB : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Boolean Field_1_4; // 0x15
	::Class_1_FED7C03EAA90E7EB_Enum_3_04668C95746262F4 Field_1_3; // 0x18
	::Class_1_FED7C03EAA90E7EB_Struct_2_39FAD6C02817E958 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FED7C03EAA90E7EB__CTOR_OFFSET))(this);
	}
};
