#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6E708EAB438EC183_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B6AB70)
#define CLASS_1_6E708EAB438EC183_100_CLONE_OFFSET UNITYSDK_OFFSET(0x17B6A7A0)
#define CLASS_1_6E708EAB438EC183_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B6A8C0)
#define CLASS_1_6E708EAB438EC183_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B6A800)
#define CLASS_1_6E708EAB438EC183_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B6A950)
#define CLASS_1_6E708EAB438EC183_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B6AC60)
#define CLASS_1_6E708EAB438EC183_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B6AC10)
#define CLASS_1_6E708EAB438EC183_100_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17B6A7F0)
#define CLASS_1_6E708EAB438EC183_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B6A6B0)
#define CLASS_1_6E708EAB438EC183_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B6AA60)
#define CLASS_1_6E708EAB438EC183_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B6AAC0)
#define CLASS_1_6E708EAB438EC183_100__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B6AD30)
#define CLASS_1_6E708EAB438EC183_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B6A710)
#define CLASS_1_6E708EAB438EC183_100__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6A6C0)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_100_TypeDefinitionIndex = 27109;

class Class_1_6E708EAB438EC183_100 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_100_TypeDefinitionIndex)->GetStaticField(0x2F140);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_100*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_100* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_100*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_100*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
