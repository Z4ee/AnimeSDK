#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C03D623E9F32FBCB_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_69F06BA11FF28429_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E3C0B0)
#define CLASS_1_69F06BA11FF28429_CLONE_OFFSET UNITYSDK_OFFSET(0x17E3BBF0)
#define CLASS_1_69F06BA11FF28429_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E3BD50)
#define CLASS_1_69F06BA11FF28429_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E3BC70)
#define CLASS_1_69F06BA11FF28429_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E3BE20)
#define CLASS_1_69F06BA11FF28429_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E3C300)
#define CLASS_1_69F06BA11FF28429_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E3C1F0)
#define CLASS_1_69F06BA11FF28429_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E3BC50)
#define CLASS_1_69F06BA11FF28429_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E3BC20)
#define CLASS_1_69F06BA11FF28429_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E3BC40)
#define CLASS_1_69F06BA11FF28429_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E3BC60)
#define CLASS_1_69F06BA11FF28429_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E3BC30)
#define CLASS_1_69F06BA11FF28429_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E3BA00)
#define CLASS_1_69F06BA11FF28429_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E3BF80)
#define CLASS_1_69F06BA11FF28429_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E3BFE0)
#define CLASS_1_69F06BA11FF28429__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E3C3F0)
#define CLASS_1_69F06BA11FF28429__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E3BA60)
#define CLASS_1_69F06BA11FF28429__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3BA10)

inline static constexpr unsigned int Class_1_69F06BA11FF28429_TypeDefinitionIndex = 23858;

class Class_1_69F06BA11FF28429 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69F06BA11FF28429_TypeDefinitionIndex)->GetStaticField(0x27660);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_C03D623E9F32FBCB_9* Field_1_2; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_69F06BA11FF28429* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_69F06BA11FF28429* Clone()
	{
		return ((::Class_1_69F06BA11FF28429*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_CLONE_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C03D623E9F32FBCB_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C03D623E9F32FBCB_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_9*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_69F06BA11FF28429* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_69F06BA11FF28429*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_69F06BA11FF28429* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69F06BA11FF28429_MERGEFROM_1_OFFSET))(this, a1);
	}
};
