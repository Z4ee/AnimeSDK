#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_902;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_53E3524BA3C44E2B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CCB9CA0)
#define CLASS_1_53E3524BA3C44E2B_CLONE_OFFSET UNITYSDK_OFFSET(0x1CCB9650)
#define CLASS_1_53E3524BA3C44E2B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CCB98F0)
#define CLASS_1_53E3524BA3C44E2B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCB9750)
#define CLASS_1_53E3524BA3C44E2B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCB9A70)
#define CLASS_1_53E3524BA3C44E2B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CCB9E50)
#define CLASS_1_53E3524BA3C44E2B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CCB9D80)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CCB96F0)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CCB9730)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CCB9570)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CCB9700)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CCB9740)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CCB9720)
#define CLASS_1_53E3524BA3C44E2B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CCB9710)
#define CLASS_1_53E3524BA3C44E2B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CCB95A0)
#define CLASS_1_53E3524BA3C44E2B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCB9AD0)
#define CLASS_1_53E3524BA3C44E2B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CCB9B30)
#define CLASS_1_53E3524BA3C44E2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBA020)
#define CLASS_1_53E3524BA3C44E2B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCB95C0)
#define CLASS_1_53E3524BA3C44E2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB95B0)

inline static constexpr unsigned int Class_1_53E3524BA3C44E2B_TypeDefinitionIndex = 31337;

class Class_1_53E3524BA3C44E2B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_53E3524BA3C44E2B*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_53E3524BA3C44E2B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53E3524BA3C44E2B_TypeDefinitionIndex)->GetStaticField(0x67A10);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_D17272E82AE804C2_902* Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_53E3524BA3C44E2B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53E3524BA3C44E2B*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_53E3524BA3C44E2B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_53E3524BA3C44E2B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_53E3524BA3C44E2B* Clone()
	{
		return ((::Class_1_53E3524BA3C44E2B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_902* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_902*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_902* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_902*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_53E3524BA3C44E2B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_53E3524BA3C44E2B*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_53E3524BA3C44E2B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53E3524BA3C44E2B*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53E3524BA3C44E2B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
