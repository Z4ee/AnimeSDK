#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_15;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182634C0)
#define CLASS_1_5FEFAED860528596_25_CLONE_OFFSET UNITYSDK_OFFSET(0x18263090)
#define CLASS_1_5FEFAED860528596_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182631E0)
#define CLASS_1_5FEFAED860528596_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x182630F0)
#define CLASS_1_5FEFAED860528596_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18263290)
#define CLASS_1_5FEFAED860528596_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18263690)
#define CLASS_1_5FEFAED860528596_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182635F0)
#define CLASS_1_5FEFAED860528596_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182630D0)
#define CLASS_1_5FEFAED860528596_25_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x182630C0)
#define CLASS_1_5FEFAED860528596_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182630E0)
#define CLASS_1_5FEFAED860528596_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18262F70)
#define CLASS_1_5FEFAED860528596_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18263380)
#define CLASS_1_5FEFAED860528596_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x182633E0)
#define CLASS_1_5FEFAED860528596_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x18263770)
#define CLASS_1_5FEFAED860528596_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18262FD0)
#define CLASS_1_5FEFAED860528596_25__CTOR_OFFSET UNITYSDK_OFFSET(0x18262F80)

inline static constexpr unsigned int Class_1_5FEFAED860528596_25_TypeDefinitionIndex = 24126;

class Class_1_5FEFAED860528596_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_15*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_25_TypeDefinitionIndex)->GetStaticField(0x18050);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_15*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_25*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_25* Clone()
	{
		return ((::Class_1_5FEFAED860528596_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_15*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_25*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_25*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
