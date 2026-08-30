#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_245F843833EA3F6E;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_81_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA960D0)
#define CLASS_1_242BFB9DE152D766_81_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA95AB0)
#define CLASS_1_242BFB9DE152D766_81_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA95CC0)
#define CLASS_1_242BFB9DE152D766_81_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA95B50)
#define CLASS_1_242BFB9DE152D766_81_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA95F90)
#define CLASS_1_242BFB9DE152D766_81_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA96200)
#define CLASS_1_242BFB9DE152D766_81_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA96130)
#define CLASS_1_242BFB9DE152D766_81_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EA95B30)
#define CLASS_1_242BFB9DE152D766_81_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA959F0)
#define CLASS_1_242BFB9DE152D766_81_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EA95B40)
#define CLASS_1_242BFB9DE152D766_81_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA95A20)
#define CLASS_1_242BFB9DE152D766_81_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA95FE0)
#define CLASS_1_242BFB9DE152D766_81_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA96040)
#define CLASS_1_242BFB9DE152D766_81__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA963F0)
#define CLASS_1_242BFB9DE152D766_81__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA95A40)
#define CLASS_1_242BFB9DE152D766_81__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95A30)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_81_TypeDefinitionIndex = 32429;

class Class_1_242BFB9DE152D766_81 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_81*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_81*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_81_TypeDefinitionIndex)->GetStaticField(0x31DD0);
	}
	// static const ::System::Int32 PFDFBOCEDGD = 0x8; // 0x0
	::Class_1_245F843833EA3F6E* IMIONEEHMPB; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_81*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_81*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_81*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_81* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_CLONE_OFFSET))(this);
	}

	::Class_1_245F843833EA3F6E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_245F843833EA3F6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_245F843833EA3F6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_245F843833EA3F6E*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_81* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_81*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_81*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_81_MERGEFROM_1_OFFSET))(this, a1);
	}
};
