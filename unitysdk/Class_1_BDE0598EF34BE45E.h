#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4B52859374487DA3_2;
class Class_1_98A08031F550F4C1_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BDE0598EF34BE45E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19959310)
#define CLASS_1_BDE0598EF34BE45E_CLONE_OFFSET UNITYSDK_OFFSET(0x19958F00)
#define CLASS_1_BDE0598EF34BE45E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199590E0)
#define CLASS_1_BDE0598EF34BE45E_EQUALS_OFFSET UNITYSDK_OFFSET(0x19958FF0)
#define CLASS_1_BDE0598EF34BE45E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199591C0)
#define CLASS_1_BDE0598EF34BE45E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19959440)
#define CLASS_1_BDE0598EF34BE45E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199593A0)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19958FD0)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19958FB0)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19958E10)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19958FE0)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19958FC0)
#define CLASS_1_BDE0598EF34BE45E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19958E40)
#define CLASS_1_BDE0598EF34BE45E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19959220)
#define CLASS_1_BDE0598EF34BE45E_WRITETO_OFFSET UNITYSDK_OFFSET(0x19959280)
#define CLASS_1_BDE0598EF34BE45E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19959500)
#define CLASS_1_BDE0598EF34BE45E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19958E60)
#define CLASS_1_BDE0598EF34BE45E__CTOR_OFFSET UNITYSDK_OFFSET(0x19958E50)

inline static constexpr unsigned int Class_1_BDE0598EF34BE45E_TypeDefinitionIndex = 30651;

class Class_1_BDE0598EF34BE45E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDE0598EF34BE45E_TypeDefinitionIndex)->GetStaticField(0x60410);
	}
	// static const ::System::Int32 Field_1_2 = 0xCB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x384; // 0x0
	::Class_1_4B52859374487DA3_2* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_98A08031F550F4C1_6* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BDE0598EF34BE45E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BDE0598EF34BE45E* Clone()
	{
		return ((::Class_1_BDE0598EF34BE45E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_CLONE_OFFSET))(this);
	}

	::Class_1_4B52859374487DA3_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4B52859374487DA3_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4B52859374487DA3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B52859374487DA3_2*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_98A08031F550F4C1_6* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_98A08031F550F4C1_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_98A08031F550F4C1_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_6*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BDE0598EF34BE45E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BDE0598EF34BE45E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
