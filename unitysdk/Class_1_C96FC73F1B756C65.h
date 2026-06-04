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

#define CLASS_1_C96FC73F1B756C65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2A0090)
#define CLASS_1_C96FC73F1B756C65_CLONE_OFFSET UNITYSDK_OFFSET(0x1A29FC20)
#define CLASS_1_C96FC73F1B756C65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A29FD80)
#define CLASS_1_C96FC73F1B756C65_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A29FCC0)
#define CLASS_1_C96FC73F1B756C65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A29FE30)
#define CLASS_1_C96FC73F1B756C65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2A0260)
#define CLASS_1_C96FC73F1B756C65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2A0200)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A29FCA0)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A29FC80)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A29FC50)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A29FAF0)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A29FCB0)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A29FC90)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A29FC70)
#define CLASS_1_C96FC73F1B756C65_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A29FC60)
#define CLASS_1_C96FC73F1B756C65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A29FB20)
#define CLASS_1_C96FC73F1B756C65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A29FF30)
#define CLASS_1_C96FC73F1B756C65_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A29FF90)
#define CLASS_1_C96FC73F1B756C65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2A0350)
#define CLASS_1_C96FC73F1B756C65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A29FB80)
#define CLASS_1_C96FC73F1B756C65__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29FB30)

inline static constexpr unsigned int Class_1_C96FC73F1B756C65_TypeDefinitionIndex = 25675;

class Class_1_C96FC73F1B756C65 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96FC73F1B756C65_TypeDefinitionIndex)->GetStaticField(0x4A550);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96FC73F1B756C65_TypeDefinitionIndex)->GetStaticField(0x4A558);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::Boolean Field_1_9; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C96FC73F1B756C65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C96FC73F1B756C65*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C96FC73F1B756C65* Clone()
	{
		return ((::Class_1_C96FC73F1B756C65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C96FC73F1B756C65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C96FC73F1B756C65*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C96FC73F1B756C65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C96FC73F1B756C65*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
