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

#define CLASS_1_8AFE572D3B5BA107_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BE3EF0)
#define CLASS_1_8AFE572D3B5BA107_CLONE_OFFSET UNITYSDK_OFFSET(0x19BE39F0)
#define CLASS_1_8AFE572D3B5BA107_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BE3B70)
#define CLASS_1_8AFE572D3B5BA107_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BE3AB0)
#define CLASS_1_8AFE572D3B5BA107_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BE3C30)
#define CLASS_1_8AFE572D3B5BA107_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BE41F0)
#define CLASS_1_8AFE572D3B5BA107_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BE4180)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BE3A90)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x19BE3A80)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19BE3A60)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19BE3A40)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BE38C0)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BE3AA0)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x19BE3A70)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19BE3A50)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19BE3A30)
#define CLASS_1_8AFE572D3B5BA107_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19BE3A20)
#define CLASS_1_8AFE572D3B5BA107_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BE38F0)
#define CLASS_1_8AFE572D3B5BA107_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BE3D70)
#define CLASS_1_8AFE572D3B5BA107_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BE3DD0)
#define CLASS_1_8AFE572D3B5BA107__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BE4300)
#define CLASS_1_8AFE572D3B5BA107__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BE3950)
#define CLASS_1_8AFE572D3B5BA107__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE3900)

inline static constexpr unsigned int Class_1_8AFE572D3B5BA107_TypeDefinitionIndex = 27923;

class Class_1_8AFE572D3B5BA107 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AFE572D3B5BA107_TypeDefinitionIndex)->GetStaticField(0x534B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AFE572D3B5BA107_TypeDefinitionIndex)->GetStaticField(0x534B8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::Int64 Field_1_8; // 0x28
	::System::Int64 Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8AFE572D3B5BA107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8AFE572D3B5BA107* Clone()
	{
		return ((::Class_1_8AFE572D3B5BA107*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8AFE572D3B5BA107* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8AFE572D3B5BA107*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8AFE572D3B5BA107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_MERGEFROM_1_OFFSET))(this, a1);
	}
};
