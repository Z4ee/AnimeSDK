#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_402DF9909D154129__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC5300)

inline static constexpr unsigned int Class_1_402DF9909D154129_TypeDefinitionIndex = 35023;

class Class_1_402DF9909D154129 : public ::System::Object
{
public:
	::System::UInt64 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_402DF9909D154129__CTOR_OFFSET))(this);
	}
};
