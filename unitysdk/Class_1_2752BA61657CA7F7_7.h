#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24B2AFBC155BAEAC_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2752BA61657CA7F7_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB6D7B0)
#define CLASS_1_2752BA61657CA7F7_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB6D190)
#define CLASS_1_2752BA61657CA7F7_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB6D3A0)
#define CLASS_1_2752BA61657CA7F7_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB6D230)
#define CLASS_1_2752BA61657CA7F7_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB6D670)
#define CLASS_1_2752BA61657CA7F7_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB6D880)
#define CLASS_1_2752BA61657CA7F7_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB6D810)
#define CLASS_1_2752BA61657CA7F7_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CB6D210)
#define CLASS_1_2752BA61657CA7F7_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CB6D0D0)
#define CLASS_1_2752BA61657CA7F7_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CB6D220)
#define CLASS_1_2752BA61657CA7F7_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB6D100)
#define CLASS_1_2752BA61657CA7F7_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB6D6C0)
#define CLASS_1_2752BA61657CA7F7_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB6D720)
#define CLASS_1_2752BA61657CA7F7_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB6DA00)
#define CLASS_1_2752BA61657CA7F7_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB6D120)
#define CLASS_1_2752BA61657CA7F7_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB6D110)

inline static constexpr unsigned int Class_1_2752BA61657CA7F7_7_TypeDefinitionIndex = 32242;

class Class_1_2752BA61657CA7F7_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2752BA61657CA7F7_7_TypeDefinitionIndex)->GetStaticField(0x39740);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_24B2AFBC155BAEAC_5* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2752BA61657CA7F7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_7*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7_7* Clone()
	{
		return ((::Class_1_2752BA61657CA7F7_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_CLONE_OFFSET))(this);
	}

	::Class_1_24B2AFBC155BAEAC_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_24B2AFBC155BAEAC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_24B2AFBC155BAEAC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_5*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2752BA61657CA7F7_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2752BA61657CA7F7_7*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2752BA61657CA7F7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_7*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
