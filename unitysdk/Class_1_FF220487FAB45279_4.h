#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_89;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FF220487FAB45279_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D016E30)
#define CLASS_1_FF220487FAB45279_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1D016930)
#define CLASS_1_FF220487FAB45279_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D016A40)
#define CLASS_1_FF220487FAB45279_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D016A10)
#define CLASS_1_FF220487FAB45279_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D016AE0)
#define CLASS_1_FF220487FAB45279_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE006F0)
#define CLASS_1_FF220487FAB45279_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D017130)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D016980)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1D0169A0)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1D0169D0)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1D0169F0)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D016960)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D016810)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1D0169C0)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D016990)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1D0169B0)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1D0169E0)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1D016A00)
#define CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D016970)
#define CLASS_1_FF220487FAB45279_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D016840)
#define CLASS_1_FF220487FAB45279_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D016B60)
#define CLASS_1_FF220487FAB45279_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D016BC0)
#define CLASS_1_FF220487FAB45279_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE00810)
#define CLASS_1_FF220487FAB45279_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D016890)
#define CLASS_1_FF220487FAB45279_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D016850)

inline static constexpr unsigned int Class_1_FF220487FAB45279_4_TypeDefinitionIndex = 30021;

class Class_1_FF220487FAB45279_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FF220487FAB45279_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FF220487FAB45279_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF220487FAB45279_4_TypeDefinitionIndex)->GetStaticField(0x4CE80);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_89*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF220487FAB45279_4_TypeDefinitionIndex)->GetStaticField(0x4CE88);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_89*>* Field_1_9; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FF220487FAB45279_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_4*))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FF220487FAB45279_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FF220487FAB45279_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FF220487FAB45279_4* Clone()
	{
		return ((::Class_1_FF220487FAB45279_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_89*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_89*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FF220487FAB45279_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FF220487FAB45279_4*))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FF220487FAB45279_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_4*))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
