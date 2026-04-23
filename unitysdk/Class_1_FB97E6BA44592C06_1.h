#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FB97E6BA44592C06_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193D3540)
#define CLASS_1_FB97E6BA44592C06_1_CLONE_OFFSET UNITYSDK_OFFSET(0x193D3130)
#define CLASS_1_FB97E6BA44592C06_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193D3300)
#define CLASS_1_FB97E6BA44592C06_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x193D3260)
#define CLASS_1_FB97E6BA44592C06_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193D3390)
#define CLASS_1_FB97E6BA44592C06_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193D3770)
#define CLASS_1_FB97E6BA44592C06_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193D36E0)
#define CLASS_1_FB97E6BA44592C06_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x193D31B0)
#define CLASS_1_FB97E6BA44592C06_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193D30A0)
#define CLASS_1_FB97E6BA44592C06_1_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x193D31C0)
#define CLASS_1_FB97E6BA44592C06_1_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x193D31A0)
#define CLASS_1_FB97E6BA44592C06_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x193D3190)
#define CLASS_1_FB97E6BA44592C06_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193D30D0)
#define CLASS_1_FB97E6BA44592C06_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193D3440)
#define CLASS_1_FB97E6BA44592C06_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x193D34A0)
#define CLASS_1_FB97E6BA44592C06_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x193D3870)
#define CLASS_1_FB97E6BA44592C06_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193D30F0)
#define CLASS_1_FB97E6BA44592C06_1__CTOR_OFFSET UNITYSDK_OFFSET(0x193D30E0)

inline static constexpr unsigned int Class_1_FB97E6BA44592C06_1_TypeDefinitionIndex = 24173;

class Class_1_FB97E6BA44592C06_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB97E6BA44592C06_1_TypeDefinitionIndex)->GetStaticField(0x3E810);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FB97E6BA44592C06_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_1*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FB97E6BA44592C06_1* Clone()
	{
		return ((::Class_1_FB97E6BA44592C06_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FB97E6BA44592C06_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB97E6BA44592C06_1*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FB97E6BA44592C06_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_1*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
