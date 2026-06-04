#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_46.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DA110330A4944467_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5B03E0)
#define CLASS_1_DA110330A4944467_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5B00E0)
#define CLASS_1_DA110330A4944467_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5B0250)
#define CLASS_1_DA110330A4944467_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5B01A0)
#define CLASS_1_DA110330A4944467_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5B02C0)
#define CLASS_1_DA110330A4944467_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5B0500)
#define CLASS_1_DA110330A4944467_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5B04C0)
#define CLASS_1_DA110330A4944467_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5B0020)
#define CLASS_1_DA110330A4944467_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A5B0170)
#define CLASS_1_DA110330A4944467_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A5B0160)
#define CLASS_1_DA110330A4944467_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A5B0190)
#define CLASS_1_DA110330A4944467_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A5B0180)
#define CLASS_1_DA110330A4944467_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5B0080)
#define CLASS_1_DA110330A4944467_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5B02F0)
#define CLASS_1_DA110330A4944467_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5B0350)
#define CLASS_1_DA110330A4944467__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5B0680)
#define CLASS_1_DA110330A4944467__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5B00A0)
#define CLASS_1_DA110330A4944467__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B0090)

inline static constexpr unsigned int Class_1_DA110330A4944467_TypeDefinitionIndex = 28422;

class Class_1_DA110330A4944467 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DA110330A4944467*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DA110330A4944467*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA110330A4944467_TypeDefinitionIndex)->GetStaticField(0x16C30);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_46 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DA110330A4944467* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA110330A4944467*))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DA110330A4944467*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DA110330A4944467*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DA110330A4944467* Clone()
	{
		return ((::Class_1_DA110330A4944467*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_46 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_46))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DA110330A4944467* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DA110330A4944467*))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DA110330A4944467* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA110330A4944467*))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DA110330A4944467_MERGEFROM_1_OFFSET))(this, a1);
	}
};
