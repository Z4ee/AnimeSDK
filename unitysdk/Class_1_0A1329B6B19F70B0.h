#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A1329B6B19F70B0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182D9210)
#define CLASS_1_0A1329B6B19F70B0_CLONE_OFFSET UNITYSDK_OFFSET(0x182D8C60)
#define CLASS_1_0A1329B6B19F70B0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182D8E50)
#define CLASS_1_0A1329B6B19F70B0_EQUALS_OFFSET UNITYSDK_OFFSET(0x182D8D60)
#define CLASS_1_0A1329B6B19F70B0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182D8F10)
#define CLASS_1_0A1329B6B19F70B0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182D9590)
#define CLASS_1_0A1329B6B19F70B0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182D9510)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x182D8CD0)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x182D8CF0)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x182D8D20)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x182D8D40)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182D8CB0)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x182D8D10)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x182D8CE0)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x182D8D00)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x182D8D30)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x182D8D50)
#define CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182D8CC0)
#define CLASS_1_0A1329B6B19F70B0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182D8B60)
#define CLASS_1_0A1329B6B19F70B0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182D9030)
#define CLASS_1_0A1329B6B19F70B0_WRITETO_OFFSET UNITYSDK_OFFSET(0x182D9090)
#define CLASS_1_0A1329B6B19F70B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D96E0)
#define CLASS_1_0A1329B6B19F70B0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182D8BC0)
#define CLASS_1_0A1329B6B19F70B0__CTOR_OFFSET UNITYSDK_OFFSET(0x182D8B70)

inline static constexpr unsigned int Class_1_0A1329B6B19F70B0_TypeDefinitionIndex = 23237;

class Class_1_0A1329B6B19F70B0 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A1329B6B19F70B0_TypeDefinitionIndex)->GetStaticField(0x30BF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_11; // 0x20
	::System::UInt32 Field_1_13; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A1329B6B19F70B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A1329B6B19F70B0* Clone()
	{
		return ((::Class_1_0A1329B6B19F70B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A1329B6B19F70B0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A1329B6B19F70B0*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A1329B6B19F70B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
