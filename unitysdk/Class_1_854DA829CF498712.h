#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_854DA829CF498712_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C64F70)
#define CLASS_1_854DA829CF498712_CLONE_OFFSET UNITYSDK_OFFSET(0x19C64AD0)
#define CLASS_1_854DA829CF498712_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C64C70)
#define CLASS_1_854DA829CF498712_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C64B50)
#define CLASS_1_854DA829CF498712_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C64D20)
#define CLASS_1_854DA829CF498712_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C65160)
#define CLASS_1_854DA829CF498712_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C650C0)
#define CLASS_1_854DA829CF498712_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C64950)
#define CLASS_1_854DA829CF498712_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19C64B30)
#define CLASS_1_854DA829CF498712_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x19C64B40)
#define CLASS_1_854DA829CF498712_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19C64B20)
#define CLASS_1_854DA829CF498712_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C649B0)
#define CLASS_1_854DA829CF498712_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C64E10)
#define CLASS_1_854DA829CF498712_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C64E70)
#define CLASS_1_854DA829CF498712__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C65240)
#define CLASS_1_854DA829CF498712__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C64A10)
#define CLASS_1_854DA829CF498712__CTOR_OFFSET UNITYSDK_OFFSET(0x19C649C0)

inline static constexpr unsigned int Class_1_854DA829CF498712_TypeDefinitionIndex = 27314;

class Class_1_854DA829CF498712 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_854DA829CF498712*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_854DA829CF498712*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_854DA829CF498712_TypeDefinitionIndex)->GetStaticField(0x5F290);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_854DA829CF498712_TypeDefinitionIndex)->GetStaticField(0x5F298);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_6; // 0x18
	::Enum_3_7D0231C413D78CFA Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_854DA829CF498712* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_854DA829CF498712*))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_854DA829CF498712*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_854DA829CF498712*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_854DA829CF498712* Clone()
	{
		return ((::Class_1_854DA829CF498712*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_CLONE_OFFSET))(this);
	}

	::Enum_3_7D0231C413D78CFA Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_7D0231C413D78CFA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_854DA829CF498712* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_854DA829CF498712*))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_854DA829CF498712* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_854DA829CF498712*))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_854DA829CF498712_MERGEFROM_1_OFFSET))(this, a1);
	}
};
