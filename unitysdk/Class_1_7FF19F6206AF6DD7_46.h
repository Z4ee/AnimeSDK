#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_654;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_46_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C67F850)
#define CLASS_1_7FF19F6206AF6DD7_46_CLONE_OFFSET UNITYSDK_OFFSET(0x1C67F3C0)
#define CLASS_1_7FF19F6206AF6DD7_46_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C67F570)
#define CLASS_1_7FF19F6206AF6DD7_46_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C67F420)
#define CLASS_1_7FF19F6206AF6DD7_46_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C67F6A0)
#define CLASS_1_7FF19F6206AF6DD7_46_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C67FA00)
#define CLASS_1_7FF19F6206AF6DD7_46_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C67F960)
#define CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C67F3F0)
#define CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C67F2B0)
#define CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C67F410)
#define CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C67F400)
#define CLASS_1_7FF19F6206AF6DD7_46_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C67F2E0)
#define CLASS_1_7FF19F6206AF6DD7_46_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C67F710)
#define CLASS_1_7FF19F6206AF6DD7_46_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C67F770)
#define CLASS_1_7FF19F6206AF6DD7_46__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C67FBC0)
#define CLASS_1_7FF19F6206AF6DD7_46__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C67F330)
#define CLASS_1_7FF19F6206AF6DD7_46__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67F2F0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_46_TypeDefinitionIndex = 29474;

class Class_1_7FF19F6206AF6DD7_46 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_654*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_654*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_46_TypeDefinitionIndex)->GetStaticField(0x1DFF0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_46*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_46_TypeDefinitionIndex)->GetStaticField(0x1DFF8);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_654*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_46*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_46*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_46*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_46* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_46*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_654*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_654*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_46* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_46*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_46*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_46_MERGEFROM_1_OFFSET))(this, a1);
	}
};
