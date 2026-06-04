#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_049EA20829C3E01B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2752BA61657CA7F7_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A48BF80)
#define CLASS_1_2752BA61657CA7F7_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A48BC80)
#define CLASS_1_2752BA61657CA7F7_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A48BDD0)
#define CLASS_1_2752BA61657CA7F7_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A48BD20)
#define CLASS_1_2752BA61657CA7F7_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A48BE70)
#define CLASS_1_2752BA61657CA7F7_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A48C050)
#define CLASS_1_2752BA61657CA7F7_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A48BFE0)
#define CLASS_1_2752BA61657CA7F7_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A48BD00)
#define CLASS_1_2752BA61657CA7F7_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A48BBC0)
#define CLASS_1_2752BA61657CA7F7_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A48BD10)
#define CLASS_1_2752BA61657CA7F7_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A48BBF0)
#define CLASS_1_2752BA61657CA7F7_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A48BEC0)
#define CLASS_1_2752BA61657CA7F7_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A48BF20)
#define CLASS_1_2752BA61657CA7F7_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A48C1D0)
#define CLASS_1_2752BA61657CA7F7_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A48BC10)
#define CLASS_1_2752BA61657CA7F7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48BC00)

inline static constexpr unsigned int Class_1_2752BA61657CA7F7_2_TypeDefinitionIndex = 25853;

class Class_1_2752BA61657CA7F7_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2752BA61657CA7F7_2_TypeDefinitionIndex)->GetStaticField(0x20A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Class_1_049EA20829C3E01B* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2752BA61657CA7F7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_2*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7_2* Clone()
	{
		return ((::Class_1_2752BA61657CA7F7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_CLONE_OFFSET))(this);
	}

	::Class_1_049EA20829C3E01B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_049EA20829C3E01B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_049EA20829C3E01B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2752BA61657CA7F7_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2752BA61657CA7F7_2*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2752BA61657CA7F7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_2*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
