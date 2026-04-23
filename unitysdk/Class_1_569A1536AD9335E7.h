#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_569A1536AD9335E7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C200E0)
#define CLASS_1_569A1536AD9335E7_CLONE_OFFSET UNITYSDK_OFFSET(0x19C1FBC0)
#define CLASS_1_569A1536AD9335E7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C1FCF0)
#define CLASS_1_569A1536AD9335E7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C1FCC0)
#define CLASS_1_569A1536AD9335E7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C1FDC0)
#define CLASS_1_569A1536AD9335E7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C20480)
#define CLASS_1_569A1536AD9335E7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C203F0)
#define CLASS_1_569A1536AD9335E7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C1FC80)
#define CLASS_1_569A1536AD9335E7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C1FC10)
#define CLASS_1_569A1536AD9335E7_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x19C1FCB0)
#define CLASS_1_569A1536AD9335E7_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19C1FC70)
#define CLASS_1_569A1536AD9335E7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19C1FC50)
#define CLASS_1_569A1536AD9335E7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C1FA80)
#define CLASS_1_569A1536AD9335E7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C1FC90)
#define CLASS_1_569A1536AD9335E7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C1FC20)
#define CLASS_1_569A1536AD9335E7_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x19C1FCA0)
#define CLASS_1_569A1536AD9335E7_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19C1FC60)
#define CLASS_1_569A1536AD9335E7_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19C1FC40)
#define CLASS_1_569A1536AD9335E7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19C1FC00)
#define CLASS_1_569A1536AD9335E7_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19C1FC30)
#define CLASS_1_569A1536AD9335E7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19C1FBF0)
#define CLASS_1_569A1536AD9335E7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C1FAB0)
#define CLASS_1_569A1536AD9335E7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C1FF10)
#define CLASS_1_569A1536AD9335E7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C1FF70)
#define CLASS_1_569A1536AD9335E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C205E0)
#define CLASS_1_569A1536AD9335E7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C1FB10)
#define CLASS_1_569A1536AD9335E7__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1FAC0)

inline static constexpr unsigned int Class_1_569A1536AD9335E7_TypeDefinitionIndex = 30689;

class Class_1_569A1536AD9335E7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_569A1536AD9335E7_TypeDefinitionIndex)->GetStaticField(0x2E1E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_569A1536AD9335E7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_569A1536AD9335E7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_569A1536AD9335E7_TypeDefinitionIndex)->GetStaticField(0x2E1E8);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x18
	::System::Int64 Field_1_12; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::Int64 Field_1_16; // 0x30
	::System::UInt32 Field_1_14; // 0x38
	::System::Boolean Field_1_7; // 0x3C
	::System::Boolean Field_1_3; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_569A1536AD9335E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7*))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_569A1536AD9335E7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_569A1536AD9335E7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_569A1536AD9335E7* Clone()
	{
		return ((::Class_1_569A1536AD9335E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_569A1536AD9335E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_569A1536AD9335E7*))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_569A1536AD9335E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7*))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_569A1536AD9335E7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
