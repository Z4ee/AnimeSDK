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

#define CLASS_1_45BB92167AED63A0_55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D820570)
#define CLASS_1_45BB92167AED63A0_55_CLONE_OFFSET UNITYSDK_OFFSET(0x1D8200E0)
#define CLASS_1_45BB92167AED63A0_55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D820240)
#define CLASS_1_45BB92167AED63A0_55_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D820140)
#define CLASS_1_45BB92167AED63A0_55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D820330)
#define CLASS_1_45BB92167AED63A0_55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D8206B0)
#define CLASS_1_45BB92167AED63A0_55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D820660)
#define CLASS_1_45BB92167AED63A0_55_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D820120)
#define CLASS_1_45BB92167AED63A0_55_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D820110)
#define CLASS_1_45BB92167AED63A0_55_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D81FFC0)
#define CLASS_1_45BB92167AED63A0_55_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D820130)
#define CLASS_1_45BB92167AED63A0_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D81FFF0)
#define CLASS_1_45BB92167AED63A0_55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D820430)
#define CLASS_1_45BB92167AED63A0_55_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D820490)
#define CLASS_1_45BB92167AED63A0_55__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8208F0)
#define CLASS_1_45BB92167AED63A0_55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D820050)
#define CLASS_1_45BB92167AED63A0_55__CTOR_OFFSET UNITYSDK_OFFSET(0x1D820000)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_55_TypeDefinitionIndex = 29799;

class Class_1_45BB92167AED63A0_55 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_55*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_55*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_55_TypeDefinitionIndex)->GetStaticField(0x2C420);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JBEJEEFCCKI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_55_TypeDefinitionIndex)->GetStaticField(0x2C428);
	}
	// static const ::System::Int32 AKEFNAJMCCM = 0x1; // 0x0
	// static const ::System::Int32 CEDDGAMLKJK = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPKCIGKABKD; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 ECCMJBDHOBD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_55*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_55*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_55*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_55* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_55*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_55*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
