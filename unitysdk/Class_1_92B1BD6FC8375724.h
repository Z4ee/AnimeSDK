#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
class Class_1_DDB796240B07BA45;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Net::Http { class HttpMethod; }

#define CLASS_1_92B1BD6FC8375724_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x1091AE50)
#define CLASS_1_92B1BD6FC8375724_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1091AE90)
#define CLASS_1_92B1BD6FC8375724_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1091AE60)
#define CLASS_1_92B1BD6FC8375724_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x1091AE70)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_00A48E000884330B_OFFSET UNITYSDK_OFFSET(0x1091ADE0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_02A7A18C0C862CD7_1_OFFSET UNITYSDK_OFFSET(0x1091A7A0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_02A7A18C0C862CD7_OFFSET UNITYSDK_OFFSET(0x1091AEB0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_17864F9591822FEE_OFFSET UNITYSDK_OFFSET(0x1091AC70)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_47CF6821008A625F_OFFSET UNITYSDK_OFFSET(0x10919760)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_6D6A531BA6C37990_OFFSET UNITYSDK_OFFSET(0x1091A1A0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_792138C8C3A68092_OFFSET UNITYSDK_OFFSET(0x10919DB0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_8FB5CCA5590BD2D8_OFFSET UNITYSDK_OFFSET(0x10919FE0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_98CC7ADCA19039D6_OFFSET UNITYSDK_OFFSET(0x1091A080)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_BD5D75BF46556740_OFFSET UNITYSDK_OFFSET(0x1091A570)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_BD8BD1FF69385F21_1_OFFSET UNITYSDK_OFFSET(0x1091AC20)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_BD8BD1FF69385F21_OFFSET UNITYSDK_OFFSET(0x1091A850)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_BF0F06CD1DEFF0A4_OFFSET UNITYSDK_OFFSET(0x1091A8A0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x10919E80)
#define CLASS_1_92B1BD6FC8375724_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1091AEA0)
#define CLASS_1_92B1BD6FC8375724_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x1091AE80)
#define CLASS_1_92B1BD6FC8375724__CCTOR_OFFSET UNITYSDK_OFFSET(0x1091AF60)
#define CLASS_1_92B1BD6FC8375724__CTOR_OFFSET UNITYSDK_OFFSET(0x10919800)

inline static constexpr unsigned int Class_1_92B1BD6FC8375724_TypeDefinitionIndex = 56676;

class Class_1_92B1BD6FC8375724 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724_TypeDefinitionIndex)->GetStaticField(0x295C0);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724_TypeDefinitionIndex)->GetStaticField(0x295C8);
	}
	::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x10
	::System::Net::Http::HttpMethod* _Method_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x30
	::System::String* _ContentType_k__BackingField; // 0x38
	::System::String* _BaseUrl_k__BackingField; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::Net::Http::HttpMethod* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724__CCTOR_OFFSET))();
	}

	static ::Class_1_92B1BD6FC8375724* Method_1_47CF6821008A625F(::System::String* a1)
	{
		return ((::Class_1_92B1BD6FC8375724*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_47CF6821008A625F_OFFSET))(a1);
	}

	static ::Class_1_92B1BD6FC8375724* Method_1_792138C8C3A68092(::System::String* a1, ::System::Object* a2)
	{
		return ((::Class_1_92B1BD6FC8375724*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_792138C8C3A68092_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8FB5CCA5590BD2D8(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_8FB5CCA5590BD2D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_98CC7ADCA19039D6(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_98CC7ADCA19039D6_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* Method_1_6D6A531BA6C37990(::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_6D6A531BA6C37990_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* Method_1_BD5D75BF46556740(::System::UInt32 a1, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::System::UInt32, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_BD5D75BF46556740_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::String* Method_1_BD8BD1FF69385F21()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_BD8BD1FF69385F21_OFFSET))(this);
	}

	::System::String* Method_1_BD8BD1FF69385F21_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_BD8BD1FF69385F21_1_OFFSET))(this);
	}

	::System::Void Method_1_17864F9591822FEE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_17864F9591822FEE_OFFSET))(this, a1);
	}

	::System::String* Method_1_BF0F06CD1DEFF0A4(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_BF0F06CD1DEFF0A4_OFFSET))(this, a1);
	}

	::System::String* get_BaseUrl()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_GET_BASEURL_OFFSET))(this);
	}

	::System::Net::Http::HttpMethod* get_Method()
	{
		return ((::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_GET_METHOD_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_RawBody()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_GET_RAWBODY_OFFSET))(this);
	}

	::System::Void set_RawBody(::Il2CppArray<::System::Byte>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_SET_RAWBODY_OFFSET))(this, value);
	}

	::System::String* get_ContentType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_SET_CONTENTTYPE_OFFSET))(this, value);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* Method_1_02A7A18C0C862CD7()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_02A7A18C0C862CD7_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* Method_1_02A7A18C0C862CD7_1()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_02A7A18C0C862CD7_1_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_00A48E000884330B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_00A48E000884330B_OFFSET))(this);
	}
};
