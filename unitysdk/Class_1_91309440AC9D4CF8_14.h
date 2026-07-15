#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_91309440AC9D4CF8_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C93BFB0)
#define CLASS_1_91309440AC9D4CF8_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1C93B830)
#define CLASS_1_91309440AC9D4CF8_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C93BA90)
#define CLASS_1_91309440AC9D4CF8_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C93B920)
#define CLASS_1_91309440AC9D4CF8_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C93BD60)
#define CLASS_1_91309440AC9D4CF8_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C93C0F0)
#define CLASS_1_91309440AC9D4CF8_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C93C010)
#define CLASS_1_91309440AC9D4CF8_14_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C93B900)
#define CLASS_1_91309440AC9D4CF8_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C93B720)
#define CLASS_1_91309440AC9D4CF8_14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C93B910)
#define CLASS_1_91309440AC9D4CF8_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C93B750)
#define CLASS_1_91309440AC9D4CF8_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C93BEC0)
#define CLASS_1_91309440AC9D4CF8_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C93BF20)
#define CLASS_1_91309440AC9D4CF8_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C93C2C0)
#define CLASS_1_91309440AC9D4CF8_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C93B770)
#define CLASS_1_91309440AC9D4CF8_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1C93B760)

inline static constexpr unsigned int Class_1_91309440AC9D4CF8_14_TypeDefinitionIndex = 32759;

class Class_1_91309440AC9D4CF8_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91309440AC9D4CF8_14_TypeDefinitionIndex)->GetStaticField(0x4B0D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Class_1_9AD828BA811E7C7A_2* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_91309440AC9D4CF8_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8_14*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_91309440AC9D4CF8_14* Clone()
	{
		return ((::Class_1_91309440AC9D4CF8_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_CLONE_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9AD828BA811E7C7A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_91309440AC9D4CF8_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_91309440AC9D4CF8_14*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_91309440AC9D4CF8_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8_14*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
