#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F11CBE4D3C7DF06D_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_43FD8409C86BAFF2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19559A40)
#define CLASS_1_43FD8409C86BAFF2_CLONE_OFFSET UNITYSDK_OFFSET(0x195595E0)
#define CLASS_1_43FD8409C86BAFF2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19559710)
#define CLASS_1_43FD8409C86BAFF2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19559640)
#define CLASS_1_43FD8409C86BAFF2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195597E0)
#define CLASS_1_43FD8409C86BAFF2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19559B60)
#define CLASS_1_43FD8409C86BAFF2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19559AE0)
#define CLASS_1_43FD8409C86BAFF2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19559620)
#define CLASS_1_43FD8409C86BAFF2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19559610)
#define CLASS_1_43FD8409C86BAFF2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19559440)
#define CLASS_1_43FD8409C86BAFF2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19559630)
#define CLASS_1_43FD8409C86BAFF2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19559470)
#define CLASS_1_43FD8409C86BAFF2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19559940)
#define CLASS_1_43FD8409C86BAFF2_WRITETO_OFFSET UNITYSDK_OFFSET(0x195599A0)
#define CLASS_1_43FD8409C86BAFF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19559C30)
#define CLASS_1_43FD8409C86BAFF2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195594D0)
#define CLASS_1_43FD8409C86BAFF2__CTOR_OFFSET UNITYSDK_OFFSET(0x19559480)

inline static constexpr unsigned int Class_1_43FD8409C86BAFF2_TypeDefinitionIndex = 31157;

class Class_1_43FD8409C86BAFF2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_43FD8409C86BAFF2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_43FD8409C86BAFF2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43FD8409C86BAFF2_TypeDefinitionIndex)->GetStaticField(0x4C510);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43FD8409C86BAFF2_TypeDefinitionIndex)->GetStaticField(0x4C518);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_F11CBE4D3C7DF06D_1* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_43FD8409C86BAFF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43FD8409C86BAFF2*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_43FD8409C86BAFF2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_43FD8409C86BAFF2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_43FD8409C86BAFF2* Clone()
	{
		return ((::Class_1_43FD8409C86BAFF2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_F11CBE4D3C7DF06D_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F11CBE4D3C7DF06D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F11CBE4D3C7DF06D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_43FD8409C86BAFF2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43FD8409C86BAFF2*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_43FD8409C86BAFF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43FD8409C86BAFF2*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_43FD8409C86BAFF2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
