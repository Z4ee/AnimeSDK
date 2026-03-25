#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/System/Object.h"

class Class_1_8086C4EF1F3D5EA7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC225A1BAAB9FACC_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18138790)
#define CLASS_1_AC225A1BAAB9FACC_2_CLONE_OFFSET UNITYSDK_OFFSET(0x181382A0)
#define CLASS_1_AC225A1BAAB9FACC_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18138450)
#define CLASS_1_AC225A1BAAB9FACC_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x18138390)
#define CLASS_1_AC225A1BAAB9FACC_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18138500)
#define CLASS_1_AC225A1BAAB9FACC_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18138B30)
#define CLASS_1_AC225A1BAAB9FACC_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18138910)
#define CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18138350)
#define CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18138370)
#define CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18138340)
#define CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18138360)
#define CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18138380)
#define CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18138330)
#define CLASS_1_AC225A1BAAB9FACC_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181381B0)
#define CLASS_1_AC225A1BAAB9FACC_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18138670)
#define CLASS_1_AC225A1BAAB9FACC_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x181386D0)
#define CLASS_1_AC225A1BAAB9FACC_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181381D0)
#define CLASS_1_AC225A1BAAB9FACC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x181381C0)

inline static constexpr unsigned int Class_1_AC225A1BAAB9FACC_2_TypeDefinitionIndex = 23674;

class Class_1_AC225A1BAAB9FACC_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::Class_1_8086C4EF1F3D5EA7* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::Enum_3_0A3761FE34514D6C Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC225A1BAAB9FACC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_2*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC225A1BAAB9FACC_2* Clone()
	{
		return ((::Class_1_AC225A1BAAB9FACC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_8086C4EF1F3D5EA7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_8086C4EF1F3D5EA7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8086C4EF1F3D5EA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8086C4EF1F3D5EA7*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC225A1BAAB9FACC_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_2*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC225A1BAAB9FACC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_2*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
