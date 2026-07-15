#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23A051AE95CBE8C4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_43_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C02EE50)
#define CLASS_1_242BFB9DE152D766_43_CLONE_OFFSET UNITYSDK_OFFSET(0x1C02E830)
#define CLASS_1_242BFB9DE152D766_43_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C02EA40)
#define CLASS_1_242BFB9DE152D766_43_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C02E8D0)
#define CLASS_1_242BFB9DE152D766_43_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C02ED10)
#define CLASS_1_242BFB9DE152D766_43_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C02EFB0)
#define CLASS_1_242BFB9DE152D766_43_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C02EEB0)
#define CLASS_1_242BFB9DE152D766_43_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C02E8B0)
#define CLASS_1_242BFB9DE152D766_43_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C02E770)
#define CLASS_1_242BFB9DE152D766_43_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C02E8C0)
#define CLASS_1_242BFB9DE152D766_43_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C02E7A0)
#define CLASS_1_242BFB9DE152D766_43_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C02ED60)
#define CLASS_1_242BFB9DE152D766_43_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C02EDC0)
#define CLASS_1_242BFB9DE152D766_43__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C02F180)
#define CLASS_1_242BFB9DE152D766_43__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C02E7C0)
#define CLASS_1_242BFB9DE152D766_43__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02E7B0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_43_TypeDefinitionIndex = 29594;

class Class_1_242BFB9DE152D766_43 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_43*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_43_TypeDefinitionIndex)->GetStaticField(0x48090);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_23A051AE95CBE8C4* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_43*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_43*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_43*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_43* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_43*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_CLONE_OFFSET))(this);
	}

	::Class_1_23A051AE95CBE8C4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_23A051AE95CBE8C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_23A051AE95CBE8C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23A051AE95CBE8C4*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_43* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_43*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_43*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_43_MERGEFROM_1_OFFSET))(this, a1);
	}
};
