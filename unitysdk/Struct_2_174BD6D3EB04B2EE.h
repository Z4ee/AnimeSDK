#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D9CF89F354D176D.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_174BD6D3EB04B2EE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7AEFC0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_015B11A47D4A09F6_OFFSET UNITYSDK_OFFSET(0x7AF410)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_18F33F45519DAF5C_OFFSET UNITYSDK_OFFSET(0x7AF420)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_32F5E8B0F86B286F_1_OFFSET UNITYSDK_OFFSET(0x7AF2F0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_32F5E8B0F86B286F_OFFSET UNITYSDK_OFFSET(0x7AF1D0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7AF4C0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x7AF360)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7AF110)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A3905E3CDA25E403_1_OFFSET UNITYSDK_OFFSET(0x12506B80)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A3905E3CDA25E403_OFFSET UNITYSDK_OFFSET(0x125065F0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A4809B95D76424A4_1_OFFSET UNITYSDK_OFFSET(0x7AF430)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A4809B95D76424A4_OFFSET UNITYSDK_OFFSET(0x7AF240)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x7AF1C0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_B0B3AB2A4A132FBE_OFFSET UNITYSDK_OFFSET(0x7AF1B0)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_CB98445258E28113_OFFSET UNITYSDK_OFFSET(0x7AF550)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7AF560)
#define STRUCT_2_174BD6D3EB04B2EE_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x7AF2D0)
#define STRUCT_2_174BD6D3EB04B2EE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7AF090)
#define STRUCT_2_174BD6D3EB04B2EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12505780)
#define STRUCT_2_174BD6D3EB04B2EE__CTOR_OFFSET UNITYSDK_OFFSET(0x7AF080)

inline static constexpr unsigned int Struct_2_174BD6D3EB04B2EE_TypeDefinitionIndex = 80531;

struct alignas(8) Struct_2_174BD6D3EB04B2EE
{
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_174BD6D3EB04B2EE_TypeDefinitionIndex)->GetStaticField(0x2EB00);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_2_7()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_174BD6D3EB04B2EE_TypeDefinitionIndex)->GetStaticField(0x2EB08);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_174BD6D3EB04B2EE_TypeDefinitionIndex)->GetStaticField(0x2EB10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_4D9CF89F354D176D>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_4D9CF89F354D176D>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_174BD6D3EB04B2EE_TypeDefinitionIndex)->GetStaticField(0x2EB18);
	}
	static ::Struct_2_174BD6D3EB04B2EE* StaticGet_Field_2_2()
	{
		return (::Struct_2_174BD6D3EB04B2EE*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_174BD6D3EB04B2EE_TypeDefinitionIndex)->GetStaticField(0x2EB20);
	}
	::System::String* Field_2_5; // 0x10
	::System::String* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_11; // 0x18
	::System::Int32 Field_2_10; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_174BD6D3EB04B2EE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_B0B3AB2A4A132FBE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_B0B3AB2A4A132FBE_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_32F5E8B0F86B286F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_32F5E8B0F86B286F_OFFSET))(this);
	}

	::System::Boolean Method_2_A4809B95D76424A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A4809B95D76424A4_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_32F5E8B0F86B286F_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_32F5E8B0F86B286F_1_OFFSET))(this);
	}

	::Struct_2_174BD6D3EB04B2EE Method_2_87411ABA28C869BA()
	{
		return ((::Struct_2_174BD6D3EB04B2EE(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_87411ABA28C869BA_OFFSET))(this);
	}

	static ::System::Boolean Method_2_A3905E3CDA25E403(::Struct_2_174BD6D3EB04B2EE a1, ::Struct_2_174BD6D3EB04B2EE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE, ::Struct_2_174BD6D3EB04B2EE))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A3905E3CDA25E403_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_015B11A47D4A09F6(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_015B11A47D4A09F6_OFFSET))(this, a1);
	}

	::Enum_3_4D9CF89F354D176D Method_2_18F33F45519DAF5C()
	{
		return ((::Enum_3_4D9CF89F354D176D(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_18F33F45519DAF5C_OFFSET))(this);
	}

	::System::Boolean Method_2_A4809B95D76424A4_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A4809B95D76424A4_1_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_2_CB98445258E28113()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_CB98445258E28113_OFFSET))(this);
	}

	static ::System::Boolean Method_2_A3905E3CDA25E403_1(::Struct_2_174BD6D3EB04B2EE a1, ::Struct_2_174BD6D3EB04B2EE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_174BD6D3EB04B2EE, ::Struct_2_174BD6D3EB04B2EE))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_A3905E3CDA25E403_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174BD6D3EB04B2EE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
