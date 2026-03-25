#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_7.h"
#include "unitysdk/System/Object.h"

class Class_1_D2520FBD61B50E07;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B6D38458ABFFB84C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180105D0)
#define CLASS_1_B6D38458ABFFB84C_CLONE_OFFSET UNITYSDK_OFFSET(0x1800FF30)
#define CLASS_1_B6D38458ABFFB84C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18010110)
#define CLASS_1_B6D38458ABFFB84C_EQUALS_OFFSET UNITYSDK_OFFSET(0x180100B0)
#define CLASS_1_B6D38458ABFFB84C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180102D0)
#define CLASS_1_B6D38458ABFFB84C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18010850)
#define CLASS_1_B6D38458ABFFB84C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18010780)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18010090)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18010050)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18010040)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180100A0)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x18010080)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x18010020)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18010060)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18010030)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x18010070)
#define CLASS_1_B6D38458ABFFB84C_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x18010010)
#define CLASS_1_B6D38458ABFFB84C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1800FE70)
#define CLASS_1_B6D38458ABFFB84C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18010420)
#define CLASS_1_B6D38458ABFFB84C_WRITETO_OFFSET UNITYSDK_OFFSET(0x18010480)
#define CLASS_1_B6D38458ABFFB84C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1800FE90)
#define CLASS_1_B6D38458ABFFB84C__CTOR_OFFSET UNITYSDK_OFFSET(0x1800FE80)

inline static constexpr unsigned int Class_1_B6D38458ABFFB84C_TypeDefinitionIndex = 23701;

class Class_1_B6D38458ABFFB84C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_D2520FBD61B50E07* Field_1_6; // 0x18
	::Enum_3_71AA90D596A09AC8_7 Field_1_4; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::Double Field_1_8; // 0x28
	::System::Double Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B6D38458ABFFB84C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6D38458ABFFB84C*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B6D38458ABFFB84C* Clone()
	{
		return ((::Class_1_B6D38458ABFFB84C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_D2520FBD61B50E07* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D2520FBD61B50E07*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D2520FBD61B50E07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B6D38458ABFFB84C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B6D38458ABFFB84C*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B6D38458ABFFB84C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6D38458ABFFB84C*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B6D38458ABFFB84C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
