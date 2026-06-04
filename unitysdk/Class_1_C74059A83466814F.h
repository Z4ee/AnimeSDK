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
namespace Proto { class ItemCost; }
namespace System { class String; }

#define CLASS_1_C74059A83466814F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A155A80)
#define CLASS_1_C74059A83466814F_CLONE_OFFSET UNITYSDK_OFFSET(0x1A14E980)
#define CLASS_1_C74059A83466814F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1558C0)
#define CLASS_1_C74059A83466814F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1557E0)
#define CLASS_1_C74059A83466814F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A14EDF0)
#define CLASS_1_C74059A83466814F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A155B20)
#define CLASS_1_C74059A83466814F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A14F200)
#define CLASS_1_C74059A83466814F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A155700)
#define CLASS_1_C74059A83466814F_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x1A1557D0)
#define CLASS_1_C74059A83466814F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A155730)
#define CLASS_1_C74059A83466814F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A155970)
#define CLASS_1_C74059A83466814F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1559D0)
#define CLASS_1_C74059A83466814F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A155CC0)
#define CLASS_1_C74059A83466814F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A155740)
#define CLASS_1_C74059A83466814F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A14F1C0)

inline static constexpr unsigned int Class_1_C74059A83466814F_TypeDefinitionIndex = 26145;

class Class_1_C74059A83466814F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C74059A83466814F_TypeDefinitionIndex)->GetStaticField(0x27080);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C74059A83466814F*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C74059A83466814F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C74059A83466814F_TypeDefinitionIndex)->GetStaticField(0x27088);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C74059A83466814F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C74059A83466814F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C74059A83466814F* Clone()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C74059A83466814F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
