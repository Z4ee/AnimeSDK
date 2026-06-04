#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6058198629C78B72;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_263DEE8A7972A679_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A223830)
#define CLASS_1_263DEE8A7972A679_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2232B0)
#define CLASS_1_263DEE8A7972A679_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2233A0)
#define CLASS_1_263DEE8A7972A679_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A223370)
#define CLASS_1_263DEE8A7972A679_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2234B0)
#define CLASS_1_263DEE8A7972A679_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A223AE0)
#define CLASS_1_263DEE8A7972A679_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A223A20)
#define CLASS_1_263DEE8A7972A679_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A223350)
#define CLASS_1_263DEE8A7972A679_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1A2232E0)
#define CLASS_1_263DEE8A7972A679_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A223100)
#define CLASS_1_263DEE8A7972A679_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A223340)
#define CLASS_1_263DEE8A7972A679_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A223360)
#define CLASS_1_263DEE8A7972A679_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1A2232F0)
#define CLASS_1_263DEE8A7972A679_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A223130)
#define CLASS_1_263DEE8A7972A679_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A223680)
#define CLASS_1_263DEE8A7972A679_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2236E0)
#define CLASS_1_263DEE8A7972A679__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A223CE0)
#define CLASS_1_263DEE8A7972A679__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2231B0)
#define CLASS_1_263DEE8A7972A679__CTOR_OFFSET UNITYSDK_OFFSET(0x1A223140)

inline static constexpr unsigned int Class_1_263DEE8A7972A679_TypeDefinitionIndex = 30207;

class Class_1_263DEE8A7972A679 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_263DEE8A7972A679*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_263DEE8A7972A679*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_263DEE8A7972A679_TypeDefinitionIndex)->GetStaticField(0x11E60);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6058198629C78B72*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6058198629C78B72*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_263DEE8A7972A679_TypeDefinitionIndex)->GetStaticField(0x11E68);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6058198629C78B72*>* Field_1_5; // 0x10
	::Google::Protobuf::ByteString* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_263DEE8A7972A679* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_263DEE8A7972A679*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_263DEE8A7972A679*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_263DEE8A7972A679*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_263DEE8A7972A679* Clone()
	{
		return ((::Class_1_263DEE8A7972A679*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6058198629C78B72*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6058198629C78B72*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_263DEE8A7972A679* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_263DEE8A7972A679*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_263DEE8A7972A679* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_263DEE8A7972A679*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_263DEE8A7972A679_MERGEFROM_1_OFFSET))(this, a1);
	}
};
