#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C0F155CE9B39D399_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x180C5E60)
#define CLASS_1_C0F155CE9B39D399__CTOR_OFFSET UNITYSDK_OFFSET(0x180C5EB0)

inline static constexpr unsigned int Class_1_C0F155CE9B39D399_TypeDefinitionIndex = 41108;

class Class_1_C0F155CE9B39D399 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F155CE9B39D399__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F155CE9B39D399_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
