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

#define CLASS_1_CDDAD0E904A274CD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C964FB0)
#define CLASS_1_CDDAD0E904A274CD_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9649A0)
#define CLASS_1_CDDAD0E904A274CD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C964B20)
#define CLASS_1_CDDAD0E904A274CD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C964A80)
#define CLASS_1_CDDAD0E904A274CD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C964BB0)
#define CLASS_1_CDDAD0E904A274CD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9652E0)
#define CLASS_1_CDDAD0E904A274CD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C965260)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C964A20)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C964A40)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C964A00)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C9649F0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C9649D0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C964860)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C964A30)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C964A50)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C964A10)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C9649E0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C964A70)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C964A60)
#define CLASS_1_CDDAD0E904A274CD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C964890)
#define CLASS_1_CDDAD0E904A274CD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C964CD0)
#define CLASS_1_CDDAD0E904A274CD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C964D30)
#define CLASS_1_CDDAD0E904A274CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C965420)
#define CLASS_1_CDDAD0E904A274CD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9648F0)
#define CLASS_1_CDDAD0E904A274CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9648A0)

inline static constexpr unsigned int Class_1_CDDAD0E904A274CD_TypeDefinitionIndex = 30605;

class Class_1_CDDAD0E904A274CD : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDDAD0E904A274CD_TypeDefinitionIndex)->GetStaticField(0x2C1E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDDAD0E904A274CD_TypeDefinitionIndex)->GetStaticField(0x2C1E8);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::System::Int64 Field_1_10; // 0x20
	::System::Boolean Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30
	::System::UInt32 Field_1_14; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CDDAD0E904A274CD* Clone()
	{
		return ((::Class_1_CDDAD0E904A274CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
