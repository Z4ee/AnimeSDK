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

#define CLASS_1_45BB92167AED63A0_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A956D90)
#define CLASS_1_45BB92167AED63A0_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1A956A00)
#define CLASS_1_45BB92167AED63A0_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A956B00)
#define CLASS_1_45BB92167AED63A0_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A956A60)
#define CLASS_1_45BB92167AED63A0_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A956B90)
#define CLASS_1_45BB92167AED63A0_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A956ED0)
#define CLASS_1_45BB92167AED63A0_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A956E80)
#define CLASS_1_45BB92167AED63A0_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A956A40)
#define CLASS_1_45BB92167AED63A0_24_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A956A30)
#define CLASS_1_45BB92167AED63A0_24_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A9568E0)
#define CLASS_1_45BB92167AED63A0_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A956A50)
#define CLASS_1_45BB92167AED63A0_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A956910)
#define CLASS_1_45BB92167AED63A0_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A956C90)
#define CLASS_1_45BB92167AED63A0_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A956CF0)
#define CLASS_1_45BB92167AED63A0_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A957090)
#define CLASS_1_45BB92167AED63A0_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A956970)
#define CLASS_1_45BB92167AED63A0_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1A956920)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_24_TypeDefinitionIndex = 25757;

class Class_1_45BB92167AED63A0_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_24_TypeDefinitionIndex)->GetStaticField(0x63320);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_24*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_24_TypeDefinitionIndex)->GetStaticField(0x63328);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_24*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_24*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_24* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_24*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_24*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
