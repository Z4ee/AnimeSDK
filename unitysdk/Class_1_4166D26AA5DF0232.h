#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_6;
class Class_1_FFE5B8A52EC38E9C_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4166D26AA5DF0232_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1FF300)
#define CLASS_1_4166D26AA5DF0232_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1FEDA0)
#define CLASS_1_4166D26AA5DF0232_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1FEFB0)
#define CLASS_1_4166D26AA5DF0232_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1FEE90)
#define CLASS_1_4166D26AA5DF0232_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1FF0C0)
#define CLASS_1_4166D26AA5DF0232_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1FF6F0)
#define CLASS_1_4166D26AA5DF0232_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1FF5F0)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A1FEE70)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A1FEE30)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A1FEDF0)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A1FEDD0)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1A1FEE60)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A1FEE20)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A1FEC40)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A1FEE80)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A1FEE40)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A1FEE00)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A1FEDE0)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1A1FEE50)
#define CLASS_1_4166D26AA5DF0232_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A1FEE10)
#define CLASS_1_4166D26AA5DF0232_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1FEC70)
#define CLASS_1_4166D26AA5DF0232_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1FF140)
#define CLASS_1_4166D26AA5DF0232_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1FF1A0)
#define CLASS_1_4166D26AA5DF0232__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1FF830)
#define CLASS_1_4166D26AA5DF0232__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1FEC90)
#define CLASS_1_4166D26AA5DF0232__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FEC80)

inline static constexpr unsigned int Class_1_4166D26AA5DF0232_TypeDefinitionIndex = 28856;

class Class_1_4166D26AA5DF0232 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4166D26AA5DF0232*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4166D26AA5DF0232*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4166D26AA5DF0232_TypeDefinitionIndex)->GetStaticField(0x3D620);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Class_1_FFE5B8A52EC38E9C_4* Field_1_7; // 0x10
	::Class_1_EBB10EC01CCC4716_6* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x20
	::Enum_3_F80BFD5B986D5503_4 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::Enum_3_A35B38E5F9115A76_2 Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4166D26AA5DF0232* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4166D26AA5DF0232*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4166D26AA5DF0232*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4166D26AA5DF0232*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4166D26AA5DF0232* Clone()
	{
		return ((::Class_1_4166D26AA5DF0232*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_CLONE_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_6*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_FFE5B8A52EC38E9C_4* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FFE5B8A52EC38E9C_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FFE5B8A52EC38E9C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_4*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Enum_3_F80BFD5B986D5503_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_F80BFD5B986D5503_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_A35B38E5F9115A76_2 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4166D26AA5DF0232* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4166D26AA5DF0232*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4166D26AA5DF0232* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4166D26AA5DF0232*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4166D26AA5DF0232_MERGEFROM_1_OFFSET))(this, a1);
	}
};
