#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB0772CB60BD0697.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_5C5754DDF4E59233_CLASS_2_317D5E935D66B5FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15025EF0)

inline static constexpr unsigned int Class_2_5C5754DDF4E59233_Class_2_317D5E935D66B5FD_TypeDefinitionIndex = 49988;

class Class_2_5C5754DDF4E59233_Class_2_317D5E935D66B5FD : public ::System::EventArgs
{
public:
	::System::UInt64 Field_2_0; // 0x10
	::System::Boolean Field_2_2; // 0x18
	::Enum_3_AB0772CB60BD0697 Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_317D5E935D66B5FD__CTOR_OFFSET))(this);
	}
};
