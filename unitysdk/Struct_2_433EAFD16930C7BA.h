#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_433EAFD16930C7BA_EQUALS_OFFSET UNITYSDK_OFFSET(0x7505D0)
#define STRUCT_2_433EAFD16930C7BA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x750620)
#define STRUCT_2_433EAFD16930C7BA_METHOD_2_C409EC373E6784B4_OFFSET UNITYSDK_OFFSET(0x128A45C0)
#define STRUCT_2_433EAFD16930C7BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x128A45A0)
#define STRUCT_2_433EAFD16930C7BA__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

inline static constexpr unsigned int Struct_2_433EAFD16930C7BA_TypeDefinitionIndex = 56876;

struct alignas(4) Struct_2_433EAFD16930C7BA
{
	static ::System::UInt32* StaticGet_Field_2_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_433EAFD16930C7BA_TypeDefinitionIndex)->GetStaticField(0xCCB0);
	}
	static ::Struct_2_433EAFD16930C7BA* StaticGet_Field_2_0()
	{
		return (::Struct_2_433EAFD16930C7BA*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_433EAFD16930C7BA_TypeDefinitionIndex)->GetStaticField(0xCCB4);
	}
	::System::UInt32 Field_2_2; // 0x10
	::System::Int32 Field_2_3; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_433EAFD16930C7BA__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_433EAFD16930C7BA__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_433EAFD16930C7BA a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + STRUCT_2_433EAFD16930C7BA_EQUALS_OFFSET))(this, a1);
	}

	static ::Struct_2_433EAFD16930C7BA Method_2_C409EC373E6784B4(::System::Int32 a1)
	{
		return ((::Struct_2_433EAFD16930C7BA(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_433EAFD16930C7BA_METHOD_2_C409EC373E6784B4_OFFSET))(a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_433EAFD16930C7BA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
