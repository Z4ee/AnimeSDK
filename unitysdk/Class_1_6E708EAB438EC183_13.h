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

#define CLASS_1_6E708EAB438EC183_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180BD8B0)
#define CLASS_1_6E708EAB438EC183_13_CLONE_OFFSET UNITYSDK_OFFSET(0x180BD4E0)
#define CLASS_1_6E708EAB438EC183_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180BD600)
#define CLASS_1_6E708EAB438EC183_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x180BD540)
#define CLASS_1_6E708EAB438EC183_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180BD690)
#define CLASS_1_6E708EAB438EC183_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180BD9A0)
#define CLASS_1_6E708EAB438EC183_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180BD950)
#define CLASS_1_6E708EAB438EC183_13_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180BD530)
#define CLASS_1_6E708EAB438EC183_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180BD3F0)
#define CLASS_1_6E708EAB438EC183_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180BD7A0)
#define CLASS_1_6E708EAB438EC183_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x180BD800)
#define CLASS_1_6E708EAB438EC183_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x180BDA70)
#define CLASS_1_6E708EAB438EC183_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180BD450)
#define CLASS_1_6E708EAB438EC183_13__CTOR_OFFSET UNITYSDK_OFFSET(0x180BD400)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_13_TypeDefinitionIndex = 23685;

class Class_1_6E708EAB438EC183_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_13_TypeDefinitionIndex)->GetStaticField(0x350E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_13*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_13* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_13*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_13*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
