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

#define CLASS_1_6E708EAB438EC183_35_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C07340)
#define CLASS_1_6E708EAB438EC183_35_CLONE_OFFSET UNITYSDK_OFFSET(0x17C06F70)
#define CLASS_1_6E708EAB438EC183_35_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C07090)
#define CLASS_1_6E708EAB438EC183_35_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C06FD0)
#define CLASS_1_6E708EAB438EC183_35_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C07120)
#define CLASS_1_6E708EAB438EC183_35_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C07430)
#define CLASS_1_6E708EAB438EC183_35_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C073E0)
#define CLASS_1_6E708EAB438EC183_35_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17C06FC0)
#define CLASS_1_6E708EAB438EC183_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C06E80)
#define CLASS_1_6E708EAB438EC183_35_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C07230)
#define CLASS_1_6E708EAB438EC183_35_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C07290)
#define CLASS_1_6E708EAB438EC183_35__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C07500)
#define CLASS_1_6E708EAB438EC183_35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C06EE0)
#define CLASS_1_6E708EAB438EC183_35__CTOR_OFFSET UNITYSDK_OFFSET(0x17C06E90)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_35_TypeDefinitionIndex = 24858;

class Class_1_6E708EAB438EC183_35 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_35_TypeDefinitionIndex)->GetStaticField(0x36780);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_35*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_35* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_35* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_35*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_35*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_35_MERGEFROM_1_OFFSET))(this, a1);
	}
};
