#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_66C869DF1F46CC10_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C245E0)
#define CLASS_1_5FEFAED860528596_75_CLONE_OFFSET UNITYSDK_OFFSET(0x17C241C0)
#define CLASS_1_5FEFAED860528596_75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C24310)
#define CLASS_1_5FEFAED860528596_75_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C24220)
#define CLASS_1_5FEFAED860528596_75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C243C0)
#define CLASS_1_5FEFAED860528596_75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C247B0)
#define CLASS_1_5FEFAED860528596_75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C24710)
#define CLASS_1_5FEFAED860528596_75_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C24200)
#define CLASS_1_5FEFAED860528596_75_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C241F0)
#define CLASS_1_5FEFAED860528596_75_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C24210)
#define CLASS_1_5FEFAED860528596_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C240E0)
#define CLASS_1_5FEFAED860528596_75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C244B0)
#define CLASS_1_5FEFAED860528596_75_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C24510)
#define CLASS_1_5FEFAED860528596_75__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C24870)
#define CLASS_1_5FEFAED860528596_75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C24130)
#define CLASS_1_5FEFAED860528596_75__CTOR_OFFSET UNITYSDK_OFFSET(0x17C240F0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_75_TypeDefinitionIndex = 26168;

class Class_1_5FEFAED860528596_75 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_66C869DF1F46CC10_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_66C869DF1F46CC10_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_75_TypeDefinitionIndex)->GetStaticField(0x36F40);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_66C869DF1F46CC10_2*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_75*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_75* Clone()
	{
		return ((::Class_1_5FEFAED860528596_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_66C869DF1F46CC10_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_66C869DF1F46CC10_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_75*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_75*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_75_MERGEFROM_1_OFFSET))(this, a1);
	}
};
