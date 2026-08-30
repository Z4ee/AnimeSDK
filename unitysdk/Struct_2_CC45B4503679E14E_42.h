#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define STRUCT_2_CC45B4503679E14E_42_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B78740)
#define STRUCT_2_CC45B4503679E14E_42_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B88530)
#define STRUCT_2_CC45B4503679E14E_42_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2F3A950)
#define STRUCT_2_CC45B4503679E14E_42_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2F3A750)
#define STRUCT_2_CC45B4503679E14E_42_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define STRUCT_2_CC45B4503679E14E_42_GET_POOL_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define STRUCT_2_CC45B4503679E14E_42_INIT_OFFSET UNITYSDK_OFFSET(0x8EB60)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_20F4806358A3520A_OFFSET UNITYSDK_OFFSET(0x1CC4DFC0)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_53FADCED337E5C9E_OFFSET UNITYSDK_OFFSET(0x2F10A00)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_6E12E83478325A9E_1_OFFSET UNITYSDK_OFFSET(0x3B885B0)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_6E12E83478325A9E_OFFSET UNITYSDK_OFFSET(0x3B88540)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_D2A5C684438BA12B_1_OFFSET UNITYSDK_OFFSET(0x3B885D0)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_D2A5C684438BA12B_OFFSET UNITYSDK_OFFSET(0x3B88560)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_D9A51F0C086CDF14_OFFSET UNITYSDK_OFFSET(0x1CC4E070)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_DDD15C0ABB6B7325_OFFSET UNITYSDK_OFFSET(0x1CC4DD80)
#define STRUCT_2_CC45B4503679E14E_42_METHOD_2_EDDDB51C888FFE34_OFFSET UNITYSDK_OFFSET(0x1CC4DE90)

inline static constexpr unsigned int Struct_2_CC45B4503679E14E_42_TypeDefinitionIndex = 10684;

struct alignas(8) Struct_2_CC45B4503679E14E_42
{
	::Class_1_43BD383C98B4C0C5_3* BEHHICMOFIE; // 0x10
	::System::UInt32 IKKNJMJCDOJ; // 0x18

	::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_GET_OFFSET_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_3* get_Pool()
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_GET_POOL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_DDD15C0ABB6B7325(::Struct_2_CC45B4503679E14E_42 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_42, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_DDD15C0ABB6B7325_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_EDDDB51C888FFE34(::Struct_2_CC45B4503679E14E_42 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_42, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_EDDDB51C888FFE34_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_53FADCED337E5C9E(::Struct_2_CC45B4503679E14E_42 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CC45B4503679E14E_42))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_53FADCED337E5C9E_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_20F4806358A3520A(::Struct_2_CC45B4503679E14E_42 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_42))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_20F4806358A3520A_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_D9A51F0C086CDF14(::Struct_2_CC45B4503679E14E_42 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_42))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_D9A51F0C086CDF14_OFFSET))(a1);
	}

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> Method_2_6E12E83478325A9E()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_6E12E83478325A9E_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_D2A5C684438BA12B(::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_D2A5C684438BA12B_OFFSET))(this, a1);
	}
	*/

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> Method_2_6E12E83478325A9E_1()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_6E12E83478325A9E_1_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_D2A5C684438BA12B_1(::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_42_METHOD_2_D2A5C684438BA12B_1_OFFSET))(this, a1);
	}
	*/
};
