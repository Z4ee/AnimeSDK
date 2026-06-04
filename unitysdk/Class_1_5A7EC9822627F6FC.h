#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_187;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5A7EC9822627F6FC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB15F70)
#define CLASS_1_5A7EC9822627F6FC_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB15AA0)
#define CLASS_1_5A7EC9822627F6FC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB15C20)
#define CLASS_1_5A7EC9822627F6FC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB15B20)
#define CLASS_1_5A7EC9822627F6FC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB15CF0)
#define CLASS_1_5A7EC9822627F6FC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB16120)
#define CLASS_1_5A7EC9822627F6FC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB16050)
#define CLASS_1_5A7EC9822627F6FC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AB15B00)
#define CLASS_1_5A7EC9822627F6FC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AB15850)
#define CLASS_1_5A7EC9822627F6FC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AB15B10)
#define CLASS_1_5A7EC9822627F6FC_METHOD_1_DCABFF080FAC9E74_OFFSET UNITYSDK_OFFSET(0x1AB15AF0)
#define CLASS_1_5A7EC9822627F6FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB158B0)
#define CLASS_1_5A7EC9822627F6FC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB15E40)
#define CLASS_1_5A7EC9822627F6FC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB15EA0)
#define CLASS_1_5A7EC9822627F6FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB163B0)
#define CLASS_1_5A7EC9822627F6FC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB15960)
#define CLASS_1_5A7EC9822627F6FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB158C0)

inline static constexpr unsigned int Class_1_5A7EC9822627F6FC_TypeDefinitionIndex = 25574;

class Class_1_5A7EC9822627F6FC : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::Single>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A7EC9822627F6FC_TypeDefinitionIndex)->GetStaticField(0x16540);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5A7EC9822627F6FC*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5A7EC9822627F6FC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A7EC9822627F6FC_TypeDefinitionIndex)->GetStaticField(0x16548);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::Single>* Field_1_5; // 0x18
	::Class_1_D17272E82AE804C2_187* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5A7EC9822627F6FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A7EC9822627F6FC*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5A7EC9822627F6FC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5A7EC9822627F6FC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5A7EC9822627F6FC* Clone()
	{
		return ((::Class_1_5A7EC9822627F6FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::Single>* Method_1_DCABFF080FAC9E74()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_METHOD_1_DCABFF080FAC9E74_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_187* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_187*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_187* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_187*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5A7EC9822627F6FC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A7EC9822627F6FC*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5A7EC9822627F6FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A7EC9822627F6FC*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5A7EC9822627F6FC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
