#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_DB57B006CFFCF00A_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19ADBBD0)
#define CLASS_1_DB57B006CFFCF00A_5_CLONE_OFFSET UNITYSDK_OFFSET(0x19ADB500)
#define CLASS_1_DB57B006CFFCF00A_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19ADB6C0)
#define CLASS_1_DB57B006CFFCF00A_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x19ADB690)
#define CLASS_1_DB57B006CFFCF00A_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19ADB880)
#define CLASS_1_DB57B006CFFCF00A_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19ADC100)
#define CLASS_1_DB57B006CFFCF00A_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19ADBFC0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19ADB550)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19ADB5D0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19ADB5F0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19ADB630)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19ADB650)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19ADB670)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19ADB530)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x19ADB5B0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19ADB3E0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x19ADB620)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19ADB580)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x19ADB610)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19ADB570)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19ADB560)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19ADB5E0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19ADB600)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19ADB640)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19ADB660)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19ADB680)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19ADB540)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19ADB5A0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x19ADB5C0)
#define CLASS_1_DB57B006CFFCF00A_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19ADB590)
#define CLASS_1_DB57B006CFFCF00A_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19ADB410)
#define CLASS_1_DB57B006CFFCF00A_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19ADB960)
#define CLASS_1_DB57B006CFFCF00A_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x19ADB9C0)
#define CLASS_1_DB57B006CFFCF00A_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ADC2F0)
#define CLASS_1_DB57B006CFFCF00A_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19ADB430)
#define CLASS_1_DB57B006CFFCF00A_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADB420)

inline static constexpr unsigned int Class_1_DB57B006CFFCF00A_5_TypeDefinitionIndex = 28918;

class Class_1_DB57B006CFFCF00A_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB57B006CFFCF00A_5_TypeDefinitionIndex)->GetStaticField(0x5C9D0);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xC; // 0x0
	::Proto::ItemList* Field_1_17; // 0x10
	::Proto::ItemList* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::System::UInt32 Field_1_19; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_15; // 0x34
	::System::UInt32 Field_1_5; // 0x38
	::System::Boolean Field_1_9; // 0x3C
	::System::Single Field_1_11; // 0x40
	::System::UInt32 Field_1_23; // 0x44
	::System::UInt32 Field_1_21; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DB57B006CFFCF00A_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_5*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DB57B006CFFCF00A_5* Clone()
	{
		return ((::Class_1_DB57B006CFFCF00A_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DB57B006CFFCF00A_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_5*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DB57B006CFFCF00A_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_5*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
