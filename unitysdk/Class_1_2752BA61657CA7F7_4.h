#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86AB4C0412B98D67;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2752BA61657CA7F7_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19819600)
#define CLASS_1_2752BA61657CA7F7_4_CLONE_OFFSET UNITYSDK_OFFSET(0x198192A0)
#define CLASS_1_2752BA61657CA7F7_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19819450)
#define CLASS_1_2752BA61657CA7F7_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x198193A0)
#define CLASS_1_2752BA61657CA7F7_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198194F0)
#define CLASS_1_2752BA61657CA7F7_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19819700)
#define CLASS_1_2752BA61657CA7F7_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19819660)
#define CLASS_1_2752BA61657CA7F7_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19819380)
#define CLASS_1_2752BA61657CA7F7_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19819180)
#define CLASS_1_2752BA61657CA7F7_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19819390)
#define CLASS_1_2752BA61657CA7F7_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198191B0)
#define CLASS_1_2752BA61657CA7F7_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19819540)
#define CLASS_1_2752BA61657CA7F7_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x198195A0)
#define CLASS_1_2752BA61657CA7F7_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19819800)
#define CLASS_1_2752BA61657CA7F7_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198191D0)
#define CLASS_1_2752BA61657CA7F7_4__CTOR_OFFSET UNITYSDK_OFFSET(0x198191C0)

inline static constexpr unsigned int Class_1_2752BA61657CA7F7_4_TypeDefinitionIndex = 30072;

class Class_1_2752BA61657CA7F7_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2752BA61657CA7F7_4_TypeDefinitionIndex)->GetStaticField(0x66700);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_86AB4C0412B98D67* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2752BA61657CA7F7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7_4* Clone()
	{
		return ((::Class_1_2752BA61657CA7F7_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_CLONE_OFFSET))(this);
	}

	::Class_1_86AB4C0412B98D67* Method_1_24748FC20F375725()
	{
		return ((::Class_1_86AB4C0412B98D67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_86AB4C0412B98D67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86AB4C0412B98D67*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2752BA61657CA7F7_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2752BA61657CA7F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2752BA61657CA7F7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
