#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_105;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0AF80CDC1665CFBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D9B140)
#define CLASS_1_0AF80CDC1665CFBD_CLONE_OFFSET UNITYSDK_OFFSET(0x17D9AC40)
#define CLASS_1_0AF80CDC1665CFBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D9ADD0)
#define CLASS_1_0AF80CDC1665CFBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D9ACE0)
#define CLASS_1_0AF80CDC1665CFBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D9AEB0)
#define CLASS_1_0AF80CDC1665CFBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D9B3E0)
#define CLASS_1_0AF80CDC1665CFBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D9B2E0)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D9ACB0)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D9AC90)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D9AC70)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17D9ACD0)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D9ACC0)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D9ACA0)
#define CLASS_1_0AF80CDC1665CFBD_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D9AC80)
#define CLASS_1_0AF80CDC1665CFBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D9AB20)
#define CLASS_1_0AF80CDC1665CFBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D9AFE0)
#define CLASS_1_0AF80CDC1665CFBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D9B040)
#define CLASS_1_0AF80CDC1665CFBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D9B550)
#define CLASS_1_0AF80CDC1665CFBD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D9AB80)
#define CLASS_1_0AF80CDC1665CFBD__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9AB30)

inline static constexpr unsigned int Class_1_0AF80CDC1665CFBD_TypeDefinitionIndex = 27470;

class Class_1_0AF80CDC1665CFBD : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AF80CDC1665CFBD_TypeDefinitionIndex)->GetStaticField(0x17BE0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Class_1_5FEFAED860528596_105* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0AF80CDC1665CFBD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AF80CDC1665CFBD*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0AF80CDC1665CFBD* Clone()
	{
		return ((::Class_1_0AF80CDC1665CFBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_CLONE_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_105* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FEFAED860528596_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FEFAED860528596_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_105*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0AF80CDC1665CFBD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AF80CDC1665CFBD*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0AF80CDC1665CFBD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AF80CDC1665CFBD*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0AF80CDC1665CFBD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
