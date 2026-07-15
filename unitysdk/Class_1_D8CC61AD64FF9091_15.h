#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C96FC73F1B756C65;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8CC61AD64FF9091_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEA0810)
#define CLASS_1_D8CC61AD64FF9091_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEA01D0)
#define CLASS_1_D8CC61AD64FF9091_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEA0410)
#define CLASS_1_D8CC61AD64FF9091_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEA0290)
#define CLASS_1_D8CC61AD64FF9091_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEA0590)
#define CLASS_1_D8CC61AD64FF9091_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEA09E0)
#define CLASS_1_D8CC61AD64FF9091_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEA08E0)
#define CLASS_1_D8CC61AD64FF9091_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CEA0270)
#define CLASS_1_D8CC61AD64FF9091_15_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CEA0250)
#define CLASS_1_D8CC61AD64FF9091_15_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CEA0110)
#define CLASS_1_D8CC61AD64FF9091_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CEA0280)
#define CLASS_1_D8CC61AD64FF9091_15_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CEA0260)
#define CLASS_1_D8CC61AD64FF9091_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEA0140)
#define CLASS_1_D8CC61AD64FF9091_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEA06D0)
#define CLASS_1_D8CC61AD64FF9091_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEA0730)
#define CLASS_1_D8CC61AD64FF9091_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA0BB0)
#define CLASS_1_D8CC61AD64FF9091_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEA0160)
#define CLASS_1_D8CC61AD64FF9091_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA0150)

inline static constexpr unsigned int Class_1_D8CC61AD64FF9091_15_TypeDefinitionIndex = 26990;

class Class_1_D8CC61AD64FF9091_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_15*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8CC61AD64FF9091_15_TypeDefinitionIndex)->GetStaticField(0x33E90);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_C96FC73F1B756C65* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8CC61AD64FF9091_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_15*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_15*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8CC61AD64FF9091_15* Clone()
	{
		return ((::Class_1_D8CC61AD64FF9091_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_CLONE_OFFSET))(this);
	}

	::Class_1_C96FC73F1B756C65* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C96FC73F1B756C65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C96FC73F1B756C65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C96FC73F1B756C65*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8CC61AD64FF9091_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_15*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8CC61AD64FF9091_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_15*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
