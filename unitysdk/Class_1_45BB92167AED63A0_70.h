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

#define CLASS_1_45BB92167AED63A0_70_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19AB1620)
#define CLASS_1_45BB92167AED63A0_70_CLONE_OFFSET UNITYSDK_OFFSET(0x19AB1280)
#define CLASS_1_45BB92167AED63A0_70_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19AB1380)
#define CLASS_1_45BB92167AED63A0_70_EQUALS_OFFSET UNITYSDK_OFFSET(0x19AB12E0)
#define CLASS_1_45BB92167AED63A0_70_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19AB1410)
#define CLASS_1_45BB92167AED63A0_70_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19AB1750)
#define CLASS_1_45BB92167AED63A0_70_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19AB1700)
#define CLASS_1_45BB92167AED63A0_70_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19AB12B0)
#define CLASS_1_45BB92167AED63A0_70_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19AB12D0)
#define CLASS_1_45BB92167AED63A0_70_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19AB1160)
#define CLASS_1_45BB92167AED63A0_70_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19AB12C0)
#define CLASS_1_45BB92167AED63A0_70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19AB1190)
#define CLASS_1_45BB92167AED63A0_70_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AB1520)
#define CLASS_1_45BB92167AED63A0_70_WRITETO_OFFSET UNITYSDK_OFFSET(0x19AB1580)
#define CLASS_1_45BB92167AED63A0_70__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB1810)
#define CLASS_1_45BB92167AED63A0_70__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AB11F0)
#define CLASS_1_45BB92167AED63A0_70__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB11A0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_70_TypeDefinitionIndex = 30926;

class Class_1_45BB92167AED63A0_70 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_70_TypeDefinitionIndex)->GetStaticField(0x55D10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_70*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_70*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_70_TypeDefinitionIndex)->GetStaticField(0x55D18);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_70*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_70*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_70*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_70* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_70* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_70*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_70*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_70_MERGEFROM_1_OFFSET))(this, a1);
	}
};
