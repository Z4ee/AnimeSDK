#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D;
class Class_1_DDB796240B07BA45;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Net::Http { class HttpMethod; }

#define CLASS_1_AC6C63F15E9794D3_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x11A49930)
#define CLASS_1_AC6C63F15E9794D3_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x11A49970)
#define CLASS_1_AC6C63F15E9794D3_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x11A49940)
#define CLASS_1_AC6C63F15E9794D3_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x11A49950)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_00A48E000884330B_OFFSET UNITYSDK_OFFSET(0x11A498C0)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_02A7A18C0C862CD7_1_OFFSET UNITYSDK_OFFSET(0x11A492A0)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_02A7A18C0C862CD7_OFFSET UNITYSDK_OFFSET(0x11A49990)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_0C8E1C5820BF9E87_OFFSET UNITYSDK_OFFSET(0x11A48880)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_17864F9591822FEE_OFFSET UNITYSDK_OFFSET(0x11A49750)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_207EA20593A0EF87_OFFSET UNITYSDK_OFFSET(0x11A493A0)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_6D6A531BA6C37990_OFFSET UNITYSDK_OFFSET(0x11A48CA0)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_8F78A654C110A71C_OFFSET UNITYSDK_OFFSET(0x11A481E0)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_8FB5CCA5590BD2D8_OFFSET UNITYSDK_OFFSET(0x11A48AE0)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_90193073F6F9E578_1_OFFSET UNITYSDK_OFFSET(0x11A49700)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_90193073F6F9E578_OFFSET UNITYSDK_OFFSET(0x11A49350)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_98CC7ADCA19039D6_OFFSET UNITYSDK_OFFSET(0x11A48B80)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_BD5D75BF46556740_OFFSET UNITYSDK_OFFSET(0x11A49070)
#define CLASS_1_AC6C63F15E9794D3_METHOD_1_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x11A489C0)
#define CLASS_1_AC6C63F15E9794D3_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x11A49980)
#define CLASS_1_AC6C63F15E9794D3_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x11A49960)
#define CLASS_1_AC6C63F15E9794D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A49A40)
#define CLASS_1_AC6C63F15E9794D3__CTOR_OFFSET UNITYSDK_OFFSET(0x11A48300)

inline static constexpr unsigned int Class_1_AC6C63F15E9794D3_TypeDefinitionIndex = 63920;

class Class_1_AC6C63F15E9794D3 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC6C63F15E9794D3_TypeDefinitionIndex)->GetStaticField(0x51B30);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC6C63F15E9794D3_TypeDefinitionIndex)->GetStaticField(0x51B38);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x10
	::System::Net::Http::HttpMethod* _Method_k__BackingField; // 0x18
	::System::String* _BaseUrl_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x30
	::System::String* _ContentType_k__BackingField; // 0x38
	::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::Net::Http::HttpMethod* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3__CCTOR_OFFSET))();
	}

	static ::Class_1_AC6C63F15E9794D3* Method_1_8F78A654C110A71C(::System::String* a1)
	{
		return ((::Class_1_AC6C63F15E9794D3*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_8F78A654C110A71C_OFFSET))(a1);
	}

	static ::Class_1_AC6C63F15E9794D3* Method_1_0C8E1C5820BF9E87(::System::String* a1, ::System::Object* a2)
	{
		return ((::Class_1_AC6C63F15E9794D3*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_0C8E1C5820BF9E87_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8FB5CCA5590BD2D8(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_8FB5CCA5590BD2D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_98CC7ADCA19039D6(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_98CC7ADCA19039D6_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* Method_1_6D6A531BA6C37990(::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_6D6A531BA6C37990_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* Method_1_BD5D75BF46556740(::System::UInt32 a1, ::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::System::UInt32, ::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_BD5D75BF46556740_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::String* Method_1_90193073F6F9E578()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_90193073F6F9E578_OFFSET))(this);
	}

	::System::String* Method_1_90193073F6F9E578_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_90193073F6F9E578_1_OFFSET))(this);
	}

	::System::Void Method_1_17864F9591822FEE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_17864F9591822FEE_OFFSET))(this, a1);
	}

	::System::String* Method_1_207EA20593A0EF87(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_207EA20593A0EF87_OFFSET))(this, a1);
	}

	::System::String* get_BaseUrl()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_GET_BASEURL_OFFSET))(this);
	}

	::System::Net::Http::HttpMethod* get_Method()
	{
		return ((::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_GET_METHOD_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_RawBody()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_GET_RAWBODY_OFFSET))(this);
	}

	::System::Void set_RawBody(::Il2CppArray<::System::Byte>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_SET_RAWBODY_OFFSET))(this, value);
	}

	::System::String* get_ContentType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_SET_CONTENTTYPE_OFFSET))(this, value);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* Method_1_02A7A18C0C862CD7()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_02A7A18C0C862CD7_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* Method_1_02A7A18C0C862CD7_1()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_02A7A18C0C862CD7_1_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_00A48E000884330B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6C63F15E9794D3_METHOD_1_00A48E000884330B_OFFSET))(this);
	}
};
