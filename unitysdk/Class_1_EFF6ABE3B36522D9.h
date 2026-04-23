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

#define CLASS_1_EFF6ABE3B36522D9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1996E6F0)
#define CLASS_1_EFF6ABE3B36522D9_CLONE_OFFSET UNITYSDK_OFFSET(0x1996E1C0)
#define CLASS_1_EFF6ABE3B36522D9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1996E360)
#define CLASS_1_EFF6ABE3B36522D9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1996E2A0)
#define CLASS_1_EFF6ABE3B36522D9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1996E420)
#define CLASS_1_EFF6ABE3B36522D9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1996EA40)
#define CLASS_1_EFF6ABE3B36522D9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1996E9C0)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1996E220)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1996E240)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1996E260)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1996E280)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1996E200)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1996E1F0)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1996E090)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1996E230)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1996E250)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1996E270)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1996E290)
#define CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1996E210)
#define CLASS_1_EFF6ABE3B36522D9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1996E0C0)
#define CLASS_1_EFF6ABE3B36522D9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1996E540)
#define CLASS_1_EFF6ABE3B36522D9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1996E5A0)
#define CLASS_1_EFF6ABE3B36522D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1996EB70)
#define CLASS_1_EFF6ABE3B36522D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1996E120)
#define CLASS_1_EFF6ABE3B36522D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1996E0D0)

inline static constexpr unsigned int Class_1_EFF6ABE3B36522D9_TypeDefinitionIndex = 24598;

class Class_1_EFF6ABE3B36522D9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFF6ABE3B36522D9_TypeDefinitionIndex)->GetStaticField(0x512D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFF6ABE3B36522D9_TypeDefinitionIndex)->GetStaticField(0x512D8);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::UInt32 Field_1_14; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EFF6ABE3B36522D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EFF6ABE3B36522D9* Clone()
	{
		return ((::Class_1_EFF6ABE3B36522D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EFF6ABE3B36522D9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EFF6ABE3B36522D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
