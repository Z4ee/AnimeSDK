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

#define CLASS_1_6E708EAB438EC183_111_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D810B0)
#define CLASS_1_6E708EAB438EC183_111_CLONE_OFFSET UNITYSDK_OFFSET(0x17D80CE0)
#define CLASS_1_6E708EAB438EC183_111_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D80E00)
#define CLASS_1_6E708EAB438EC183_111_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D80D40)
#define CLASS_1_6E708EAB438EC183_111_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D80E90)
#define CLASS_1_6E708EAB438EC183_111_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D811A0)
#define CLASS_1_6E708EAB438EC183_111_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D81150)
#define CLASS_1_6E708EAB438EC183_111_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17D80D30)
#define CLASS_1_6E708EAB438EC183_111_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D80BF0)
#define CLASS_1_6E708EAB438EC183_111_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D80FA0)
#define CLASS_1_6E708EAB438EC183_111_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D81000)
#define CLASS_1_6E708EAB438EC183_111__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D81270)
#define CLASS_1_6E708EAB438EC183_111__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D80C50)
#define CLASS_1_6E708EAB438EC183_111__CTOR_OFFSET UNITYSDK_OFFSET(0x17D80C00)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_111_TypeDefinitionIndex = 27486;

class Class_1_6E708EAB438EC183_111 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_111_TypeDefinitionIndex)->GetStaticField(0x15C00);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_111* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_111*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_111* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_111*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_111* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_111*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_111* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_111*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_111_MERGEFROM_1_OFFSET))(this, a1);
	}
};
