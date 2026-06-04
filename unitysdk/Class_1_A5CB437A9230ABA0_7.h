#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_794;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_A5CB437A9230ABA0_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3BBC40)
#define CLASS_1_A5CB437A9230ABA0_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3BB790)
#define CLASS_1_A5CB437A9230ABA0_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3BB9C0)
#define CLASS_1_A5CB437A9230ABA0_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3BB8D0)
#define CLASS_1_A5CB437A9230ABA0_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3BBAB0)
#define CLASS_1_A5CB437A9230ABA0_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3BBE80)
#define CLASS_1_A5CB437A9230ABA0_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3BBD50)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A3BB890)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A3BB870)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A3BB670)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A3BB8C0)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A3BB8B0)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A3BB8A0)
#define CLASS_1_A5CB437A9230ABA0_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A3BB880)
#define CLASS_1_A5CB437A9230ABA0_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3BB6A0)
#define CLASS_1_A5CB437A9230ABA0_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3BBB40)
#define CLASS_1_A5CB437A9230ABA0_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3BBBA0)
#define CLASS_1_A5CB437A9230ABA0_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3BC090)
#define CLASS_1_A5CB437A9230ABA0_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3BB6C0)
#define CLASS_1_A5CB437A9230ABA0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BB6B0)

inline static constexpr unsigned int Class_1_A5CB437A9230ABA0_7_TypeDefinitionIndex = 30895;

class Class_1_A5CB437A9230ABA0_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A5CB437A9230ABA0_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A5CB437A9230ABA0_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5CB437A9230ABA0_7_TypeDefinitionIndex)->GetStaticField(0x60510);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_D17272E82AE804C2_794* Field_1_4; // 0x10
	::Proto::ItemList* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A5CB437A9230ABA0_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5CB437A9230ABA0_7*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A5CB437A9230ABA0_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A5CB437A9230ABA0_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A5CB437A9230ABA0_7* Clone()
	{
		return ((::Class_1_A5CB437A9230ABA0_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_794* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_794*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_794* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_794*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A5CB437A9230ABA0_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A5CB437A9230ABA0_7*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A5CB437A9230ABA0_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5CB437A9230ABA0_7*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5CB437A9230ABA0_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
