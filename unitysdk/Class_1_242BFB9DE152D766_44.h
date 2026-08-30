#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_56;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B06B0)
#define CLASS_1_242BFB9DE152D766_44_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B0040)
#define CLASS_1_242BFB9DE152D766_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B0250)
#define CLASS_1_242BFB9DE152D766_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B00E0)
#define CLASS_1_242BFB9DE152D766_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B0520)
#define CLASS_1_242BFB9DE152D766_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B07A0)
#define CLASS_1_242BFB9DE152D766_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B0710)
#define CLASS_1_242BFB9DE152D766_44_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E4B00C0)
#define CLASS_1_242BFB9DE152D766_44_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4AFF80)
#define CLASS_1_242BFB9DE152D766_44_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E4B00D0)
#define CLASS_1_242BFB9DE152D766_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AFFB0)
#define CLASS_1_242BFB9DE152D766_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B05C0)
#define CLASS_1_242BFB9DE152D766_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B0620)
#define CLASS_1_242BFB9DE152D766_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0950)
#define CLASS_1_242BFB9DE152D766_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4AFFD0)
#define CLASS_1_242BFB9DE152D766_44__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AFFC0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_44_TypeDefinitionIndex = 30211;

class Class_1_242BFB9DE152D766_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_44*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_44_TypeDefinitionIndex)->GetStaticField(0x180A0);
	}
	// static const ::System::Int32 HBMLBLAJKKL = 0x6; // 0x0
	::Class_1_7FF19F6206AF6DD7_56* FFNFNAPHAKG; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_44*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_44*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_44*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_44* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_CLONE_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_56* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7FF19F6206AF6DD7_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7FF19F6206AF6DD7_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_56*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_44*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_44*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
