#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_66;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EB813CC1D00A138D_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BFD0CB0)
#define CLASS_1_EB813CC1D00A138D_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1BFD05E0)
#define CLASS_1_EB813CC1D00A138D_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BFD0890)
#define CLASS_1_EB813CC1D00A138D_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BFD0660)
#define CLASS_1_EB813CC1D00A138D_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BFD0A60)
#define CLASS_1_EB813CC1D00A138D_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BFD0E80)
#define CLASS_1_EB813CC1D00A138D_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BFD0DA0)
#define CLASS_1_EB813CC1D00A138D_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BFD0630)
#define CLASS_1_EB813CC1D00A138D_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BFD0400)
#define CLASS_1_EB813CC1D00A138D_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1BFD0650)
#define CLASS_1_EB813CC1D00A138D_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BFD0640)
#define CLASS_1_EB813CC1D00A138D_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BFD0460)
#define CLASS_1_EB813CC1D00A138D_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFD0B30)
#define CLASS_1_EB813CC1D00A138D_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BFD0B90)
#define CLASS_1_EB813CC1D00A138D_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFD1060)
#define CLASS_1_EB813CC1D00A138D_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BFD04B0)
#define CLASS_1_EB813CC1D00A138D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD0470)

inline static constexpr unsigned int Class_1_EB813CC1D00A138D_4_TypeDefinitionIndex = 31132;

class Class_1_EB813CC1D00A138D_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_4_TypeDefinitionIndex)->GetStaticField(0x29250);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_963E317C37FB5E9A_66*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_963E317C37FB5E9A_66*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_4_TypeDefinitionIndex)->GetStaticField(0x29258);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_66*>* Field_1_4; // 0x10
	::Class_1_963E317C37FB5E9A_66* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB813CC1D00A138D_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D_4*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB813CC1D00A138D_4* Clone()
	{
		return ((::Class_1_EB813CC1D00A138D_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_CLONE_OFFSET))(this);
	}

	::Class_1_963E317C37FB5E9A_66* Method_1_24748FC20F375725()
	{
		return ((::Class_1_963E317C37FB5E9A_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_963E317C37FB5E9A_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_66*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_66*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_66*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB813CC1D00A138D_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB813CC1D00A138D_4*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB813CC1D00A138D_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D_4*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
