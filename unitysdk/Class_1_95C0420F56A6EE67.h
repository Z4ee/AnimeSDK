#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_36.h"
#include "unitysdk/System/Object.h"

class Class_1_2325E4073E18D39D_2;
class Class_1_FA4F4A67B1C04320_310;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_95C0420F56A6EE67_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FACBE0)
#define CLASS_1_95C0420F56A6EE67_CLONE_OFFSET UNITYSDK_OFFSET(0x17FAC740)
#define CLASS_1_95C0420F56A6EE67_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FAC940)
#define CLASS_1_95C0420F56A6EE67_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FAC810)
#define CLASS_1_95C0420F56A6EE67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FACA30)
#define CLASS_1_95C0420F56A6EE67_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FACEE0)
#define CLASS_1_95C0420F56A6EE67_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FACDA0)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FAC7B0)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17FAC7F0)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FAC790)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17FAC7E0)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FAC7C0)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17FAC800)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FAC7A0)
#define CLASS_1_95C0420F56A6EE67_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17FAC7D0)
#define CLASS_1_95C0420F56A6EE67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FAC630)
#define CLASS_1_95C0420F56A6EE67_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FACAA0)
#define CLASS_1_95C0420F56A6EE67_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FACB00)
#define CLASS_1_95C0420F56A6EE67__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FAC650)
#define CLASS_1_95C0420F56A6EE67__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAC640)

inline static constexpr unsigned int Class_1_95C0420F56A6EE67_TypeDefinitionIndex = 24570;

class Class_1_95C0420F56A6EE67 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Class_1_FA4F4A67B1C04320_310* Field_1_8; // 0x10
	::Class_1_2325E4073E18D39D_2* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::Enum_3_0A3761FE34514D6C_36 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_95C0420F56A6EE67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_95C0420F56A6EE67* Clone()
	{
		return ((::Class_1_95C0420F56A6EE67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_CLONE_OFFSET))(this);
	}

	::Class_1_2325E4073E18D39D_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2325E4073E18D39D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_2325E4073E18D39D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2325E4073E18D39D_2*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_36 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_36(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_36 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_36))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_FA4F4A67B1C04320_310* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FA4F4A67B1C04320_310*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FA4F4A67B1C04320_310* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_310*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_95C0420F56A6EE67* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95C0420F56A6EE67*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_95C0420F56A6EE67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_95C0420F56A6EE67_MERGEFROM_1_OFFSET))(this, a1);
	}
};
