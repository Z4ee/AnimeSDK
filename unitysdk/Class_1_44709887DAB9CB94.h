#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_44709887DAB9CB94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5329A0)
#define CLASS_1_44709887DAB9CB94_CLONE_OFFSET UNITYSDK_OFFSET(0x1A532680)
#define CLASS_1_44709887DAB9CB94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5327A0)
#define CLASS_1_44709887DAB9CB94_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5326C0)
#define CLASS_1_44709887DAB9CB94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A532850)
#define CLASS_1_44709887DAB9CB94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A532AE0)
#define CLASS_1_44709887DAB9CB94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A532A40)
#define CLASS_1_44709887DAB9CB94_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1A5326B0)
#define CLASS_1_44709887DAB9CB94_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A532570)
#define CLASS_1_44709887DAB9CB94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5325A0)
#define CLASS_1_44709887DAB9CB94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5328C0)
#define CLASS_1_44709887DAB9CB94_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A532920)
#define CLASS_1_44709887DAB9CB94__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A532CB0)
#define CLASS_1_44709887DAB9CB94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5325F0)
#define CLASS_1_44709887DAB9CB94__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5325B0)

inline static constexpr unsigned int Class_1_44709887DAB9CB94_TypeDefinitionIndex = 29439;

class Class_1_44709887DAB9CB94 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_A35B38E5F9115A76_2>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_A35B38E5F9115A76_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44709887DAB9CB94_TypeDefinitionIndex)->GetStaticField(0x10280);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_44709887DAB9CB94*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_44709887DAB9CB94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44709887DAB9CB94_TypeDefinitionIndex)->GetStaticField(0x10288);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_A35B38E5F9115A76_2>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_44709887DAB9CB94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44709887DAB9CB94*))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_44709887DAB9CB94*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_44709887DAB9CB94*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_44709887DAB9CB94* Clone()
	{
		return ((::Class_1_44709887DAB9CB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_A35B38E5F9115A76_2>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_A35B38E5F9115A76_2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_44709887DAB9CB94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_44709887DAB9CB94*))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_44709887DAB9CB94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44709887DAB9CB94*))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
