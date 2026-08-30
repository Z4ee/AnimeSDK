#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_91309440AC9D4CF8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF6C40)
#define CLASS_1_91309440AC9D4CF8_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF65F0)
#define CLASS_1_91309440AC9D4CF8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF6820)
#define CLASS_1_91309440AC9D4CF8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF66B0)
#define CLASS_1_91309440AC9D4CF8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF6AF0)
#define CLASS_1_91309440AC9D4CF8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF6D50)
#define CLASS_1_91309440AC9D4CF8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF6CA0)
#define CLASS_1_91309440AC9D4CF8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DFF6690)
#define CLASS_1_91309440AC9D4CF8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DFF6510)
#define CLASS_1_91309440AC9D4CF8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DFF66A0)
#define CLASS_1_91309440AC9D4CF8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6540)
#define CLASS_1_91309440AC9D4CF8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF6B50)
#define CLASS_1_91309440AC9D4CF8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF6BB0)
#define CLASS_1_91309440AC9D4CF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6EE0)
#define CLASS_1_91309440AC9D4CF8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF6560)
#define CLASS_1_91309440AC9D4CF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6550)

inline static constexpr unsigned int Class_1_91309440AC9D4CF8_TypeDefinitionIndex = 26592;

class Class_1_91309440AC9D4CF8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91309440AC9D4CF8_TypeDefinitionIndex)->GetStaticField(0x5D7A0);
	}
	// static const ::System::Int32 CIFIGNAEMHL = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_EA5A5E4D07C4CF2B_4* KJCPDKKLFEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_91309440AC9D4CF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_91309440AC9D4CF8* Clone()
	{
		return ((::Class_1_91309440AC9D4CF8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_CLONE_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EA5A5E4D07C4CF2B_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_4*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_91309440AC9D4CF8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_91309440AC9D4CF8*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_91309440AC9D4CF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
