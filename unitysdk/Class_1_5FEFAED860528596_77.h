#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_73A4852E95B08DF7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_77_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18109880)
#define CLASS_1_5FEFAED860528596_77_CLONE_OFFSET UNITYSDK_OFFSET(0x18109460)
#define CLASS_1_5FEFAED860528596_77_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181095B0)
#define CLASS_1_5FEFAED860528596_77_EQUALS_OFFSET UNITYSDK_OFFSET(0x181094C0)
#define CLASS_1_5FEFAED860528596_77_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18109660)
#define CLASS_1_5FEFAED860528596_77_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18109A30)
#define CLASS_1_5FEFAED860528596_77_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18109990)
#define CLASS_1_5FEFAED860528596_77_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18109490)
#define CLASS_1_5FEFAED860528596_77_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x181094B0)
#define CLASS_1_5FEFAED860528596_77_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181094A0)
#define CLASS_1_5FEFAED860528596_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18109340)
#define CLASS_1_5FEFAED860528596_77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18109750)
#define CLASS_1_5FEFAED860528596_77_WRITETO_OFFSET UNITYSDK_OFFSET(0x181097B0)
#define CLASS_1_5FEFAED860528596_77__CCTOR_OFFSET UNITYSDK_OFFSET(0x18109B10)
#define CLASS_1_5FEFAED860528596_77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181093A0)
#define CLASS_1_5FEFAED860528596_77__CTOR_OFFSET UNITYSDK_OFFSET(0x18109350)

inline static constexpr unsigned int Class_1_5FEFAED860528596_77_TypeDefinitionIndex = 26210;

class Class_1_5FEFAED860528596_77 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_73A4852E95B08DF7*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_73A4852E95B08DF7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_77_TypeDefinitionIndex)->GetStaticField(0x37310);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_73A4852E95B08DF7*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_77*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_77* Clone()
	{
		return ((::Class_1_5FEFAED860528596_77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_73A4852E95B08DF7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_73A4852E95B08DF7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_77*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_77*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_77_MERGEFROM_1_OFFSET))(this, a1);
	}
};
