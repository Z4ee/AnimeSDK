#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_60_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1826A6C0)
#define CLASS_1_E7C4009BCC22497A_60_CLONE_OFFSET UNITYSDK_OFFSET(0x1826A2F0)
#define CLASS_1_E7C4009BCC22497A_60_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1826A410)
#define CLASS_1_E7C4009BCC22497A_60_EQUALS_OFFSET UNITYSDK_OFFSET(0x1826A330)
#define CLASS_1_E7C4009BCC22497A_60_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1826A4C0)
#define CLASS_1_E7C4009BCC22497A_60_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1826A800)
#define CLASS_1_E7C4009BCC22497A_60_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1826A760)
#define CLASS_1_E7C4009BCC22497A_60_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1826A320)
#define CLASS_1_E7C4009BCC22497A_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1826A1E0)
#define CLASS_1_E7C4009BCC22497A_60_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1826A5B0)
#define CLASS_1_E7C4009BCC22497A_60_WRITETO_OFFSET UNITYSDK_OFFSET(0x1826A610)
#define CLASS_1_E7C4009BCC22497A_60__CCTOR_OFFSET UNITYSDK_OFFSET(0x1826A8E0)
#define CLASS_1_E7C4009BCC22497A_60__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1826A240)
#define CLASS_1_E7C4009BCC22497A_60__CTOR_OFFSET UNITYSDK_OFFSET(0x1826A1F0)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_60_TypeDefinitionIndex = 25917;

class Class_1_E7C4009BCC22497A_60 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DCE302F7FD05DE84_3*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DCE302F7FD05DE84_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_60_TypeDefinitionIndex)->GetStaticField(0x18AA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84_3*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_60*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_60* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_60* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_60*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_60*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_60_MERGEFROM_1_OFFSET))(this, a1);
	}
};
