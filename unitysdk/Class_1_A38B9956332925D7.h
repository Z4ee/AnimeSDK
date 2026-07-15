#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_5A95CCE23053F94F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A38B9956332925D7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BAE0370)
#define CLASS_1_A38B9956332925D7_CLONE_OFFSET UNITYSDK_OFFSET(0x1BADFEB0)
#define CLASS_1_A38B9956332925D7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BAE0060)
#define CLASS_1_A38B9956332925D7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BADFF10)
#define CLASS_1_A38B9956332925D7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BAE0190)
#define CLASS_1_A38B9956332925D7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BAE0560)
#define CLASS_1_A38B9956332925D7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BAE04C0)
#define CLASS_1_A38B9956332925D7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BADFEF0)
#define CLASS_1_A38B9956332925D7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BADFD60)
#define CLASS_1_A38B9956332925D7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1BADFF00)
#define CLASS_1_A38B9956332925D7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1BADFEE0)
#define CLASS_1_A38B9956332925D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BADFD90)
#define CLASS_1_A38B9956332925D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BAE0200)
#define CLASS_1_A38B9956332925D7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BAE0260)
#define CLASS_1_A38B9956332925D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAE0730)
#define CLASS_1_A38B9956332925D7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BADFDF0)
#define CLASS_1_A38B9956332925D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADFDA0)

inline static constexpr unsigned int Class_1_A38B9956332925D7_TypeDefinitionIndex = 29989;

class Class_1_A38B9956332925D7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A38B9956332925D7_TypeDefinitionIndex)->GetStaticField(0x4EB40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5A95CCE23053F94F*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5A95CCE23053F94F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A38B9956332925D7_TypeDefinitionIndex)->GetStaticField(0x4EB48);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5A95CCE23053F94F*>* Field_1_5; // 0x18
	::Enum_3_01618AD0437C8486_2 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A38B9956332925D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A38B9956332925D7*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A38B9956332925D7* Clone()
	{
		return ((::Class_1_A38B9956332925D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5A95CCE23053F94F*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5A95CCE23053F94F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A38B9956332925D7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A38B9956332925D7*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A38B9956332925D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A38B9956332925D7*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
