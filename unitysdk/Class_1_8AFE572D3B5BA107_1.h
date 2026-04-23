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

#define CLASS_1_8AFE572D3B5BA107_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197E7000)
#define CLASS_1_8AFE572D3B5BA107_1_CLONE_OFFSET UNITYSDK_OFFSET(0x197E6B10)
#define CLASS_1_8AFE572D3B5BA107_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197E6C90)
#define CLASS_1_8AFE572D3B5BA107_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x197E6BD0)
#define CLASS_1_8AFE572D3B5BA107_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197E6D50)
#define CLASS_1_8AFE572D3B5BA107_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197E72B0)
#define CLASS_1_8AFE572D3B5BA107_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197E7240)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x197E6BB0)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x197E6B60)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x197E6B50)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x197E6B80)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197E69E0)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x197E6BC0)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x197E6B70)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x197E6B40)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x197E6BA0)
#define CLASS_1_8AFE572D3B5BA107_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x197E6B90)
#define CLASS_1_8AFE572D3B5BA107_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197E6A10)
#define CLASS_1_8AFE572D3B5BA107_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197E6E80)
#define CLASS_1_8AFE572D3B5BA107_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x197E6EE0)
#define CLASS_1_8AFE572D3B5BA107_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E73C0)
#define CLASS_1_8AFE572D3B5BA107_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197E6A70)
#define CLASS_1_8AFE572D3B5BA107_1__CTOR_OFFSET UNITYSDK_OFFSET(0x197E6A20)

inline static constexpr unsigned int Class_1_8AFE572D3B5BA107_1_TypeDefinitionIndex = 29971;

class Class_1_8AFE572D3B5BA107_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AFE572D3B5BA107_1_TypeDefinitionIndex)->GetStaticField(0x63640);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AFE572D3B5BA107_1_TypeDefinitionIndex)->GetStaticField(0x63648);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::Int64 Field_1_3; // 0x28
	::System::Boolean Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8AFE572D3B5BA107_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107_1*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8AFE572D3B5BA107_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8AFE572D3B5BA107_1* Clone()
	{
		return ((::Class_1_8AFE572D3B5BA107_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8AFE572D3B5BA107_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8AFE572D3B5BA107_1*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8AFE572D3B5BA107_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107_1*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE572D3B5BA107_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
