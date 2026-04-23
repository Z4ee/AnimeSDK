#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FB97E6BA44592C06_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BA4F00)
#define CLASS_1_FB97E6BA44592C06_7_CLONE_OFFSET UNITYSDK_OFFSET(0x19BA4B50)
#define CLASS_1_FB97E6BA44592C06_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BA4CF0)
#define CLASS_1_FB97E6BA44592C06_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BA4C50)
#define CLASS_1_FB97E6BA44592C06_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BA4D80)
#define CLASS_1_FB97E6BA44592C06_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BA50B0)
#define CLASS_1_FB97E6BA44592C06_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BA5020)
#define CLASS_1_FB97E6BA44592C06_7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19BA4BA0)
#define CLASS_1_FB97E6BA44592C06_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BA4AC0)
#define CLASS_1_FB97E6BA44592C06_7_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19BA4BB0)
#define CLASS_1_FB97E6BA44592C06_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BA4AF0)
#define CLASS_1_FB97E6BA44592C06_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BA4E40)
#define CLASS_1_FB97E6BA44592C06_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BA4EA0)
#define CLASS_1_FB97E6BA44592C06_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA51A0)
#define CLASS_1_FB97E6BA44592C06_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BA4B10)
#define CLASS_1_FB97E6BA44592C06_7__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA4B00)

inline static constexpr unsigned int Class_1_FB97E6BA44592C06_7_TypeDefinitionIndex = 30002;

class Class_1_FB97E6BA44592C06_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB97E6BA44592C06_7_TypeDefinitionIndex)->GetStaticField(0x4CE90);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::System::String* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FB97E6BA44592C06_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_7*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FB97E6BA44592C06_7* Clone()
	{
		return ((::Class_1_FB97E6BA44592C06_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FB97E6BA44592C06_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB97E6BA44592C06_7*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FB97E6BA44592C06_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_7*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
