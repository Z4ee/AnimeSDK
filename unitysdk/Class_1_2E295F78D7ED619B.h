#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2E295F78D7ED619B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF239C0)
#define CLASS_1_2E295F78D7ED619B_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF23540)
#define CLASS_1_2E295F78D7ED619B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF235F0)
#define CLASS_1_2E295F78D7ED619B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF235C0)
#define CLASS_1_2E295F78D7ED619B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF23770)
#define CLASS_1_2E295F78D7ED619B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF23CB0)
#define CLASS_1_2E295F78D7ED619B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF23B50)
#define CLASS_1_2E295F78D7ED619B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CF235A0)
#define CLASS_1_2E295F78D7ED619B_METHOD_1_3F08C697E838D55A_1_OFFSET UNITYSDK_OFFSET(0x1CF23580)
#define CLASS_1_2E295F78D7ED619B_METHOD_1_3F08C697E838D55A_2_OFFSET UNITYSDK_OFFSET(0x1CF23590)
#define CLASS_1_2E295F78D7ED619B_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1CF23570)
#define CLASS_1_2E295F78D7ED619B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF23360)
#define CLASS_1_2E295F78D7ED619B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CF235B0)
#define CLASS_1_2E295F78D7ED619B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF23390)
#define CLASS_1_2E295F78D7ED619B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF23820)
#define CLASS_1_2E295F78D7ED619B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF23880)
#define CLASS_1_2E295F78D7ED619B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF23E00)
#define CLASS_1_2E295F78D7ED619B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF23420)
#define CLASS_1_2E295F78D7ED619B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF233A0)

inline static constexpr unsigned int Class_1_2E295F78D7ED619B_TypeDefinitionIndex = 30790;

class Class_1_2E295F78D7ED619B : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E295F78D7ED619B_TypeDefinitionIndex)->GetStaticField(0xAC00);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E295F78D7ED619B_TypeDefinitionIndex)->GetStaticField(0xAC08);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E295F78D7ED619B_TypeDefinitionIndex)->GetStaticField(0xAC10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2E295F78D7ED619B*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2E295F78D7ED619B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E295F78D7ED619B_TypeDefinitionIndex)->GetStaticField(0xAC18);
	}
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_10; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2E295F78D7ED619B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E295F78D7ED619B*))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2E295F78D7ED619B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2E295F78D7ED619B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2E295F78D7ED619B* Clone()
	{
		return ((::Class_1_2E295F78D7ED619B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_METHOD_1_3F08C697E838D55A_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_METHOD_1_3F08C697E838D55A_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2E295F78D7ED619B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2E295F78D7ED619B*))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2E295F78D7ED619B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E295F78D7ED619B*))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2E295F78D7ED619B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
