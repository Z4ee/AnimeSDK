#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4635A39A43A9DDD4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BC0AF0)
#define CLASS_1_4635A39A43A9DDD4_CLONE_OFFSET UNITYSDK_OFFSET(0x17BC0650)
#define CLASS_1_4635A39A43A9DDD4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BC07F0)
#define CLASS_1_4635A39A43A9DDD4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BC06D0)
#define CLASS_1_4635A39A43A9DDD4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BC08A0)
#define CLASS_1_4635A39A43A9DDD4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BC0CE0)
#define CLASS_1_4635A39A43A9DDD4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BC0C40)
#define CLASS_1_4635A39A43A9DDD4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17BC06B0)
#define CLASS_1_4635A39A43A9DDD4_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x17BC06C0)
#define CLASS_1_4635A39A43A9DDD4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17BC06A0)
#define CLASS_1_4635A39A43A9DDD4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BC0530)
#define CLASS_1_4635A39A43A9DDD4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BC0990)
#define CLASS_1_4635A39A43A9DDD4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BC09F0)
#define CLASS_1_4635A39A43A9DDD4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BC0DC0)
#define CLASS_1_4635A39A43A9DDD4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BC0590)
#define CLASS_1_4635A39A43A9DDD4__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC0540)

inline static constexpr unsigned int Class_1_4635A39A43A9DDD4_TypeDefinitionIndex = 24665;

class Class_1_4635A39A43A9DDD4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4635A39A43A9DDD4_TypeDefinitionIndex)->GetStaticField(0x34B90);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_5; // 0x18
	::Enum_3_7D0231C413D78CFA Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4635A39A43A9DDD4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4635A39A43A9DDD4*))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4635A39A43A9DDD4* Clone()
	{
		return ((::Class_1_4635A39A43A9DDD4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_CLONE_OFFSET))(this);
	}

	::Enum_3_7D0231C413D78CFA Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_7D0231C413D78CFA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4635A39A43A9DDD4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4635A39A43A9DDD4*))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4635A39A43A9DDD4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4635A39A43A9DDD4*))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4635A39A43A9DDD4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
