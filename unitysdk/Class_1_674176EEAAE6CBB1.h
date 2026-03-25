#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BE2B761968BD3A4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_674176EEAAE6CBB1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C730B0)
#define CLASS_1_674176EEAAE6CBB1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C72C20)
#define CLASS_1_674176EEAAE6CBB1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C72DC0)
#define CLASS_1_674176EEAAE6CBB1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C72CA0)
#define CLASS_1_674176EEAAE6CBB1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C72E80)
#define CLASS_1_674176EEAAE6CBB1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C732E0)
#define CLASS_1_674176EEAAE6CBB1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C73230)
#define CLASS_1_674176EEAAE6CBB1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17C72C90)
#define CLASS_1_674176EEAAE6CBB1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C72C70)
#define CLASS_1_674176EEAAE6CBB1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17C72C80)
#define CLASS_1_674176EEAAE6CBB1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C72B30)
#define CLASS_1_674176EEAAE6CBB1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C72F80)
#define CLASS_1_674176EEAAE6CBB1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C72FE0)
#define CLASS_1_674176EEAAE6CBB1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C733C0)
#define CLASS_1_674176EEAAE6CBB1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C72B80)
#define CLASS_1_674176EEAAE6CBB1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C72B40)

inline static constexpr unsigned int Class_1_674176EEAAE6CBB1_TypeDefinitionIndex = 25095;

class Class_1_674176EEAAE6CBB1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6BE2B761968BD3A4*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6BE2B761968BD3A4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_674176EEAAE6CBB1_TypeDefinitionIndex)->GetStaticField(0x411D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6BE2B761968BD3A4*>* Field_1_3; // 0x18
	::System::UInt64 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_674176EEAAE6CBB1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_674176EEAAE6CBB1*))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_674176EEAAE6CBB1* Clone()
	{
		return ((::Class_1_674176EEAAE6CBB1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6BE2B761968BD3A4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6BE2B761968BD3A4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_674176EEAAE6CBB1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_674176EEAAE6CBB1*))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_674176EEAAE6CBB1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_674176EEAAE6CBB1*))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_674176EEAAE6CBB1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
