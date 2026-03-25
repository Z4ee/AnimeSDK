#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_44.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C2C9A7740D1A7E61_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F67BB0)
#define CLASS_1_C2C9A7740D1A7E61_CLONE_OFFSET UNITYSDK_OFFSET(0x17F67720)
#define CLASS_1_C2C9A7740D1A7E61_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F67880)
#define CLASS_1_C2C9A7740D1A7E61_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F677C0)
#define CLASS_1_C2C9A7740D1A7E61_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F67930)
#define CLASS_1_C2C9A7740D1A7E61_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F67DB0)
#define CLASS_1_C2C9A7740D1A7E61_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F67D50)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F67750)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F67780)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17F67790)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F67760)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F67770)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F677B0)
#define CLASS_1_C2C9A7740D1A7E61_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F677A0)
#define CLASS_1_C2C9A7740D1A7E61_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F67620)
#define CLASS_1_C2C9A7740D1A7E61_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F67A40)
#define CLASS_1_C2C9A7740D1A7E61_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F67AA0)
#define CLASS_1_C2C9A7740D1A7E61__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F67EB0)
#define CLASS_1_C2C9A7740D1A7E61__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F67680)
#define CLASS_1_C2C9A7740D1A7E61__CTOR_OFFSET UNITYSDK_OFFSET(0x17F67630)

inline static constexpr unsigned int Class_1_C2C9A7740D1A7E61_TypeDefinitionIndex = 25121;

class Class_1_C2C9A7740D1A7E61 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2C9A7740D1A7E61_TypeDefinitionIndex)->GetStaticField(0x29110);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_9; // 0x20
	::Enum_3_0A3761FE34514D6C_44 Field_1_4; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C2C9A7740D1A7E61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2C9A7740D1A7E61*))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C2C9A7740D1A7E61* Clone()
	{
		return ((::Class_1_C2C9A7740D1A7E61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_44 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_44(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_44 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_44))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C2C9A7740D1A7E61* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C2C9A7740D1A7E61*))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C2C9A7740D1A7E61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2C9A7740D1A7E61*))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C2C9A7740D1A7E61_MERGEFROM_1_OFFSET))(this, a1);
	}
};
