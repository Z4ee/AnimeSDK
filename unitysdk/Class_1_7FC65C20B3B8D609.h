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

#define CLASS_1_7FC65C20B3B8D609_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C37510)
#define CLASS_1_7FC65C20B3B8D609_CLONE_OFFSET UNITYSDK_OFFSET(0x19C37030)
#define CLASS_1_7FC65C20B3B8D609_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C37260)
#define CLASS_1_7FC65C20B3B8D609_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C37180)
#define CLASS_1_7FC65C20B3B8D609_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C37330)
#define CLASS_1_7FC65C20B3B8D609_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C378E0)
#define CLASS_1_7FC65C20B3B8D609_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C37820)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C37120)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19C37140)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19C37160)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C37100)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19C370D0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C36F60)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19C370F0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19C370E0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C37130)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19C37150)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19C37170)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C37110)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19C370C0)
#define CLASS_1_7FC65C20B3B8D609_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C36F90)
#define CLASS_1_7FC65C20B3B8D609_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C37390)
#define CLASS_1_7FC65C20B3B8D609_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C373F0)
#define CLASS_1_7FC65C20B3B8D609__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C37A10)
#define CLASS_1_7FC65C20B3B8D609__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C36FB0)
#define CLASS_1_7FC65C20B3B8D609__CTOR_OFFSET UNITYSDK_OFFSET(0x19C36FA0)

inline static constexpr unsigned int Class_1_7FC65C20B3B8D609_TypeDefinitionIndex = 28369;

class Class_1_7FC65C20B3B8D609 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FC65C20B3B8D609_TypeDefinitionIndex)->GetStaticField(0x5AF20);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::ItemList* Field_1_5; // 0x18
	::System::UInt32 Field_1_13; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::System::UInt64 Field_1_3; // 0x28
	::System::UInt32 Field_1_9; // 0x30
	::System::UInt32 Field_1_11; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FC65C20B3B8D609* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FC65C20B3B8D609*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FC65C20B3B8D609* Clone()
	{
		return ((::Class_1_7FC65C20B3B8D609*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FC65C20B3B8D609* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FC65C20B3B8D609*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FC65C20B3B8D609* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FC65C20B3B8D609*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_MERGEFROM_1_OFFSET))(this, a1);
	}
};
