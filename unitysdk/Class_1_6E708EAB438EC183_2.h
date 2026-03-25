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

#define CLASS_1_6E708EAB438EC183_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180F4810)
#define CLASS_1_6E708EAB438EC183_2_CLONE_OFFSET UNITYSDK_OFFSET(0x180F4440)
#define CLASS_1_6E708EAB438EC183_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180F4560)
#define CLASS_1_6E708EAB438EC183_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x180F44A0)
#define CLASS_1_6E708EAB438EC183_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180F45F0)
#define CLASS_1_6E708EAB438EC183_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180F4900)
#define CLASS_1_6E708EAB438EC183_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180F48B0)
#define CLASS_1_6E708EAB438EC183_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180F4490)
#define CLASS_1_6E708EAB438EC183_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180F4350)
#define CLASS_1_6E708EAB438EC183_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180F4700)
#define CLASS_1_6E708EAB438EC183_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x180F4760)
#define CLASS_1_6E708EAB438EC183_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F49D0)
#define CLASS_1_6E708EAB438EC183_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180F43B0)
#define CLASS_1_6E708EAB438EC183_2__CTOR_OFFSET UNITYSDK_OFFSET(0x180F4360)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_2_TypeDefinitionIndex = 22919;

class Class_1_6E708EAB438EC183_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_2_TypeDefinitionIndex)->GetStaticField(0x36C50);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_2*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_2* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_2*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_2*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
