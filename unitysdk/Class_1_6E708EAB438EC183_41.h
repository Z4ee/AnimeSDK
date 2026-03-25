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

#define CLASS_1_6E708EAB438EC183_41_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CA5620)
#define CLASS_1_6E708EAB438EC183_41_CLONE_OFFSET UNITYSDK_OFFSET(0x17CA5250)
#define CLASS_1_6E708EAB438EC183_41_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CA5370)
#define CLASS_1_6E708EAB438EC183_41_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CA52B0)
#define CLASS_1_6E708EAB438EC183_41_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CA5400)
#define CLASS_1_6E708EAB438EC183_41_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CA5710)
#define CLASS_1_6E708EAB438EC183_41_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CA56C0)
#define CLASS_1_6E708EAB438EC183_41_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17CA52A0)
#define CLASS_1_6E708EAB438EC183_41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CA5160)
#define CLASS_1_6E708EAB438EC183_41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CA5510)
#define CLASS_1_6E708EAB438EC183_41_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CA5570)
#define CLASS_1_6E708EAB438EC183_41__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CA57E0)
#define CLASS_1_6E708EAB438EC183_41__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CA51C0)
#define CLASS_1_6E708EAB438EC183_41__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA5170)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_41_TypeDefinitionIndex = 24964;

class Class_1_6E708EAB438EC183_41 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_41_TypeDefinitionIndex)->GetStaticField(0x6300);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_41*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_41* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_41* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_41*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_41*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_41_MERGEFROM_1_OFFSET))(this, a1);
	}
};
