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

#define CLASS_1_2786121EC539E542_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197E4410)
#define CLASS_1_2786121EC539E542_1_CLONE_OFFSET UNITYSDK_OFFSET(0x197E3F40)
#define CLASS_1_2786121EC539E542_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197E4050)
#define CLASS_1_2786121EC539E542_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x197E3FF0)
#define CLASS_1_2786121EC539E542_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197E4120)
#define CLASS_1_2786121EC539E542_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197E4660)
#define CLASS_1_2786121EC539E542_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197E45F0)
#define CLASS_1_2786121EC539E542_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x197E3FC0)
#define CLASS_1_2786121EC539E542_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x197E3FA0)
#define CLASS_1_2786121EC539E542_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197E3D90)
#define CLASS_1_2786121EC539E542_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x197E3FE0)
#define CLASS_1_2786121EC539E542_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x197E3FD0)
#define CLASS_1_2786121EC539E542_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x197E3FB0)
#define CLASS_1_2786121EC539E542_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x197E3F90)
#define CLASS_1_2786121EC539E542_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197E3DF0)
#define CLASS_1_2786121EC539E542_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197E4250)
#define CLASS_1_2786121EC539E542_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x197E42B0)
#define CLASS_1_2786121EC539E542_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E47A0)
#define CLASS_1_2786121EC539E542_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197E3E70)
#define CLASS_1_2786121EC539E542_1__CTOR_OFFSET UNITYSDK_OFFSET(0x197E3E00)

inline static constexpr unsigned int Class_1_2786121EC539E542_1_TypeDefinitionIndex = 26730;

class Class_1_2786121EC539E542_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2786121EC539E542_1_TypeDefinitionIndex)->GetStaticField(0x52FA0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2786121EC539E542_1_TypeDefinitionIndex)->GetStaticField(0x52FA8);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2786121EC539E542_1_TypeDefinitionIndex)->GetStaticField(0x52FB0);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_4; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2786121EC539E542_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542_1*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2786121EC539E542_1* Clone()
	{
		return ((::Class_1_2786121EC539E542_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2786121EC539E542_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2786121EC539E542_1*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2786121EC539E542_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542_1*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
