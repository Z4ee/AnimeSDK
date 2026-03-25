#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_FB32A97FDD52516D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182D7B10)
#define CLASS_1_FB32A97FDD52516D_CLONE_OFFSET UNITYSDK_OFFSET(0x182D7740)
#define CLASS_1_FB32A97FDD52516D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182D7860)
#define CLASS_1_FB32A97FDD52516D_EQUALS_OFFSET UNITYSDK_OFFSET(0x182D7780)
#define CLASS_1_FB32A97FDD52516D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182D7910)
#define CLASS_1_FB32A97FDD52516D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182D7C50)
#define CLASS_1_FB32A97FDD52516D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182D7BB0)
#define CLASS_1_FB32A97FDD52516D_METHOD_1_9EEA1356C1B86BA8_OFFSET UNITYSDK_OFFSET(0x182D7770)
#define CLASS_1_FB32A97FDD52516D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182D7630)
#define CLASS_1_FB32A97FDD52516D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182D7A00)
#define CLASS_1_FB32A97FDD52516D_WRITETO_OFFSET UNITYSDK_OFFSET(0x182D7A60)
#define CLASS_1_FB32A97FDD52516D__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D7D30)
#define CLASS_1_FB32A97FDD52516D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182D7690)
#define CLASS_1_FB32A97FDD52516D__CTOR_OFFSET UNITYSDK_OFFSET(0x182D7640)

inline static constexpr unsigned int Class_1_FB32A97FDD52516D_TypeDefinitionIndex = 25569;

class Class_1_FB32A97FDD52516D : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB32A97FDD52516D_TypeDefinitionIndex)->GetStaticField(0x30B50);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FB32A97FDD52516D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB32A97FDD52516D*))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FB32A97FDD52516D* Clone()
	{
		return ((::Class_1_FB32A97FDD52516D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* Method_1_9EEA1356C1B86BA8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_METHOD_1_9EEA1356C1B86BA8_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FB32A97FDD52516D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB32A97FDD52516D*))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FB32A97FDD52516D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB32A97FDD52516D*))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB32A97FDD52516D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
