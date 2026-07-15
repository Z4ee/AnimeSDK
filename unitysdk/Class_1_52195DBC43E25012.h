#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8CC61AD64FF9091_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_52195DBC43E25012_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEB9870)
#define CLASS_1_52195DBC43E25012_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEB92A0)
#define CLASS_1_52195DBC43E25012_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEB9530)
#define CLASS_1_52195DBC43E25012_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEB93B0)
#define CLASS_1_52195DBC43E25012_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEB96B0)
#define CLASS_1_52195DBC43E25012_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEB9A10)
#define CLASS_1_52195DBC43E25012_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEB9940)
#define CLASS_1_52195DBC43E25012_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CEB9390)
#define CLASS_1_52195DBC43E25012_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CEB9370)
#define CLASS_1_52195DBC43E25012_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CEB9190)
#define CLASS_1_52195DBC43E25012_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CEB93A0)
#define CLASS_1_52195DBC43E25012_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CEB9380)
#define CLASS_1_52195DBC43E25012_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEB91C0)
#define CLASS_1_52195DBC43E25012_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEB9730)
#define CLASS_1_52195DBC43E25012_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEB9790)
#define CLASS_1_52195DBC43E25012__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB9BA0)
#define CLASS_1_52195DBC43E25012__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEB91E0)
#define CLASS_1_52195DBC43E25012__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB91D0)

inline static constexpr unsigned int Class_1_52195DBC43E25012_TypeDefinitionIndex = 31779;

class Class_1_52195DBC43E25012 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_52195DBC43E25012*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_52195DBC43E25012*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52195DBC43E25012_TypeDefinitionIndex)->GetStaticField(0x43430);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Class_1_D8CC61AD64FF9091_8* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_52195DBC43E25012* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52195DBC43E25012*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_52195DBC43E25012*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_52195DBC43E25012*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_52195DBC43E25012* Clone()
	{
		return ((::Class_1_52195DBC43E25012*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_CLONE_OFFSET))(this);
	}

	::Class_1_D8CC61AD64FF9091_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D8CC61AD64FF9091_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D8CC61AD64FF9091_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_8*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_52195DBC43E25012* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52195DBC43E25012*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_52195DBC43E25012* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52195DBC43E25012*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_52195DBC43E25012_MERGEFROM_1_OFFSET))(this, a1);
	}
};
