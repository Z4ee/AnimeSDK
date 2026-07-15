#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F96E8997F9D5BB1_4;
class Class_1_56A8C5147B322CD2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E292ED717571B1DC_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE363E0)
#define CLASS_1_E292ED717571B1DC_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE35CB0)
#define CLASS_1_E292ED717571B1DC_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE35F70)
#define CLASS_1_E292ED717571B1DC_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE35D40)
#define CLASS_1_E292ED717571B1DC_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE361A0)
#define CLASS_1_E292ED717571B1DC_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE365C0)
#define CLASS_1_E292ED717571B1DC_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE364E0)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CE35CE0)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CE35D20)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CE35D00)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CE35BA0)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CE35CF0)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CE35D30)
#define CLASS_1_E292ED717571B1DC_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CE35D10)
#define CLASS_1_E292ED717571B1DC_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE35BD0)
#define CLASS_1_E292ED717571B1DC_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE36240)
#define CLASS_1_E292ED717571B1DC_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE362A0)
#define CLASS_1_E292ED717571B1DC_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE36790)
#define CLASS_1_E292ED717571B1DC_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE35BF0)
#define CLASS_1_E292ED717571B1DC_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE35BE0)

inline static constexpr unsigned int Class_1_E292ED717571B1DC_7_TypeDefinitionIndex = 32096;

class Class_1_E292ED717571B1DC_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E292ED717571B1DC_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E292ED717571B1DC_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E292ED717571B1DC_7_TypeDefinitionIndex)->GetStaticField(0x4FBA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_56A8C5147B322CD2* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Class_1_4F96E8997F9D5BB1_4* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E292ED717571B1DC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E292ED717571B1DC_7*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E292ED717571B1DC_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E292ED717571B1DC_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E292ED717571B1DC_7* Clone()
	{
		return ((::Class_1_E292ED717571B1DC_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4F96E8997F9D5BB1_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4F96E8997F9D5BB1_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4F96E8997F9D5BB1_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F96E8997F9D5BB1_4*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_56A8C5147B322CD2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_56A8C5147B322CD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_56A8C5147B322CD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56A8C5147B322CD2*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E292ED717571B1DC_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E292ED717571B1DC_7*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E292ED717571B1DC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E292ED717571B1DC_7*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E292ED717571B1DC_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
