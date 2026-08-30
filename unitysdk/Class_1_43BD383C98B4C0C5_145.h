#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_145_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BD94B0)
#define CLASS_1_43BD383C98B4C0C5_145_METHOD_1_EC34F314A51B8412_OFFSET UNITYSDK_OFFSET(0x19BD94F0)
#define CLASS_1_43BD383C98B4C0C5_145__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD98D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_145_TypeDefinitionIndex = 60425;

class Class_1_43BD383C98B4C0C5_145 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_145__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_145_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_EC34F314A51B8412()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_145_METHOD_1_EC34F314A51B8412_OFFSET))(this);
	}
};
