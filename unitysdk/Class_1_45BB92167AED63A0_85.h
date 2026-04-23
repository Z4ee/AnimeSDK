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

#define CLASS_1_45BB92167AED63A0_85_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1957AB60)
#define CLASS_1_45BB92167AED63A0_85_CLONE_OFFSET UNITYSDK_OFFSET(0x1957A7D0)
#define CLASS_1_45BB92167AED63A0_85_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1957A8D0)
#define CLASS_1_45BB92167AED63A0_85_EQUALS_OFFSET UNITYSDK_OFFSET(0x1957A830)
#define CLASS_1_45BB92167AED63A0_85_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1957A960)
#define CLASS_1_45BB92167AED63A0_85_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1957ACA0)
#define CLASS_1_45BB92167AED63A0_85_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1957AC50)
#define CLASS_1_45BB92167AED63A0_85_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1957A810)
#define CLASS_1_45BB92167AED63A0_85_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1957A800)
#define CLASS_1_45BB92167AED63A0_85_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1957A6B0)
#define CLASS_1_45BB92167AED63A0_85_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1957A820)
#define CLASS_1_45BB92167AED63A0_85_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1957A6E0)
#define CLASS_1_45BB92167AED63A0_85_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1957AA60)
#define CLASS_1_45BB92167AED63A0_85_WRITETO_OFFSET UNITYSDK_OFFSET(0x1957AAC0)
#define CLASS_1_45BB92167AED63A0_85__CCTOR_OFFSET UNITYSDK_OFFSET(0x1957AD60)
#define CLASS_1_45BB92167AED63A0_85__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1957A740)
#define CLASS_1_45BB92167AED63A0_85__CTOR_OFFSET UNITYSDK_OFFSET(0x1957A6F0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_85_TypeDefinitionIndex = 32210;

class Class_1_45BB92167AED63A0_85 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_85*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_85*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_85_TypeDefinitionIndex)->GetStaticField(0x19940);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_85_TypeDefinitionIndex)->GetStaticField(0x19948);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_85*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_85*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_85*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_85* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_85* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_85*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_85*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_85_MERGEFROM_1_OFFSET))(this, a1);
	}
};
