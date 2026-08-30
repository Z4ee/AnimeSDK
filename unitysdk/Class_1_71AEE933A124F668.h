#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_71AEE933A124F668_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF1F60)
#define CLASS_1_71AEE933A124F668_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF1980)
#define CLASS_1_71AEE933A124F668_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF1A60)
#define CLASS_1_71AEE933A124F668_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF1A30)
#define CLASS_1_71AEE933A124F668_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF1B30)
#define CLASS_1_71AEE933A124F668_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF2250)
#define CLASS_1_71AEE933A124F668_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF21A0)
#define CLASS_1_71AEE933A124F668_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DEF19E0)
#define CLASS_1_71AEE933A124F668_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1DEF19C0)
#define CLASS_1_71AEE933A124F668_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DEF1A00)
#define CLASS_1_71AEE933A124F668_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DEF17B0)
#define CLASS_1_71AEE933A124F668_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DEF19F0)
#define CLASS_1_71AEE933A124F668_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1DEF19B0)
#define CLASS_1_71AEE933A124F668_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DEF1A20)
#define CLASS_1_71AEE933A124F668_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x1DEF19D0)
#define CLASS_1_71AEE933A124F668_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DEF1A10)
#define CLASS_1_71AEE933A124F668_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF17E0)
#define CLASS_1_71AEE933A124F668_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF1CB0)
#define CLASS_1_71AEE933A124F668_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF1D10)
#define CLASS_1_71AEE933A124F668__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF23A0)
#define CLASS_1_71AEE933A124F668__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF1870)
#define CLASS_1_71AEE933A124F668__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF17F0)

inline static constexpr unsigned int Class_1_71AEE933A124F668_TypeDefinitionIndex = 33426;

class Class_1_71AEE933A124F668 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_LHGPCNNBOCL()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71AEE933A124F668_TypeDefinitionIndex)->GetStaticField(0x36000);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_71AEE933A124F668*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_71AEE933A124F668*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71AEE933A124F668_TypeDefinitionIndex)->GetStaticField(0x36008);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEHKMCNBIBK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71AEE933A124F668_TypeDefinitionIndex)->GetStaticField(0x36010);
	}
	// static const ::System::Int32 EDMAHPIGIME = 0x6; // 0x0
	// static const ::System::Int32 JEALEDAFMPN = 0x4; // 0x0
	// static const ::System::Int32 IEAPGPOMBIN = 0xB; // 0x0
	// static const ::System::Int32 AGPFCCANNFF = 0x8; // 0x0
	// static const ::System::Int32 HPFJDAGCAAM = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLMPIGIKIOD; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* DFFEGIMOJGB; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::Boolean PHKEIKGJKOJ; // 0x28
	::System::UInt32 FLBKCMIIFFP; // 0x2C
	::System::Int64 GFKNDJJHLIB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_71AEE933A124F668* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71AEE933A124F668*))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_71AEE933A124F668*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_71AEE933A124F668*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_71AEE933A124F668* Clone()
	{
		return ((::Class_1_71AEE933A124F668*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_71AEE933A124F668* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_71AEE933A124F668*))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_71AEE933A124F668* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71AEE933A124F668*))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_71AEE933A124F668_MERGEFROM_1_OFFSET))(this, a1);
	}
};
