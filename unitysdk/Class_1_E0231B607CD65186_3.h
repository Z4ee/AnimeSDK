#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2DA6D48CD9206BB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_3_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x167E7200)
#define CLASS_1_E0231B607CD65186_3__CTOR_OFFSET UNITYSDK_OFFSET(0x167E7280)

inline static constexpr unsigned int Class_1_E0231B607CD65186_3_TypeDefinitionIndex = 32353;

class Class_1_E0231B607CD65186_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C2DA6D48CD9206BB*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_3_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
