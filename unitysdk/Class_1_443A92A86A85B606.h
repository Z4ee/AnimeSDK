#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/System/Object.h"

class Class_1_A4E2764947F50E01;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_443A92A86A85B606_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E3F630)
#define CLASS_1_443A92A86A85B606_CLONE_OFFSET UNITYSDK_OFFSET(0x17E3F0F0)
#define CLASS_1_443A92A86A85B606_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E3F2A0)
#define CLASS_1_443A92A86A85B606_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E3F190)
#define CLASS_1_443A92A86A85B606_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E3F380)
#define CLASS_1_443A92A86A85B606_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E3F860)
#define CLASS_1_443A92A86A85B606_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E3F7B0)
#define CLASS_1_443A92A86A85B606_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E3F170)
#define CLASS_1_443A92A86A85B606_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E3F150)
#define CLASS_1_443A92A86A85B606_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E3F160)
#define CLASS_1_443A92A86A85B606_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E3F180)
#define CLASS_1_443A92A86A85B606_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E3F140)
#define CLASS_1_443A92A86A85B606_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E3EFF0)
#define CLASS_1_443A92A86A85B606_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E3F4B0)
#define CLASS_1_443A92A86A85B606_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E3F510)
#define CLASS_1_443A92A86A85B606__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E3F970)
#define CLASS_1_443A92A86A85B606__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E3F050)
#define CLASS_1_443A92A86A85B606__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3F000)

inline static constexpr unsigned int Class_1_443A92A86A85B606_TypeDefinitionIndex = 23672;

class Class_1_443A92A86A85B606 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_443A92A86A85B606_TypeDefinitionIndex)->GetStaticField(0x27A60);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Class_1_A4E2764947F50E01* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Enum_3_0A3761FE34514D6C Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_443A92A86A85B606* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_443A92A86A85B606* Clone()
	{
		return ((::Class_1_443A92A86A85B606*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A4E2764947F50E01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A4E2764947F50E01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_443A92A86A85B606* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_443A92A86A85B606*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_443A92A86A85B606* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_443A92A86A85B606_MERGEFROM_1_OFFSET))(this, a1);
	}
};
