#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B822DA0F8FF82394_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3AD550)
#define CLASS_1_B822DA0F8FF82394_METHOD_1_C5C4DBD5CEC72115_OFFSET UNITYSDK_OFFSET(0x1C3AD5B0)
#define CLASS_1_B822DA0F8FF82394__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3AD4E0)
#define CLASS_1_B822DA0F8FF82394__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AD480)

inline static constexpr unsigned int Class_1_B822DA0F8FF82394_TypeDefinitionIndex = 41394;

class Class_1_B822DA0F8FF82394 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* OCBIAPBAFOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B822DA0F8FF82394__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_B822DA0F8FF82394__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B822DA0F8FF82394_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_C5C4DBD5CEC72115(::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>))((::PBYTE)hIl2Cpp + CLASS_1_B822DA0F8FF82394_METHOD_1_C5C4DBD5CEC72115_OFFSET))(this, a1);
	}
};
