#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79F4C97127452753;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_9E013A0367A5C1F7_CLEAR_OFFSET UNITYSDK_OFFSET(0x169E1260)
#define CLASS_1_9E013A0367A5C1F7_METHOD_1_A034FB093FB7C7DD_OFFSET UNITYSDK_OFFSET(0x169E17D0)
#define CLASS_1_9E013A0367A5C1F7_METHOD_1_EC01C67B16F49E30_OFFSET UNITYSDK_OFFSET(0x169E1720)
#define CLASS_1_9E013A0367A5C1F7_ONALLOC_OFFSET UNITYSDK_OFFSET(0x169E1670)
#define CLASS_1_9E013A0367A5C1F7_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x169E16E0)
#define CLASS_1_9E013A0367A5C1F7__CTOR_OFFSET UNITYSDK_OFFSET(0x169E1830)

inline static constexpr unsigned int Class_1_9E013A0367A5C1F7_TypeDefinitionIndex = 33389;

class Class_1_9E013A0367A5C1F7 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::UInt32>*>* Field_1_1; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_79F4C97127452753*>* Field_1_0; // 0x18
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E013A0367A5C1F7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E013A0367A5C1F7_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E013A0367A5C1F7_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E013A0367A5C1F7_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_EC01C67B16F49E30(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E013A0367A5C1F7_METHOD_1_EC01C67B16F49E30_OFFSET))(this, a1, a2);
	}

	::Class_1_79F4C97127452753* Method_1_A034FB093FB7C7DD()
	{
		return ((::Class_1_79F4C97127452753*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E013A0367A5C1F7_METHOD_1_A034FB093FB7C7DD_OFFSET))(this);
	}
};
