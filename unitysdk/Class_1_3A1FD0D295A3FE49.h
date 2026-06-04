#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A1FD0D295A3FE49_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3A1FD0D295A3FE49_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A421D00)
#define CLASS_1_3A1FD0D295A3FE49_CLONE_OFFSET UNITYSDK_OFFSET(0x1A421940)
#define CLASS_1_3A1FD0D295A3FE49_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A421AD0)
#define CLASS_1_3A1FD0D295A3FE49_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A421A20)
#define CLASS_1_3A1FD0D295A3FE49_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A421B80)
#define CLASS_1_3A1FD0D295A3FE49_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A421ED0)
#define CLASS_1_3A1FD0D295A3FE49_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A421E10)
#define CLASS_1_3A1FD0D295A3FE49_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A4219E0)
#define CLASS_1_3A1FD0D295A3FE49_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A421860)
#define CLASS_1_3A1FD0D295A3FE49_METHOD_1_846EDF57F2A478CA_OFFSET UNITYSDK_OFFSET(0x1A421A00)
#define CLASS_1_3A1FD0D295A3FE49_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A4219F0)
#define CLASS_1_3A1FD0D295A3FE49_METHOD_1_CBA8E20523A95EF1_OFFSET UNITYSDK_OFFSET(0x1A421A10)
#define CLASS_1_3A1FD0D295A3FE49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A421890)
#define CLASS_1_3A1FD0D295A3FE49_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A421C10)
#define CLASS_1_3A1FD0D295A3FE49_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A421C70)
#define CLASS_1_3A1FD0D295A3FE49__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A422060)
#define CLASS_1_3A1FD0D295A3FE49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4218B0)
#define CLASS_1_3A1FD0D295A3FE49__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4218A0)

inline static constexpr unsigned int Class_1_3A1FD0D295A3FE49_TypeDefinitionIndex = 30111;

class Class_1_3A1FD0D295A3FE49 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3A1FD0D295A3FE49*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3A1FD0D295A3FE49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A1FD0D295A3FE49_TypeDefinitionIndex)->GetStaticField(0x64530);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_C9E417278351157F* Field_1_4; // 0x18
	::Class_1_3A1FD0D295A3FE49_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A1FD0D295A3FE49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A1FD0D295A3FE49*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3A1FD0D295A3FE49*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3A1FD0D295A3FE49*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3A1FD0D295A3FE49* Clone()
	{
		return ((::Class_1_3A1FD0D295A3FE49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_CLONE_OFFSET))(this);
	}

	::Class_1_C9E417278351157F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9E417278351157F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9E417278351157F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_3A1FD0D295A3FE49_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901 Method_1_846EDF57F2A478CA()
	{
		return ((::Class_1_3A1FD0D295A3FE49_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_METHOD_1_846EDF57F2A478CA_OFFSET))(this);
	}

	::System::Void Method_1_CBA8E20523A95EF1(::Class_1_3A1FD0D295A3FE49_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A1FD0D295A3FE49_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_METHOD_1_CBA8E20523A95EF1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3A1FD0D295A3FE49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A1FD0D295A3FE49*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3A1FD0D295A3FE49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A1FD0D295A3FE49*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3A1FD0D295A3FE49_MERGEFROM_1_OFFSET))(this, a1);
	}
};
