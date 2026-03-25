#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5CF1DDAFE12F0E87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ED1640)
#define CLASS_1_5CF1DDAFE12F0E87_CLONE_OFFSET UNITYSDK_OFFSET(0x17ED1150)
#define CLASS_1_5CF1DDAFE12F0E87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ED1290)
#define CLASS_1_5CF1DDAFE12F0E87_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ED1230)
#define CLASS_1_5CF1DDAFE12F0E87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ED1370)
#define CLASS_1_5CF1DDAFE12F0E87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ED19D0)
#define CLASS_1_5CF1DDAFE12F0E87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ED1900)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17ED11E0)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17ED1200)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17ED11C0)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17ED11B0)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17ED1220)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17ED11F0)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17ED1210)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17ED11D0)
#define CLASS_1_5CF1DDAFE12F0E87_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17ED11A0)
#define CLASS_1_5CF1DDAFE12F0E87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ED1030)
#define CLASS_1_5CF1DDAFE12F0E87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ED1480)
#define CLASS_1_5CF1DDAFE12F0E87_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ED14E0)
#define CLASS_1_5CF1DDAFE12F0E87__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ED1AF0)
#define CLASS_1_5CF1DDAFE12F0E87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ED1090)
#define CLASS_1_5CF1DDAFE12F0E87__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED1040)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_TypeDefinitionIndex = 23117;

class Class_1_5CF1DDAFE12F0E87 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_3*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_TypeDefinitionIndex)->GetStaticField(0x2C0C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_3*>* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::Enum_3_01618AD0437C8486 Field_1_2; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5CF1DDAFE12F0E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5CF1DDAFE12F0E87* Clone()
	{
		return ((::Class_1_5CF1DDAFE12F0E87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5CF1DDAFE12F0E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5CF1DDAFE12F0E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
