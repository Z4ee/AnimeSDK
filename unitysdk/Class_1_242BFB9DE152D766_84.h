#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF9832A6EE2A67F_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D9770)
#define CLASS_1_242BFB9DE152D766_84_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D90F0)
#define CLASS_1_242BFB9DE152D766_84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D9340)
#define CLASS_1_242BFB9DE152D766_84_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D91D0)
#define CLASS_1_242BFB9DE152D766_84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D9610)
#define CLASS_1_242BFB9DE152D766_84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D9890)
#define CLASS_1_242BFB9DE152D766_84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D97D0)
#define CLASS_1_242BFB9DE152D766_84_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E0D91B0)
#define CLASS_1_242BFB9DE152D766_84_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0D8FF0)
#define CLASS_1_242BFB9DE152D766_84_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E0D91C0)
#define CLASS_1_242BFB9DE152D766_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9020)
#define CLASS_1_242BFB9DE152D766_84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D9680)
#define CLASS_1_242BFB9DE152D766_84_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D96E0)
#define CLASS_1_242BFB9DE152D766_84__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9A40)
#define CLASS_1_242BFB9DE152D766_84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D9040)
#define CLASS_1_242BFB9DE152D766_84__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9030)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_84_TypeDefinitionIndex = 33026;

class Class_1_242BFB9DE152D766_84 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_84*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_84_TypeDefinitionIndex)->GetStaticField(0x18BC0);
	}
	// static const ::System::Int32 JLAAHBJNEML = 0x5; // 0x0
	::Class_1_4AF9832A6EE2A67F_2* DFKHBNCHKBI; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_84*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_84*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_84*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_84* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_CLONE_OFFSET))(this);
	}

	::Class_1_4AF9832A6EE2A67F_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4AF9832A6EE2A67F_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4AF9832A6EE2A67F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_2*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_84*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_84*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
