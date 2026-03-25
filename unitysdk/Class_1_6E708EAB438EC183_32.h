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

#define CLASS_1_6E708EAB438EC183_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181B4150)
#define CLASS_1_6E708EAB438EC183_32_CLONE_OFFSET UNITYSDK_OFFSET(0x181B3D80)
#define CLASS_1_6E708EAB438EC183_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181B3EA0)
#define CLASS_1_6E708EAB438EC183_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x181B3DE0)
#define CLASS_1_6E708EAB438EC183_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181B3F30)
#define CLASS_1_6E708EAB438EC183_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181B4240)
#define CLASS_1_6E708EAB438EC183_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181B41F0)
#define CLASS_1_6E708EAB438EC183_32_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x181B3DD0)
#define CLASS_1_6E708EAB438EC183_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181B3C90)
#define CLASS_1_6E708EAB438EC183_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181B4040)
#define CLASS_1_6E708EAB438EC183_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x181B40A0)
#define CLASS_1_6E708EAB438EC183_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x181B4310)
#define CLASS_1_6E708EAB438EC183_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181B3CF0)
#define CLASS_1_6E708EAB438EC183_32__CTOR_OFFSET UNITYSDK_OFFSET(0x181B3CA0)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_32_TypeDefinitionIndex = 24730;

class Class_1_6E708EAB438EC183_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_32_TypeDefinitionIndex)->GetStaticField(0x2CFC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_32*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_32* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_32*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_32*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
