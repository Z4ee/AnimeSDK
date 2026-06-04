#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AA6AAA49C7B466C;
class Class_1_4B52859374487DA3_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BDE0598EF34BE45E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2185A0)
#define CLASS_1_BDE0598EF34BE45E_CLONE_OFFSET UNITYSDK_OFFSET(0x1A218190)
#define CLASS_1_BDE0598EF34BE45E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A218370)
#define CLASS_1_BDE0598EF34BE45E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A218280)
#define CLASS_1_BDE0598EF34BE45E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A218450)
#define CLASS_1_BDE0598EF34BE45E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2186D0)
#define CLASS_1_BDE0598EF34BE45E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A218630)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A218260)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A218240)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A2180A0)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A218270)
#define CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A218250)
#define CLASS_1_BDE0598EF34BE45E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2180D0)
#define CLASS_1_BDE0598EF34BE45E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2184B0)
#define CLASS_1_BDE0598EF34BE45E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A218510)
#define CLASS_1_BDE0598EF34BE45E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A218870)
#define CLASS_1_BDE0598EF34BE45E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2180F0)
#define CLASS_1_BDE0598EF34BE45E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2180E0)

inline static constexpr unsigned int Class_1_BDE0598EF34BE45E_TypeDefinitionIndex = 30760;

class Class_1_BDE0598EF34BE45E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDE0598EF34BE45E_TypeDefinitionIndex)->GetStaticField(0x11170);
	}
	// static const ::System::Int32 Field_1_1 = 0x5C0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x36A; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_4B52859374487DA3_1* Field_1_4; // 0x18
	::Class_1_4AA6AAA49C7B466C* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BDE0598EF34BE45E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BDE0598EF34BE45E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BDE0598EF34BE45E* Clone()
	{
		return ((::Class_1_BDE0598EF34BE45E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_CLONE_OFFSET))(this);
	}

	::Class_1_4B52859374487DA3_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4B52859374487DA3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4B52859374487DA3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B52859374487DA3_1*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4AA6AAA49C7B466C* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4AA6AAA49C7B466C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BDE0598EF34BE45E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BDE0598EF34BE45E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BDE0598EF34BE45E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
