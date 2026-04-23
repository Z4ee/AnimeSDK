#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_49F04DC1BC0F5D98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19898630)
#define CLASS_1_49F04DC1BC0F5D98_CLONE_OFFSET UNITYSDK_OFFSET(0x19898330)
#define CLASS_1_49F04DC1BC0F5D98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19898480)
#define CLASS_1_49F04DC1BC0F5D98_EQUALS_OFFSET UNITYSDK_OFFSET(0x198983D0)
#define CLASS_1_49F04DC1BC0F5D98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19898520)
#define CLASS_1_49F04DC1BC0F5D98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19898700)
#define CLASS_1_49F04DC1BC0F5D98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19898690)
#define CLASS_1_49F04DC1BC0F5D98_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x198983B0)
#define CLASS_1_49F04DC1BC0F5D98_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19898270)
#define CLASS_1_49F04DC1BC0F5D98_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x198983C0)
#define CLASS_1_49F04DC1BC0F5D98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198982A0)
#define CLASS_1_49F04DC1BC0F5D98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19898570)
#define CLASS_1_49F04DC1BC0F5D98_WRITETO_OFFSET UNITYSDK_OFFSET(0x198985D0)
#define CLASS_1_49F04DC1BC0F5D98__CCTOR_OFFSET UNITYSDK_OFFSET(0x19898790)
#define CLASS_1_49F04DC1BC0F5D98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198982C0)
#define CLASS_1_49F04DC1BC0F5D98__CTOR_OFFSET UNITYSDK_OFFSET(0x198982B0)

inline static constexpr unsigned int Class_1_49F04DC1BC0F5D98_TypeDefinitionIndex = 24808;

class Class_1_49F04DC1BC0F5D98 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49F04DC1BC0F5D98_TypeDefinitionIndex)->GetStaticField(0x4E7F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Class_1_C9DFE5EE7107C629_2* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_49F04DC1BC0F5D98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_49F04DC1BC0F5D98* Clone()
	{
		return ((::Class_1_49F04DC1BC0F5D98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_2*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_49F04DC1BC0F5D98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_49F04DC1BC0F5D98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
