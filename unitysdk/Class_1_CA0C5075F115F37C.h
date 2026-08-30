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

#define CLASS_1_CA0C5075F115F37C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF55B00)
#define CLASS_1_CA0C5075F115F37C_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF554D0)
#define CLASS_1_CA0C5075F115F37C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF55680)
#define CLASS_1_CA0C5075F115F37C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF555B0)
#define CLASS_1_CA0C5075F115F37C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF55710)
#define CLASS_1_CA0C5075F115F37C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF55E20)
#define CLASS_1_CA0C5075F115F37C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF55DB0)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF55520)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1DF55550)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DF55360)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1DF55590)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DF555A0)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF55530)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1DF55580)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DF55570)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1DF55540)
#define CLASS_1_CA0C5075F115F37C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DF55560)
#define CLASS_1_CA0C5075F115F37C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF553C0)
#define CLASS_1_CA0C5075F115F37C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF55850)
#define CLASS_1_CA0C5075F115F37C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF558B0)
#define CLASS_1_CA0C5075F115F37C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF55F40)
#define CLASS_1_CA0C5075F115F37C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF55420)
#define CLASS_1_CA0C5075F115F37C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF553D0)

inline static constexpr unsigned int Class_1_CA0C5075F115F37C_TypeDefinitionIndex = 31324;

class Class_1_CA0C5075F115F37C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_CA0C5075F115F37C*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_CA0C5075F115F37C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA0C5075F115F37C_TypeDefinitionIndex)->GetStaticField(0x519C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LAFIEPLAPED()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA0C5075F115F37C_TypeDefinitionIndex)->GetStaticField(0x519C8);
	}
	// static const ::System::Int32 GNCFICOAAAD = 0xC; // 0x0
	// static const ::System::Int32 EAKLHMMJAJC = 0xF; // 0x0
	// static const ::System::Int32 GCBAMAPEDPJ = 0x4; // 0x0
	// static const ::System::Int32 BDDGFOPHBML = 0x9; // 0x0
	// static const ::System::Int32 ODLGJOLIOKD = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt64 CODDHMMBPND; // 0x20
	::System::UInt32 LNGCPELNFBJ; // 0x28
	::System::Boolean FEKPPGIHMAN; // 0x2C
	::System::Int64 HHCEMNIBHIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CA0C5075F115F37C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_CA0C5075F115F37C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_CA0C5075F115F37C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CA0C5075F115F37C* Clone()
	{
		return ((::Class_1_CA0C5075F115F37C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CA0C5075F115F37C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CA0C5075F115F37C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CA0C5075F115F37C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
