#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_8E96E62D35CF6983__CTOR_OFFSET UNITYSDK_OFFSET(0x17E56ED0)

inline static constexpr unsigned int Class_1_8E96E62D35CF6983_TypeDefinitionIndex = 38833;

class Class_1_8E96E62D35CF6983 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_0; // 0x14
	::System::Int32 Field_1_3; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E96E62D35CF6983__CTOR_OFFSET))(this);
	}
};
