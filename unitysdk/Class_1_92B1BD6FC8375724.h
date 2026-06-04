#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Net::Http { class HttpMethod; }

#define CLASS_1_92B1BD6FC8375724_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x13903130)
#define CLASS_1_92B1BD6FC8375724_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x13903170)
#define CLASS_1_92B1BD6FC8375724_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x13903140)
#define CLASS_1_92B1BD6FC8375724_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x13903150)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_00A48E000884330B_OFFSET UNITYSDK_OFFSET(0x139030C0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_02A7A18C0C862CD7_1_OFFSET UNITYSDK_OFFSET(0x13902AA0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_02A7A18C0C862CD7_OFFSET UNITYSDK_OFFSET(0x13903190)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_17864F9591822FEE_OFFSET UNITYSDK_OFFSET(0x13902F50)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_207EA20593A0EF87_OFFSET UNITYSDK_OFFSET(0x13902BA0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_458F6A2A308822BF_OFFSET UNITYSDK_OFFSET(0x13902310)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_47CF6821008A625F_OFFSET UNITYSDK_OFFSET(0x139019D0)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_792138C8C3A68092_OFFSET UNITYSDK_OFFSET(0x13902040)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_82E7A38A56238BB4_OFFSET UNITYSDK_OFFSET(0x13902430)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_8FB5CCA5590BD2D8_OFFSET UNITYSDK_OFFSET(0x13902270)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_90193073F6F9E578_1_OFFSET UNITYSDK_OFFSET(0x13902F00)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_90193073F6F9E578_OFFSET UNITYSDK_OFFSET(0x13902B50)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_BD5D75BF46556740_OFFSET UNITYSDK_OFFSET(0x13902860)
#define CLASS_1_92B1BD6FC8375724_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x13902110)
#define CLASS_1_92B1BD6FC8375724_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x13903180)
#define CLASS_1_92B1BD6FC8375724_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x13903160)
#define CLASS_1_92B1BD6FC8375724__CCTOR_OFFSET UNITYSDK_OFFSET(0x13903240)
#define CLASS_1_92B1BD6FC8375724__CTOR_OFFSET UNITYSDK_OFFSET(0x13901A70)

inline static constexpr unsigned int Class_1_92B1BD6FC8375724_TypeDefinitionIndex = 64841;

class Class_1_92B1BD6FC8375724 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724_TypeDefinitionIndex)->GetStaticField(0x64420);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724_TypeDefinitionIndex)->GetStaticField(0x64428);
	}
	::System::String* _ContentType_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x18
	::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_5; // 0x28
	::System::Net::Http::HttpMethod* _Method_k__BackingField; // 0x30
	::System::String* _BaseUrl_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_8; // 0x40

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

	::System::Void Method_1_458F6A2A308822BF(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_458F6A2A308822BF_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* Method_1_82E7A38A56238BB4(::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_82E7A38A56238BB4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* Method_1_BD5D75BF46556740(::System::UInt32 a1, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::System::UInt32, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_BD5D75BF46556740_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::String* Method_1_90193073F6F9E578()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_90193073F6F9E578_OFFSET))(this);
	}

	::System::String* Method_1_90193073F6F9E578_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_90193073F6F9E578_1_OFFSET))(this);
	}

	::System::Void Method_1_17864F9591822FEE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_17864F9591822FEE_OFFSET))(this, a1);
	}

	::System::String* Method_1_207EA20593A0EF87(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_METHOD_1_207EA20593A0EF87_OFFSET))(this, a1);
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

	::System::Void set_RawBody(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_SET_RAWBODY_OFFSET))(this, a1);
	}

	::System::String* get_ContentType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_SET_CONTENTTYPE_OFFSET))(this, a1);
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
