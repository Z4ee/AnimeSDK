#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E8F97FD00858F980;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CA8170)
#define CLASS_1_455008579EB95638_9_CLONE_OFFSET UNITYSDK_OFFSET(0x19CA7D40)
#define CLASS_1_455008579EB95638_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CA7E90)
#define CLASS_1_455008579EB95638_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CA7DA0)
#define CLASS_1_455008579EB95638_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CA7F40)
#define CLASS_1_455008579EB95638_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CA8340)
#define CLASS_1_455008579EB95638_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CA82A0)
#define CLASS_1_455008579EB95638_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19CA7D80)
#define CLASS_1_455008579EB95638_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19CA7BF0)
#define CLASS_1_455008579EB95638_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19CA7D70)
#define CLASS_1_455008579EB95638_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19CA7D90)
#define CLASS_1_455008579EB95638_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CA7C20)
#define CLASS_1_455008579EB95638_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CA8030)
#define CLASS_1_455008579EB95638_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CA8090)
#define CLASS_1_455008579EB95638_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CA8420)
#define CLASS_1_455008579EB95638_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CA7C80)
#define CLASS_1_455008579EB95638_9__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA7C30)

inline static constexpr unsigned int Class_1_455008579EB95638_9_TypeDefinitionIndex = 24708;

class Class_1_455008579EB95638_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E8F97FD00858F980*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E8F97FD00858F980*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_9_TypeDefinitionIndex)->GetStaticField(0x643D0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_9_TypeDefinitionIndex)->GetStaticField(0x643D8);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E8F97FD00858F980*>* Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_9*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_9* Clone()
	{
		return ((::Class_1_455008579EB95638_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E8F97FD00858F980*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E8F97FD00858F980*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_9*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_9*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
