#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_7.h"

class Class_2_9CF591E9FCB0B5F1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_81FA3E65C6817386_METHOD_2_04B30B0DB9B6EC9B_OFFSET UNITYSDK_OFFSET(0xE974D10)
#define CLASS_2_81FA3E65C6817386_METHOD_2_20DD494EA28B5C97_OFFSET UNITYSDK_OFFSET(0xE974390)
#define CLASS_2_81FA3E65C6817386_METHOD_2_6242B2526D287466_OFFSET UNITYSDK_OFFSET(0xE9749A0)
#define CLASS_2_81FA3E65C6817386_METHOD_2_81EE0877B1D6FCC0_OFFSET UNITYSDK_OFFSET(0xE974BA0)
#define CLASS_2_81FA3E65C6817386_METHOD_2_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0xE974900)
#define CLASS_2_81FA3E65C6817386_METHOD_2_DE7E67C6E4A905B8_OFFSET UNITYSDK_OFFSET(0xE974320)
#define CLASS_2_81FA3E65C6817386_METHOD_2_F30B868D748FA16B_OFFSET UNITYSDK_OFFSET(0xE974D80)
#define CLASS_2_81FA3E65C6817386__CCTOR_OFFSET UNITYSDK_OFFSET(0xE974310)
#define CLASS_2_81FA3E65C6817386__CTOR_OFFSET UNITYSDK_OFFSET(0xE974240)

inline static constexpr unsigned int Class_2_81FA3E65C6817386_TypeDefinitionIndex = 70065;

class Class_2_81FA3E65C6817386 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::Class_2_9CF591E9FCB0B5F1** StaticGet_Field_2_6()
	{
		return (::Class_2_9CF591E9FCB0B5F1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_81FA3E65C6817386_TypeDefinitionIndex)->GetStaticField(0x3AFD0);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_81FA3E65C6817386_TypeDefinitionIndex)->GetStaticField(0xDE60);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_9CF591E9FCB0B5F1*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386__CCTOR_OFFSET))();
	}

	::System::Void Method_2_DE7E67C6E4A905B8(::Enum_3_7609C87F8335DE37_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7609C87F8335DE37_7))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_DE7E67C6E4A905B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_C50A2293958CA940_OFFSET))(this, a1);
	}

	::Class_2_9CF591E9FCB0B5F1* Method_2_20DD494EA28B5C97(::Enum_3_7609C87F8335DE37_7 a1)
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)(::PVOID, ::Enum_3_7609C87F8335DE37_7))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_20DD494EA28B5C97_OFFSET))(this, a1);
	}

	static ::Class_2_9CF591E9FCB0B5F1* Method_2_6242B2526D287466()
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_6242B2526D287466_OFFSET))();
	}

	::Class_2_9CF591E9FCB0B5F1* Method_2_81EE0877B1D6FCC0()
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_81EE0877B1D6FCC0_OFFSET))(this);
	}

	::System::Void Method_2_04B30B0DB9B6EC9B(::Enum_3_7609C87F8335DE37_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7609C87F8335DE37_7))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_04B30B0DB9B6EC9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F30B868D748FA16B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_81FA3E65C6817386_METHOD_2_F30B868D748FA16B_OFFSET))(this, a1);
	}
};
