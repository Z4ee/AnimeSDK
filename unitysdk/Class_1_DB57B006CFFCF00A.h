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

#define CLASS_1_DB57B006CFFCF00A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA1BD20)
#define CLASS_1_DB57B006CFFCF00A_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA1B5D0)
#define CLASS_1_DB57B006CFFCF00A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA1B860)
#define CLASS_1_DB57B006CFFCF00A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA1B730)
#define CLASS_1_DB57B006CFFCF00A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA1B980)
#define CLASS_1_DB57B006CFFCF00A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA1C120)
#define CLASS_1_DB57B006CFFCF00A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA1C050)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CA1B690)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CA1B6B0)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1CA1B6D0)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1CA1B6F0)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1CA1B710)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CA1B650)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CA1B500)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1CA1B680)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1CA1B670)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CA1B6A0)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CA1B6C0)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1CA1B6E0)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1CA1B700)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1CA1B720)
#define CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CA1B660)
#define CLASS_1_DB57B006CFFCF00A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B530)
#define CLASS_1_DB57B006CFFCF00A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA1BA20)
#define CLASS_1_DB57B006CFFCF00A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA1BA80)
#define CLASS_1_DB57B006CFFCF00A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA1C260)
#define CLASS_1_DB57B006CFFCF00A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA1B550)
#define CLASS_1_DB57B006CFFCF00A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B540)

inline static constexpr unsigned int Class_1_DB57B006CFFCF00A_TypeDefinitionIndex = 25243;

class Class_1_DB57B006CFFCF00A : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB57B006CFFCF00A_TypeDefinitionIndex)->GetStaticField(0x4430);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Proto::ItemList* Field_1_9; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DB57B006CFFCF00A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DB57B006CFFCF00A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DB57B006CFFCF00A* Clone()
	{
		return ((::Class_1_DB57B006CFFCF00A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DB57B006CFFCF00A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DB57B006CFFCF00A*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DB57B006CFFCF00A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DB57B006CFFCF00A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
