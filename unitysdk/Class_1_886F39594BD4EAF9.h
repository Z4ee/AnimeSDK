#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_886F39594BD4EAF9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C17460)
#define CLASS_1_886F39594BD4EAF9_CLONE_OFFSET UNITYSDK_OFFSET(0x19C17110)
#define CLASS_1_886F39594BD4EAF9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C17230)
#define CLASS_1_886F39594BD4EAF9_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C17150)
#define CLASS_1_886F39594BD4EAF9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C172E0)
#define CLASS_1_886F39594BD4EAF9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C175A0)
#define CLASS_1_886F39594BD4EAF9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C17500)
#define CLASS_1_886F39594BD4EAF9_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x19C17140)
#define CLASS_1_886F39594BD4EAF9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C17000)
#define CLASS_1_886F39594BD4EAF9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C17030)
#define CLASS_1_886F39594BD4EAF9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C17350)
#define CLASS_1_886F39594BD4EAF9_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C173B0)
#define CLASS_1_886F39594BD4EAF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C17650)
#define CLASS_1_886F39594BD4EAF9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C17080)
#define CLASS_1_886F39594BD4EAF9__CTOR_OFFSET UNITYSDK_OFFSET(0x19C17040)

inline static constexpr unsigned int Class_1_886F39594BD4EAF9_TypeDefinitionIndex = 31318;

class Class_1_886F39594BD4EAF9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_886F39594BD4EAF9_TypeDefinitionIndex)->GetStaticField(0x2A110);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_25>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_25>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_886F39594BD4EAF9_TypeDefinitionIndex)->GetStaticField(0x2A118);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_25>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_886F39594BD4EAF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_886F39594BD4EAF9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_886F39594BD4EAF9* Clone()
	{
		return ((::Class_1_886F39594BD4EAF9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_25>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_25>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_886F39594BD4EAF9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_886F39594BD4EAF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
