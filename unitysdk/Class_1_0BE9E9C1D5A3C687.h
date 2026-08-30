#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0BE9E9C1D5A3C687_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15751400)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_3298505FDB72D667_OFFSET UNITYSDK_OFFSET(0x15751500)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_A57B9CDA1AF8FADF_OFFSET UNITYSDK_OFFSET(0x157516E0)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x157514A0)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_EE6349163432CF81_OFFSET UNITYSDK_OFFSET(0x157515F0)
#define CLASS_1_0BE9E9C1D5A3C687_METHOD_1_F693D0E62C0A7D5B_OFFSET UNITYSDK_OFFSET(0x15751B30)
#define CLASS_1_0BE9E9C1D5A3C687__CTOR_OFFSET UNITYSDK_OFFSET(0x15751B90)

inline static constexpr unsigned int Class_1_0BE9E9C1D5A3C687_TypeDefinitionIndex = 78988;

class Class_1_0BE9E9C1D5A3C687 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* IIAELGFJDEG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3298505FDB72D667(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_3298505FDB72D667_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE6349163432CF81(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_EE6349163432CF81_OFFSET))(this, a1);
	}

	::System::Void Method_1_A57B9CDA1AF8FADF(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_A57B9CDA1AF8FADF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F693D0E62C0A7D5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BE9E9C1D5A3C687_METHOD_1_F693D0E62C0A7D5B_OFFSET))(this, a1);
	}
};
