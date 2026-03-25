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

#define CLASS_1_6E708EAB438EC183_79_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CC2D60)
#define CLASS_1_6E708EAB438EC183_79_CLONE_OFFSET UNITYSDK_OFFSET(0x17CC2A00)
#define CLASS_1_6E708EAB438EC183_79_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CC2AE0)
#define CLASS_1_6E708EAB438EC183_79_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CC2A40)
#define CLASS_1_6E708EAB438EC183_79_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CC2B70)
#define CLASS_1_6E708EAB438EC183_79_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CC2E20)
#define CLASS_1_6E708EAB438EC183_79_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CC2DD0)
#define CLASS_1_6E708EAB438EC183_79_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17CC2A30)
#define CLASS_1_6E708EAB438EC183_79_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CC2910)
#define CLASS_1_6E708EAB438EC183_79_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CC2C80)
#define CLASS_1_6E708EAB438EC183_79_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CC2CE0)
#define CLASS_1_6E708EAB438EC183_79__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CC2ED0)
#define CLASS_1_6E708EAB438EC183_79__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CC2970)
#define CLASS_1_6E708EAB438EC183_79__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC2920)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_79_TypeDefinitionIndex = 26591;

class Class_1_6E708EAB438EC183_79 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_79_TypeDefinitionIndex)->GetStaticField(0x85A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_79*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_79* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_79*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_79* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_79*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_79*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_79_MERGEFROM_1_OFFSET))(this, a1);
	}
};
