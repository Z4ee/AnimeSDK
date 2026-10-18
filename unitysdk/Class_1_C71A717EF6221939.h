#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C71A717EF6221939_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D7BB0)
#define CLASS_1_C71A717EF6221939_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D75F0)
#define CLASS_1_C71A717EF6221939_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D78A0)
#define CLASS_1_C71A717EF6221939_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D76F0)
#define CLASS_1_C71A717EF6221939_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D7A20)
#define CLASS_1_C71A717EF6221939_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D7D50)
#define CLASS_1_C71A717EF6221939_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D7CC0)
#define CLASS_1_C71A717EF6221939_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E0D76D0)
#define CLASS_1_C71A717EF6221939_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0D74F0)
#define CLASS_1_C71A717EF6221939_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E0D76C0)
#define CLASS_1_C71A717EF6221939_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E0D76E0)
#define CLASS_1_C71A717EF6221939_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E0D76B0)
#define CLASS_1_C71A717EF6221939_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7550)
#define CLASS_1_C71A717EF6221939_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D7A60)
#define CLASS_1_C71A717EF6221939_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D7AC0)
#define CLASS_1_C71A717EF6221939__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7F00)
#define CLASS_1_C71A717EF6221939__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D7570)
#define CLASS_1_C71A717EF6221939__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7560)

inline static constexpr unsigned int Class_1_C71A717EF6221939_TypeDefinitionIndex = 25256;

class Class_1_C71A717EF6221939 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C71A717EF6221939_TypeDefinitionIndex)->GetStaticField(0x189E0);
	}
	// static const ::System::Int32 NJEHFFGLKOE = 0x1; // 0x0
	// static const ::System::Int32 INIIODPAACA = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_21DCD4640D389503_7* MOFJDAHGHJM; // 0x18
	::Enum_3_DFCB42601400F441 NMOKBGIAPKK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C71A717EF6221939* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C71A717EF6221939* Clone()
	{
		return ((::Class_1_C71A717EF6221939*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_CLONE_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_7*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C71A717EF6221939* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C71A717EF6221939*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C71A717EF6221939* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_MERGEFROM_1_OFFSET))(this, a1);
	}
};
