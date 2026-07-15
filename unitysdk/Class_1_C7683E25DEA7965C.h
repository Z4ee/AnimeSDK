#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_12.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C7683E25DEA7965C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CDED700)
#define CLASS_1_C7683E25DEA7965C_CLONE_OFFSET UNITYSDK_OFFSET(0x1CDED0F0)
#define CLASS_1_C7683E25DEA7965C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CDED340)
#define CLASS_1_C7683E25DEA7965C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDED150)
#define CLASS_1_C7683E25DEA7965C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDED510)
#define CLASS_1_C7683E25DEA7965C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CDED8E0)
#define CLASS_1_C7683E25DEA7965C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CDED7E0)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CDED130)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1CDED120)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CDECFB0)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CDED140)
#define CLASS_1_C7683E25DEA7965C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CDECFE0)
#define CLASS_1_C7683E25DEA7965C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CDED590)
#define CLASS_1_C7683E25DEA7965C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CDED5F0)
#define CLASS_1_C7683E25DEA7965C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEDAD0)
#define CLASS_1_C7683E25DEA7965C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CDED030)
#define CLASS_1_C7683E25DEA7965C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDECFF0)

inline static constexpr unsigned int Class_1_C7683E25DEA7965C_TypeDefinitionIndex = 29118;

class Class_1_C7683E25DEA7965C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7683E25DEA7965C_TypeDefinitionIndex)->GetStaticField(0x576E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_12>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_12>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7683E25DEA7965C_TypeDefinitionIndex)->GetStaticField(0x576E8);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Class_1_21DCD4640D389503_16* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_12>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C7683E25DEA7965C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7683E25DEA7965C*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C7683E25DEA7965C* Clone()
	{
		return ((::Class_1_C7683E25DEA7965C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_12>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_12>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_16* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C7683E25DEA7965C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C7683E25DEA7965C*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C7683E25DEA7965C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7683E25DEA7965C*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
