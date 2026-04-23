#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9C23C0FD87AA6107_Enum_3_FCBB2C507E9B21A3_17.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9C23C0FD87AA6107_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192946B0)
#define CLASS_1_9C23C0FD87AA6107_CLONE_OFFSET UNITYSDK_OFFSET(0x192940D0)
#define CLASS_1_9C23C0FD87AA6107_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192941A0)
#define CLASS_1_9C23C0FD87AA6107_EQUALS_OFFSET UNITYSDK_OFFSET(0x19294140)
#define CLASS_1_9C23C0FD87AA6107_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19294430)
#define CLASS_1_9C23C0FD87AA6107_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19294A20)
#define CLASS_1_9C23C0FD87AA6107_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192948C0)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19294120)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19293D90)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x19294020)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x19293F70)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19294130)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x192940A0)
#define CLASS_1_9C23C0FD87AA6107_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x19293FF0)
#define CLASS_1_9C23C0FD87AA6107_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19293DF0)
#define CLASS_1_9C23C0FD87AA6107_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192944E0)
#define CLASS_1_9C23C0FD87AA6107_WRITETO_OFFSET UNITYSDK_OFFSET(0x19294540)
#define CLASS_1_9C23C0FD87AA6107__CCTOR_OFFSET UNITYSDK_OFFSET(0x19294AE0)
#define CLASS_1_9C23C0FD87AA6107__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19293E10)
#define CLASS_1_9C23C0FD87AA6107__CTOR_OFFSET UNITYSDK_OFFSET(0x19293E00)

inline static constexpr unsigned int Class_1_9C23C0FD87AA6107_TypeDefinitionIndex = 26920;

class Class_1_9C23C0FD87AA6107 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9C23C0FD87AA6107*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9C23C0FD87AA6107*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C23C0FD87AA6107_TypeDefinitionIndex)->GetStaticField(0x30810);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_9C23C0FD87AA6107_Enum_3_FCBB2C507E9B21A3_17 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9C23C0FD87AA6107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C23C0FD87AA6107*))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9C23C0FD87AA6107*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9C23C0FD87AA6107*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9C23C0FD87AA6107* Clone()
	{
		return ((::Class_1_9C23C0FD87AA6107*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_9C23C0FD87AA6107_Enum_3_FCBB2C507E9B21A3_17 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_9C23C0FD87AA6107_Enum_3_FCBB2C507E9B21A3_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9C23C0FD87AA6107* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C23C0FD87AA6107*))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9C23C0FD87AA6107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C23C0FD87AA6107*))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9C23C0FD87AA6107_MERGEFROM_1_OFFSET))(this, a1);
	}
};
