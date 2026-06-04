#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4A02F22BC9731FA7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A26E890)
#define CLASS_1_4A02F22BC9731FA7_CLONE_OFFSET UNITYSDK_OFFSET(0x1A26E500)
#define CLASS_1_4A02F22BC9731FA7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A26E620)
#define CLASS_1_4A02F22BC9731FA7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A26E540)
#define CLASS_1_4A02F22BC9731FA7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A26E6D0)
#define CLASS_1_4A02F22BC9731FA7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A26E9A0)
#define CLASS_1_4A02F22BC9731FA7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A26E900)
#define CLASS_1_4A02F22BC9731FA7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A26E3F0)
#define CLASS_1_4A02F22BC9731FA7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A26E530)
#define CLASS_1_4A02F22BC9731FA7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A26E420)
#define CLASS_1_4A02F22BC9731FA7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A26E7B0)
#define CLASS_1_4A02F22BC9731FA7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A26E810)
#define CLASS_1_4A02F22BC9731FA7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A26EB40)
#define CLASS_1_4A02F22BC9731FA7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A26E470)
#define CLASS_1_4A02F22BC9731FA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26E430)

inline static constexpr unsigned int Class_1_4A02F22BC9731FA7_TypeDefinitionIndex = 24006;

class Class_1_4A02F22BC9731FA7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A02F22BC9731FA7_TypeDefinitionIndex)->GetStaticField(0x16320);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A02F22BC9731FA7_TypeDefinitionIndex)->GetStaticField(0x16328);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_3*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4A02F22BC9731FA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A02F22BC9731FA7*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4A02F22BC9731FA7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4A02F22BC9731FA7* Clone()
	{
		return ((::Class_1_4A02F22BC9731FA7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4A02F22BC9731FA7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4A02F22BC9731FA7*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4A02F22BC9731FA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A02F22BC9731FA7*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A02F22BC9731FA7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
