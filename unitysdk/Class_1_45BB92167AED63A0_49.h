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

#define CLASS_1_45BB92167AED63A0_49_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD362A0)
#define CLASS_1_45BB92167AED63A0_49_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD35E10)
#define CLASS_1_45BB92167AED63A0_49_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD35F70)
#define CLASS_1_45BB92167AED63A0_49_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD35E70)
#define CLASS_1_45BB92167AED63A0_49_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD36060)
#define CLASS_1_45BB92167AED63A0_49_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD363D0)
#define CLASS_1_45BB92167AED63A0_49_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD36380)
#define CLASS_1_45BB92167AED63A0_49_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD35E40)
#define CLASS_1_45BB92167AED63A0_49_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CD35E60)
#define CLASS_1_45BB92167AED63A0_49_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD35CF0)
#define CLASS_1_45BB92167AED63A0_49_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD35E50)
#define CLASS_1_45BB92167AED63A0_49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD35D20)
#define CLASS_1_45BB92167AED63A0_49_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD36160)
#define CLASS_1_45BB92167AED63A0_49_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD361C0)
#define CLASS_1_45BB92167AED63A0_49__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD36590)
#define CLASS_1_45BB92167AED63A0_49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD35D80)
#define CLASS_1_45BB92167AED63A0_49__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD35D30)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_49_TypeDefinitionIndex = 28651;

class Class_1_45BB92167AED63A0_49 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_49_TypeDefinitionIndex)->GetStaticField(0x25020);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_49*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_49_TypeDefinitionIndex)->GetStaticField(0x25028);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_49*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_49*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_49*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_49* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_49*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_49*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_49_MERGEFROM_1_OFFSET))(this, a1);
	}
};
