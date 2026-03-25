#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_16;
namespace System { class Object; }

#define STRUCT_2_0B4DDB75CE25594A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20E85A0)
#define STRUCT_2_0B4DDB75CE25594A_EQUALS_OFFSET UNITYSDK_OFFSET(0x20E8AF0)
#define STRUCT_2_0B4DDB75CE25594A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x152ABC0)
#define STRUCT_2_0B4DDB75CE25594A_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x152AA00)
#define STRUCT_2_0B4DDB75CE25594A_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xD250)
#define STRUCT_2_0B4DDB75CE25594A_INIT_OFFSET UNITYSDK_OFFSET(0x852E0)
#define STRUCT_2_0B4DDB75CE25594A_METHOD_2_175892D000930F48_1_OFFSET UNITYSDK_OFFSET(0x16C82D40)
#define STRUCT_2_0B4DDB75CE25594A_METHOD_2_175892D000930F48_OFFSET UNITYSDK_OFFSET(0x16C82D10)
#define STRUCT_2_0B4DDB75CE25594A_METHOD_2_53FADCED337E5C9E_OFFSET UNITYSDK_OFFSET(0x152ABA0)
#define STRUCT_2_0B4DDB75CE25594A_METHOD_2_D00B235D6F257E4D_OFFSET UNITYSDK_OFFSET(0x16C82BD0)
#define STRUCT_2_0B4DDB75CE25594A_METHOD_2_EDDDB51C888FFE34_OFFSET UNITYSDK_OFFSET(0x16C82CF0)
#define STRUCT_2_0B4DDB75CE25594A_METHOD_2_FE4A7327340090B5_OFFSET UNITYSDK_OFFSET(0x20E8B00)

inline static constexpr unsigned int Struct_2_0B4DDB75CE25594A_TypeDefinitionIndex = 22496;

struct alignas(8) Struct_2_0B4DDB75CE25594A
{
	::Class_0_16E4307DCC419505_16* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void Init(::Class_0_16E4307DCC419505_16* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_16*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_GET_OFFSET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_D00B235D6F257E4D(::Struct_2_0B4DDB75CE25594A a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0B4DDB75CE25594A, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_METHOD_2_D00B235D6F257E4D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_EDDDB51C888FFE34(::Struct_2_0B4DDB75CE25594A a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0B4DDB75CE25594A, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_METHOD_2_EDDDB51C888FFE34_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_175892D000930F48(::System::Object* a1, ::Struct_2_0B4DDB75CE25594A a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::Struct_2_0B4DDB75CE25594A))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_METHOD_2_175892D000930F48_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_175892D000930F48_1(::System::Object* a1, ::Struct_2_0B4DDB75CE25594A a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::Struct_2_0B4DDB75CE25594A))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_METHOD_2_175892D000930F48_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_53FADCED337E5C9E(::Struct_2_0B4DDB75CE25594A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0B4DDB75CE25594A))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_METHOD_2_53FADCED337E5C9E_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_GETHASHCODE_OFFSET))(this);
	}

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::Struct_2_0B4DDB75CE25594A_1> Method_2_FE4A7327340090B5()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::Struct_2_0B4DDB75CE25594A_1>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_METHOD_2_FE4A7327340090B5_OFFSET))(this);
	}
	*/
};
