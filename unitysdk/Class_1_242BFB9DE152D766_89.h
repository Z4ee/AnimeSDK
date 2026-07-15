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

#define CLASS_1_242BFB9DE152D766_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD30F90)
#define CLASS_1_242BFB9DE152D766_89_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD30920)
#define CLASS_1_242BFB9DE152D766_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD30B30)
#define CLASS_1_242BFB9DE152D766_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD309C0)
#define CLASS_1_242BFB9DE152D766_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD30E00)
#define CLASS_1_242BFB9DE152D766_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD31080)
#define CLASS_1_242BFB9DE152D766_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD30FF0)
#define CLASS_1_242BFB9DE152D766_89_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD309A0)
#define CLASS_1_242BFB9DE152D766_89_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD30860)
#define CLASS_1_242BFB9DE152D766_89_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD309B0)
#define CLASS_1_242BFB9DE152D766_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD30890)
#define CLASS_1_242BFB9DE152D766_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD30EA0)
#define CLASS_1_242BFB9DE152D766_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD30F00)
#define CLASS_1_242BFB9DE152D766_89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD31230)
#define CLASS_1_242BFB9DE152D766_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD308B0)
#define CLASS_1_242BFB9DE152D766_89__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD308A0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_89_TypeDefinitionIndex = 32132;

class Class_1_242BFB9DE152D766_89 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_89_TypeDefinitionIndex)->GetStaticField(0x24D70);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_C3162D2F7EA647B9* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_89*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_89* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_CLONE_OFFSET))(this);
	}

	::Class_1_C3162D2F7EA647B9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_89*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_89*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
