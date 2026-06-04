#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_110;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_105_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7FC100)
#define CLASS_1_455008579EB95638_105_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7FBCD0)
#define CLASS_1_455008579EB95638_105_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7FBE20)
#define CLASS_1_455008579EB95638_105_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7FBD30)
#define CLASS_1_455008579EB95638_105_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7FBED0)
#define CLASS_1_455008579EB95638_105_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7FC2D0)
#define CLASS_1_455008579EB95638_105_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7FC230)
#define CLASS_1_455008579EB95638_105_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7FBD10)
#define CLASS_1_455008579EB95638_105_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7FBBC0)
#define CLASS_1_455008579EB95638_105_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A7FBD00)
#define CLASS_1_455008579EB95638_105_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7FBD20)
#define CLASS_1_455008579EB95638_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7FBBF0)
#define CLASS_1_455008579EB95638_105_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7FBFC0)
#define CLASS_1_455008579EB95638_105_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7FC020)
#define CLASS_1_455008579EB95638_105__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7FC490)
#define CLASS_1_455008579EB95638_105__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7FBC40)
#define CLASS_1_455008579EB95638_105__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FBC00)

inline static constexpr unsigned int Class_1_455008579EB95638_105_TypeDefinitionIndex = 32704;

class Class_1_455008579EB95638_105 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_110*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_110*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_105_TypeDefinitionIndex)->GetStaticField(0x4FC30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_105*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_105*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_105_TypeDefinitionIndex)->GetStaticField(0x4FC38);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_110*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_105*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_105*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_105*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_105* Clone()
	{
		return ((::Class_1_455008579EB95638_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_110*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_110*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_105* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_105*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_105*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_105_MERGEFROM_1_OFFSET))(this, a1);
	}
};
