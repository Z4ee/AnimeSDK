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

#define CLASS_1_99BD961747420BEB_50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FEC270)
#define CLASS_1_99BD961747420BEB_50_CLONE_OFFSET UNITYSDK_OFFSET(0x17FEBCF0)
#define CLASS_1_99BD961747420BEB_50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FEBE00)
#define CLASS_1_99BD961747420BEB_50_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FEBDA0)
#define CLASS_1_99BD961747420BEB_50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FEBED0)
#define CLASS_1_99BD961747420BEB_50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FEC4D0)
#define CLASS_1_99BD961747420BEB_50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FEC460)
#define CLASS_1_99BD961747420BEB_50_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17FEBD80)
#define CLASS_1_99BD961747420BEB_50_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FEBD50)
#define CLASS_1_99BD961747420BEB_50_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17FEBD70)
#define CLASS_1_99BD961747420BEB_50_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17FEBD40)
#define CLASS_1_99BD961747420BEB_50_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17FEBD90)
#define CLASS_1_99BD961747420BEB_50_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FEBD60)
#define CLASS_1_99BD961747420BEB_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FEBB60)
#define CLASS_1_99BD961747420BEB_50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FEC0B0)
#define CLASS_1_99BD961747420BEB_50_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FEC110)
#define CLASS_1_99BD961747420BEB_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FEC620)
#define CLASS_1_99BD961747420BEB_50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FEBC00)
#define CLASS_1_99BD961747420BEB_50__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEBB70)

inline static constexpr unsigned int Class_1_99BD961747420BEB_50_TypeDefinitionIndex = 26237;

class Class_1_99BD961747420BEB_50 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_50_TypeDefinitionIndex)->GetStaticField(0x374B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_50_TypeDefinitionIndex)->GetStaticField(0x374B8);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_50* Clone()
	{
		return ((::Class_1_99BD961747420BEB_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_50* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_50_MERGEFROM_1_OFFSET))(this, a1);
	}
};
