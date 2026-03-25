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

#define CLASS_1_6E708EAB438EC183_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C967A0)
#define CLASS_1_6E708EAB438EC183_44_CLONE_OFFSET UNITYSDK_OFFSET(0x17C963D0)
#define CLASS_1_6E708EAB438EC183_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C964F0)
#define CLASS_1_6E708EAB438EC183_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C96430)
#define CLASS_1_6E708EAB438EC183_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C96580)
#define CLASS_1_6E708EAB438EC183_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C96890)
#define CLASS_1_6E708EAB438EC183_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C96840)
#define CLASS_1_6E708EAB438EC183_44_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17C96420)
#define CLASS_1_6E708EAB438EC183_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C962E0)
#define CLASS_1_6E708EAB438EC183_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C96690)
#define CLASS_1_6E708EAB438EC183_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C966F0)
#define CLASS_1_6E708EAB438EC183_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C96960)
#define CLASS_1_6E708EAB438EC183_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C96340)
#define CLASS_1_6E708EAB438EC183_44__CTOR_OFFSET UNITYSDK_OFFSET(0x17C962F0)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_44_TypeDefinitionIndex = 25057;

class Class_1_6E708EAB438EC183_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_44_TypeDefinitionIndex)->GetStaticField(0x4F80);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_44*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_44* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_44*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_44*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
