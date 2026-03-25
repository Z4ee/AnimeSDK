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

#define CLASS_1_6E708EAB438EC183_40_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18078810)
#define CLASS_1_6E708EAB438EC183_40_CLONE_OFFSET UNITYSDK_OFFSET(0x180784B0)
#define CLASS_1_6E708EAB438EC183_40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18078590)
#define CLASS_1_6E708EAB438EC183_40_EQUALS_OFFSET UNITYSDK_OFFSET(0x180784F0)
#define CLASS_1_6E708EAB438EC183_40_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18078620)
#define CLASS_1_6E708EAB438EC183_40_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180788D0)
#define CLASS_1_6E708EAB438EC183_40_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18078880)
#define CLASS_1_6E708EAB438EC183_40_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180784E0)
#define CLASS_1_6E708EAB438EC183_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180783C0)
#define CLASS_1_6E708EAB438EC183_40_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18078730)
#define CLASS_1_6E708EAB438EC183_40_WRITETO_OFFSET UNITYSDK_OFFSET(0x18078790)
#define CLASS_1_6E708EAB438EC183_40__CCTOR_OFFSET UNITYSDK_OFFSET(0x18078980)
#define CLASS_1_6E708EAB438EC183_40__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18078420)
#define CLASS_1_6E708EAB438EC183_40__CTOR_OFFSET UNITYSDK_OFFSET(0x180783D0)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_40_TypeDefinitionIndex = 24958;

class Class_1_6E708EAB438EC183_40 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_40_TypeDefinitionIndex)->GetStaticField(0x31C30);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_40*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_40* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_40* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_40*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_40*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_40_MERGEFROM_1_OFFSET))(this, a1);
	}
};
