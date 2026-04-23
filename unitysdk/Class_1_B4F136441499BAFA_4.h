#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_24;
class Class_1_C9DFE5EE7107C629_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B4F136441499BAFA_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1952F490)
#define CLASS_1_B4F136441499BAFA_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1952F050)
#define CLASS_1_B4F136441499BAFA_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1952F270)
#define CLASS_1_B4F136441499BAFA_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1952F180)
#define CLASS_1_B4F136441499BAFA_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1952F350)
#define CLASS_1_B4F136441499BAFA_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1952F660)
#define CLASS_1_B4F136441499BAFA_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1952F520)
#define CLASS_1_B4F136441499BAFA_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1952F160)
#define CLASS_1_B4F136441499BAFA_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1952F140)
#define CLASS_1_B4F136441499BAFA_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1952EF20)
#define CLASS_1_B4F136441499BAFA_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1952F170)
#define CLASS_1_B4F136441499BAFA_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1952F150)
#define CLASS_1_B4F136441499BAFA_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1952EF50)
#define CLASS_1_B4F136441499BAFA_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1952F3B0)
#define CLASS_1_B4F136441499BAFA_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1952F410)
#define CLASS_1_B4F136441499BAFA_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1952F7A0)
#define CLASS_1_B4F136441499BAFA_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1952EF70)
#define CLASS_1_B4F136441499BAFA_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1952EF60)

inline static constexpr unsigned int Class_1_B4F136441499BAFA_4_TypeDefinitionIndex = 27095;

class Class_1_B4F136441499BAFA_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F136441499BAFA_4_TypeDefinitionIndex)->GetStaticField(0x47270);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Class_1_C9DFE5EE7107C629_12* Field_1_5; // 0x10
	::Class_1_4BC858D7C27E10ED_24* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B4F136441499BAFA_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_4*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B4F136441499BAFA_4* Clone()
	{
		return ((::Class_1_B4F136441499BAFA_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_CLONE_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_24* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4BC858D7C27E10ED_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4BC858D7C27E10ED_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_24*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_12* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B4F136441499BAFA_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B4F136441499BAFA_4*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B4F136441499BAFA_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_4*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
