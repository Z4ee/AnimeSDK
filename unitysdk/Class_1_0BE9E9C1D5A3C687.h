#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0BE9E9C1D5A3C687_DISPOSE_OFFSET UNITYSDK_OFFSET(0x975CC00)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_3298505FDB72D667_OFFSET UNITYSDK_OFFSET(0x975CCF0)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_3E8E2FB84CBB3515_OFFSET UNITYSDK_OFFSET(0x975CED0)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x975CC90)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_EE6349163432CF81_OFFSET UNITYSDK_OFFSET(0x975CDE0)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_F693D0E62C0A7D5B_OFFSET UNITYSDK_OFFSET(0x975D1E0)
#define CLASS_1_0BE9E9C1D5A3C687__CTOR_OFFSET UNITYSDK_OFFSET(0x975D240)

inline static constexpr unsigned int Class_1_0BE9E9C1D5A3C687_TypeDefinitionIndex = 68488;

class Class_1_0BE9E9C1D5A3C687 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3298505FDB72D667(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_3298505FDB72D667_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE6349163432CF81(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_EE6349163432CF81_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E8E2FB84CBB3515(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_3E8E2FB84CBB3515_OFFSET))(this, a1);
	}

	::System::Void Method_1_F693D0E62C0A7D5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_F693D0E62C0A7D5B_OFFSET))(this, a1);
	}
};
