#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51BA4980ED225F7B_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_70373EC0EA5FDDDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F6820)
#define CLASS_1_70373EC0EA5FDDDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F6390)
#define CLASS_1_70373EC0EA5FDDDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F6410)
#define CLASS_1_70373EC0EA5FDDDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F63E0)
#define CLASS_1_70373EC0EA5FDDDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F6560)
#define CLASS_1_70373EC0EA5FDDDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F69B0)
#define CLASS_1_70373EC0EA5FDDDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F6900)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E1F61E0)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E1F63D0)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_9910C76C967AA69B_OFFSET UNITYSDK_OFFSET(0x1E1F63C0)
#define CLASS_1_70373EC0EA5FDDDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6210)
#define CLASS_1_70373EC0EA5FDDDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F66E0)
#define CLASS_1_70373EC0EA5FDDDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F6740)
#define CLASS_1_70373EC0EA5FDDDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6BB0)
#define CLASS_1_70373EC0EA5FDDDA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F62A0)
#define CLASS_1_70373EC0EA5FDDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6220)

inline static constexpr unsigned int Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex = 26669;

class Class_1_70373EC0EA5FDDDA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_CNCBDIFDGOJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex)->GetStaticField(0x40430);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_51BA4980ED225F7B_2*>** StaticGet_GCHJHCOKFGD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_51BA4980ED225F7B_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex)->GetStaticField(0x40438);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex)->GetStaticField(0x40440);
	}
	// static const ::System::Int32 FPMLDEAOLBC = 0xB; // 0x0
	// static const ::System::Int32 CMOMAELPCOE = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* OJFJBMMAHEJ; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* MEHJIOPJEIP; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_70373EC0EA5FDDDA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_70373EC0EA5FDDDA* Clone()
	{
		return ((::Class_1_70373EC0EA5FDDDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* Method_1_9910C76C967AA69B()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_9910C76C967AA69B_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_70373EC0EA5FDDDA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_70373EC0EA5FDDDA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
