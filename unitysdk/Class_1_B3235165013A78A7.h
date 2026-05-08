#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_B3235165013A78A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13F5E610)
#define CLASS_1_B3235165013A78A7__CTOR_OFFSET UNITYSDK_OFFSET(0x13F5E7B0)

inline static constexpr unsigned int Class_1_B3235165013A78A7_TypeDefinitionIndex = 38419;

class Class_1_B3235165013A78A7 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Single>* Field_1_2; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3235165013A78A7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3235165013A78A7_DISPOSE_OFFSET))(this);
	}
};
