#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_402DF9909D154129__CTOR_OFFSET UNITYSDK_OFFSET(0x165E9CC0)

inline static constexpr unsigned int Class_1_402DF9909D154129_TypeDefinitionIndex = 29006;

class Class_1_402DF9909D154129 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::System::UInt64 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_402DF9909D154129__CTOR_OFFSET))(this);
	}
};
