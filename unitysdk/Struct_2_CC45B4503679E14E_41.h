#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define STRUCT_2_CC45B4503679E14E_41_DISPOSE_OFFSET UNITYSDK_OFFSET(0x384B600)
#define STRUCT_2_CC45B4503679E14E_41_EQUALS_OFFSET UNITYSDK_OFFSET(0x384FB20)
#define STRUCT_2_CC45B4503679E14E_41_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2C1D350)
#define STRUCT_2_CC45B4503679E14E_41_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2C1CF80)
#define STRUCT_2_CC45B4503679E14E_41_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_CC45B4503679E14E_41_GET_POOL_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_CC45B4503679E14E_41_INIT_OFFSET UNITYSDK_OFFSET(0x89650)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_0B5D635C25D77037_OFFSET UNITYSDK_OFFSET(0x192845C0)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_208751F52B4B9619_1_OFFSET UNITYSDK_OFFSET(0x384FCA0)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_208751F52B4B9619_OFFSET UNITYSDK_OFFSET(0x384FBB0)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_3655585D5924F10F_OFFSET UNITYSDK_OFFSET(0x19284380)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_53FADCED337E5C9E_OFFSET UNITYSDK_OFFSET(0x2C1D330)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_D2A5C684438BA12B_1_OFFSET UNITYSDK_OFFSET(0x384FD40)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_D2A5C684438BA12B_OFFSET UNITYSDK_OFFSET(0x384FC50)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_DDD15C0ABB6B7325_OFFSET UNITYSDK_OFFSET(0x19284430)
#define STRUCT_2_CC45B4503679E14E_41_METHOD_2_E1E9DC9EA07306EC_OFFSET UNITYSDK_OFFSET(0x19284570)

inline static constexpr unsigned int Struct_2_CC45B4503679E14E_41_TypeDefinitionIndex = 10322;

struct alignas(8) Struct_2_CC45B4503679E14E_41
{
	::Class_1_43BD383C98B4C0C5_3* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_GET_OFFSET_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_3* get_Pool()
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_GET_POOL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_3655585D5924F10F(::Struct_2_CC45B4503679E14E_41 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_41, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_3655585D5924F10F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_DDD15C0ABB6B7325(::Struct_2_CC45B4503679E14E_41 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_41, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_DDD15C0ABB6B7325_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_53FADCED337E5C9E(::Struct_2_CC45B4503679E14E_41 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CC45B4503679E14E_41))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_53FADCED337E5C9E_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_E1E9DC9EA07306EC(::Struct_2_CC45B4503679E14E_41 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_41))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_E1E9DC9EA07306EC_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_0B5D635C25D77037(::Struct_2_CC45B4503679E14E_41 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_41))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_0B5D635C25D77037_OFFSET))(a1);
	}

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> Method_2_208751F52B4B9619()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_208751F52B4B9619_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_D2A5C684438BA12B(::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_D2A5C684438BA12B_OFFSET))(this, a1);
	}
	*/

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> Method_2_208751F52B4B9619_1()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_208751F52B4B9619_1_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_D2A5C684438BA12B_1(::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_41_METHOD_2_D2A5C684438BA12B_1_OFFSET))(this, a1);
	}
	*/
};
