#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41E300)
#define CLASS_1_242BFB9DE152D766_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41DC90)
#define CLASS_1_242BFB9DE152D766_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41DEA0)
#define CLASS_1_242BFB9DE152D766_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41DD30)
#define CLASS_1_242BFB9DE152D766_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41E170)
#define CLASS_1_242BFB9DE152D766_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41E3F0)
#define CLASS_1_242BFB9DE152D766_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41E360)
#define CLASS_1_242BFB9DE152D766_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E41DD10)
#define CLASS_1_242BFB9DE152D766_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E41DBD0)
#define CLASS_1_242BFB9DE152D766_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E41DD20)
#define CLASS_1_242BFB9DE152D766_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41DC00)
#define CLASS_1_242BFB9DE152D766_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41E210)
#define CLASS_1_242BFB9DE152D766_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41E270)
#define CLASS_1_242BFB9DE152D766_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41E5A0)
#define CLASS_1_242BFB9DE152D766_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41DC20)
#define CLASS_1_242BFB9DE152D766_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1E41DC10)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_12_TypeDefinitionIndex = 27272;

class Class_1_242BFB9DE152D766_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_12*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_12_TypeDefinitionIndex)->GetStaticField(0xB2E0);
	}
	// static const ::System::Int32 EOPEFMJDFKC = 0xC; // 0x0
	::Class_1_C3162D2F7EA647B9* PHBFHCCKHIC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_12*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_12* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_CLONE_OFFSET))(this);
	}

	::Class_1_C3162D2F7EA647B9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_12*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_12*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
