#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_3C29F96DEFD2E870_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137EA0E0)
#define CLASS_1_3C29F96DEFD2E870__CTOR_OFFSET UNITYSDK_OFFSET(0x137EA4C0)

inline static constexpr unsigned int Class_1_3C29F96DEFD2E870_TypeDefinitionIndex = 41642;

class Class_1_3C29F96DEFD2E870 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Single>* Field_1_3; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x18
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_4; // 0x20
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_5; // 0x28
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x30
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_6; // 0x38
	::System::Int32 Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C29F96DEFD2E870__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C29F96DEFD2E870_DISPOSE_OFFSET))(this);
	}
};
