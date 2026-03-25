#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_24.h"
#include "unitysdk/System/Object.h"

class Class_1_5FD61A8620B0277F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC225A1BAAB9FACC_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18130A90)
#define CLASS_1_AC225A1BAAB9FACC_3_CLONE_OFFSET UNITYSDK_OFFSET(0x18130650)
#define CLASS_1_AC225A1BAAB9FACC_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18130870)
#define CLASS_1_AC225A1BAAB9FACC_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x18130790)
#define CLASS_1_AC225A1BAAB9FACC_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18130920)
#define CLASS_1_AC225A1BAAB9FACC_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18130D30)
#define CLASS_1_AC225A1BAAB9FACC_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18130C20)
#define CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18130770)
#define CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18130730)
#define CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18130760)
#define CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18130780)
#define CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18130740)
#define CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18130750)
#define CLASS_1_AC225A1BAAB9FACC_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181305A0)
#define CLASS_1_AC225A1BAAB9FACC_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18130970)
#define CLASS_1_AC225A1BAAB9FACC_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x181309D0)
#define CLASS_1_AC225A1BAAB9FACC_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181305C0)
#define CLASS_1_AC225A1BAAB9FACC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x181305B0)

inline static constexpr unsigned int Class_1_AC225A1BAAB9FACC_3_TypeDefinitionIndex = 23983;

class Class_1_AC225A1BAAB9FACC_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_5FD61A8620B0277F* Field_1_2; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_DB663931210BBC27_24 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC225A1BAAB9FACC_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_3*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC225A1BAAB9FACC_3* Clone()
	{
		return ((::Class_1_AC225A1BAAB9FACC_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_CLONE_OFFSET))(this);
	}

	::Class_1_5FD61A8620B0277F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FD61A8620B0277F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FD61A8620B0277F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FD61A8620B0277F*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_24 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_24 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC225A1BAAB9FACC_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_3*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC225A1BAAB9FACC_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC225A1BAAB9FACC_3*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC225A1BAAB9FACC_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
