#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_82297B6AFFE49354_1__CTOR_OFFSET UNITYSDK_OFFSET(0x168F3580)

inline static constexpr unsigned int Class_1_82297B6AFFE49354_1_TypeDefinitionIndex = 33747;

class Class_1_82297B6AFFE49354_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Single Field_1_2; // 0x14
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82297B6AFFE49354_1__CTOR_OFFSET))(this);
	}
};
