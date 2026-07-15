#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3A2537511B865C0E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9E73F0)
#define CLASS_1_3A2537511B865C0E_METHOD_1_0D1C35058E0857E0_OFFSET UNITYSDK_OFFSET(0x1A9E7CA0)
#define CLASS_1_3A2537511B865C0E_METHOD_1_16B5254E8F103A0F_OFFSET UNITYSDK_OFFSET(0x1A9E75D0)
#define CLASS_1_3A2537511B865C0E_METHOD_1_355098BE7E395AFD_OFFSET UNITYSDK_OFFSET(0x1A9E79C0)
#define CLASS_1_3A2537511B865C0E_METHOD_1_425B226ADBC6BFAE_OFFSET UNITYSDK_OFFSET(0x1A9E7540)
#define CLASS_1_3A2537511B865C0E_METHOD_1_5A9A62E6A31621BD_OFFSET UNITYSDK_OFFSET(0x1A9E7890)
#define CLASS_1_3A2537511B865C0E_METHOD_1_DC497FA458BA0CAA_OFFSET UNITYSDK_OFFSET(0x1A9E7AC0)
#define CLASS_1_3A2537511B865C0E_METHOD_1_E9E466E6EDEDE266_OFFSET UNITYSDK_OFFSET(0x1A9E76E0)
#define CLASS_1_3A2537511B865C0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E7D50)

inline static constexpr unsigned int Class_1_3A2537511B865C0E_TypeDefinitionIndex = 40670;

class Class_1_3A2537511B865C0E : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_1_0; // 0x10
	::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_425B226ADBC6BFAE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_425B226ADBC6BFAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_16B5254E8F103A0F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_16B5254E8F103A0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A9A62E6A31621BD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_5A9A62E6A31621BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC497FA458BA0CAA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_DC497FA458BA0CAA_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D1C35058E0857E0(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_0D1C35058E0857E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9E466E6EDEDE266(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_E9E466E6EDEDE266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_355098BE7E395AFD(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_3A2537511B865C0E_METHOD_1_355098BE7E395AFD_OFFSET))(this, a1, a2);
	}
};
