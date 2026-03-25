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

#define CLASS_1_6E708EAB438EC183_28_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CD13C0)
#define CLASS_1_6E708EAB438EC183_28_CLONE_OFFSET UNITYSDK_OFFSET(0x17CD0FF0)
#define CLASS_1_6E708EAB438EC183_28_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CD1110)
#define CLASS_1_6E708EAB438EC183_28_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CD1050)
#define CLASS_1_6E708EAB438EC183_28_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CD11A0)
#define CLASS_1_6E708EAB438EC183_28_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CD14B0)
#define CLASS_1_6E708EAB438EC183_28_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CD1460)
#define CLASS_1_6E708EAB438EC183_28_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17CD1040)
#define CLASS_1_6E708EAB438EC183_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CD0F00)
#define CLASS_1_6E708EAB438EC183_28_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CD12B0)
#define CLASS_1_6E708EAB438EC183_28_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CD1310)
#define CLASS_1_6E708EAB438EC183_28__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CD1580)
#define CLASS_1_6E708EAB438EC183_28__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CD0F60)
#define CLASS_1_6E708EAB438EC183_28__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD0F10)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_28_TypeDefinitionIndex = 24322;

class Class_1_6E708EAB438EC183_28 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_28_TypeDefinitionIndex)->GetStaticField(0xC580);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_28*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_28* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_28* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_28*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_28*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_28_MERGEFROM_1_OFFSET))(this, a1);
	}
};
