#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_48.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1212C47FC4BC6471_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AAF3F70)
#define CLASS_1_1212C47FC4BC6471_CLONE_OFFSET UNITYSDK_OFFSET(0x1AAF3A20)
#define CLASS_1_1212C47FC4BC6471_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AAF3BC0)
#define CLASS_1_1212C47FC4BC6471_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AAF3B00)
#define CLASS_1_1212C47FC4BC6471_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AAF3C80)
#define CLASS_1_1212C47FC4BC6471_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AAF4300)
#define CLASS_1_1212C47FC4BC6471_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AAF4280)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AAF3A90)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AAF3AC0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1AAF3AE0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AAF3A70)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1AAF3A60)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AAF3AB0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AAF38F0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AAF3AA0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AAF3AD0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1AAF3AF0)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AAF3A80)
#define CLASS_1_1212C47FC4BC6471_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1AAF3A50)
#define CLASS_1_1212C47FC4BC6471_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AAF3920)
#define CLASS_1_1212C47FC4BC6471_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AAF3DA0)
#define CLASS_1_1212C47FC4BC6471_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AAF3E00)
#define CLASS_1_1212C47FC4BC6471__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAF4420)
#define CLASS_1_1212C47FC4BC6471__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AAF3980)
#define CLASS_1_1212C47FC4BC6471__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF3930)

inline static constexpr unsigned int Class_1_1212C47FC4BC6471_TypeDefinitionIndex = 29585;

class Class_1_1212C47FC4BC6471 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1212C47FC4BC6471*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1212C47FC4BC6471*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1212C47FC4BC6471_TypeDefinitionIndex)->GetStaticField(0x137B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1212C47FC4BC6471_TypeDefinitionIndex)->GetStaticField(0x137B8);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Enum_3_0A3761FE34514D6C_48 Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1212C47FC4BC6471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471*))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1212C47FC4BC6471*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1212C47FC4BC6471*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1212C47FC4BC6471* Clone()
	{
		return ((::Class_1_1212C47FC4BC6471*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_48 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_48(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_48 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_48))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1212C47FC4BC6471* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1212C47FC4BC6471*))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1212C47FC4BC6471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471*))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1212C47FC4BC6471_MERGEFROM_1_OFFSET))(this, a1);
	}
};
