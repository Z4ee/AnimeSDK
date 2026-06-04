#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_38;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4ED2C6C8F36D9AD2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A513710)
#define CLASS_1_4ED2C6C8F36D9AD2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A513270)
#define CLASS_1_4ED2C6C8F36D9AD2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A513360)
#define CLASS_1_4ED2C6C8F36D9AD2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A513330)
#define CLASS_1_4ED2C6C8F36D9AD2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A513440)
#define CLASS_1_4ED2C6C8F36D9AD2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A513AD0)
#define CLASS_1_4ED2C6C8F36D9AD2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A513A00)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A5132D0)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A5132F0)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5132A0)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1A513320)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A513140)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A5132C0)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A5132E0)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A513300)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A5132B0)
#define CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1A513310)
#define CLASS_1_4ED2C6C8F36D9AD2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A513170)
#define CLASS_1_4ED2C6C8F36D9AD2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A513550)
#define CLASS_1_4ED2C6C8F36D9AD2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5135B0)
#define CLASS_1_4ED2C6C8F36D9AD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A513BD0)
#define CLASS_1_4ED2C6C8F36D9AD2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5131C0)
#define CLASS_1_4ED2C6C8F36D9AD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A513180)

inline static constexpr unsigned int Class_1_4ED2C6C8F36D9AD2_TypeDefinitionIndex = 30175;

class Class_1_4ED2C6C8F36D9AD2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4ED2C6C8F36D9AD2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4ED2C6C8F36D9AD2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ED2C6C8F36D9AD2_TypeDefinitionIndex)->GetStaticField(0xD510);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_38*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_38*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ED2C6C8F36D9AD2_TypeDefinitionIndex)->GetStaticField(0xD518);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_38*>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::UInt64 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4ED2C6C8F36D9AD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4ED2C6C8F36D9AD2*))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4ED2C6C8F36D9AD2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4ED2C6C8F36D9AD2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4ED2C6C8F36D9AD2* Clone()
	{
		return ((::Class_1_4ED2C6C8F36D9AD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_38*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_38*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4ED2C6C8F36D9AD2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4ED2C6C8F36D9AD2*))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4ED2C6C8F36D9AD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4ED2C6C8F36D9AD2*))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4ED2C6C8F36D9AD2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
