#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_147B0F73594951F8_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4D744DD7551F9856_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE530F0)
#define CLASS_1_4D744DD7551F9856_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE52BC0)
#define CLASS_1_4D744DD7551F9856_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE52DA0)
#define CLASS_1_4D744DD7551F9856_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE52C40)
#define CLASS_1_4D744DD7551F9856_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE52ED0)
#define CLASS_1_4D744DD7551F9856_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE53390)
#define CLASS_1_4D744DD7551F9856_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE532E0)
#define CLASS_1_4D744DD7551F9856_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CE52C20)
#define CLASS_1_4D744DD7551F9856_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CE52C00)
#define CLASS_1_4D744DD7551F9856_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CE52AA0)
#define CLASS_1_4D744DD7551F9856_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CE52C10)
#define CLASS_1_4D744DD7551F9856_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CE52C30)
#define CLASS_1_4D744DD7551F9856_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CE52BF0)
#define CLASS_1_4D744DD7551F9856_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE52AD0)
#define CLASS_1_4D744DD7551F9856_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE52F60)
#define CLASS_1_4D744DD7551F9856_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE52FC0)
#define CLASS_1_4D744DD7551F9856__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE53570)
#define CLASS_1_4D744DD7551F9856__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE52B20)
#define CLASS_1_4D744DD7551F9856__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE52AE0)

inline static constexpr unsigned int Class_1_4D744DD7551F9856_TypeDefinitionIndex = 32555;

class Class_1_4D744DD7551F9856 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4D744DD7551F9856*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4D744DD7551F9856*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D744DD7551F9856_TypeDefinitionIndex)->GetStaticField(0x2F1C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_147B0F73594951F8_1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_147B0F73594951F8_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D744DD7551F9856_TypeDefinitionIndex)->GetStaticField(0x2F1C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_147B0F73594951F8_1*>* Field_1_6; // 0x18
	::System::UInt64 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4D744DD7551F9856* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D744DD7551F9856*))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4D744DD7551F9856*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4D744DD7551F9856*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4D744DD7551F9856* Clone()
	{
		return ((::Class_1_4D744DD7551F9856*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_147B0F73594951F8_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_147B0F73594951F8_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4D744DD7551F9856* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4D744DD7551F9856*))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4D744DD7551F9856* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D744DD7551F9856*))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4D744DD7551F9856_MERGEFROM_1_OFFSET))(this, a1);
	}
};
