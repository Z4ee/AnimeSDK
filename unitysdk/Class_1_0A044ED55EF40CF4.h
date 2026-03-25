#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_0A044ED55EF40CF4__CTOR_OFFSET UNITYSDK_OFFSET(0x169DDE00)

inline static constexpr unsigned int Class_1_0A044ED55EF40CF4_TypeDefinitionIndex = 32718;

class Class_1_0A044ED55EF40CF4 : public ::System::Object
{
public:
	::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> Field_1_1; // 0x10
	::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A044ED55EF40CF4__CTOR_OFFSET))(this);
	}
};
