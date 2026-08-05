#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_1AE8F38502A93985_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1288B8E0)
#define CLASS_1_1AE8F38502A93985__CTOR_OFFSET UNITYSDK_OFFSET(0x1288BA80)

inline static constexpr unsigned int Class_1_1AE8F38502A93985_TypeDefinitionIndex = 76483;

class Class_1_1AE8F38502A93985 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Single>* Field_1_7; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE8F38502A93985__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE8F38502A93985_DISPOSE_OFFSET))(this);
	}
};
