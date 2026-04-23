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
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_719FFFD5A6E2F004_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1985F550)
#define CLASS_1_719FFFD5A6E2F004_CLONE_OFFSET UNITYSDK_OFFSET(0x1985F070)
#define CLASS_1_719FFFD5A6E2F004_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1985F110)
#define CLASS_1_719FFFD5A6E2F004_EQUALS_OFFSET UNITYSDK_OFFSET(0x1985F0E0)
#define CLASS_1_719FFFD5A6E2F004_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1985F200)
#define CLASS_1_719FFFD5A6E2F004_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1985F780)
#define CLASS_1_719FFFD5A6E2F004_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1985F6C0)
#define CLASS_1_719FFFD5A6E2F004_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1985F0B0)
#define CLASS_1_719FFFD5A6E2F004_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1985F0D0)
#define CLASS_1_719FFFD5A6E2F004_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1985EE70)
#define CLASS_1_719FFFD5A6E2F004_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1985F0C0)
#define CLASS_1_719FFFD5A6E2F004_METHOD_1_959BA94B4EE67881_OFFSET UNITYSDK_OFFSET(0x1985F0A0)
#define CLASS_1_719FFFD5A6E2F004_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1985EEA0)
#define CLASS_1_719FFFD5A6E2F004_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1985F3E0)
#define CLASS_1_719FFFD5A6E2F004_WRITETO_OFFSET UNITYSDK_OFFSET(0x1985F440)
#define CLASS_1_719FFFD5A6E2F004__CCTOR_OFFSET UNITYSDK_OFFSET(0x1985F8D0)
#define CLASS_1_719FFFD5A6E2F004__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1985EF40)
#define CLASS_1_719FFFD5A6E2F004__CTOR_OFFSET UNITYSDK_OFFSET(0x1985EEB0)

inline static constexpr unsigned int Class_1_719FFFD5A6E2F004_TypeDefinitionIndex = 27288;

class Class_1_719FFFD5A6E2F004 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_719FFFD5A6E2F004_TypeDefinitionIndex)->GetStaticField(0x488E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_719FFFD5A6E2F004_TypeDefinitionIndex)->GetStaticField(0x488E8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_719FFFD5A6E2F004*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_719FFFD5A6E2F004*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_719FFFD5A6E2F004_TypeDefinitionIndex)->GetStaticField(0x488F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_719FFFD5A6E2F004* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_719FFFD5A6E2F004*))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_719FFFD5A6E2F004*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_719FFFD5A6E2F004*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_719FFFD5A6E2F004* Clone()
	{
		return ((::Class_1_719FFFD5A6E2F004*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Method_1_959BA94B4EE67881()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_METHOD_1_959BA94B4EE67881_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_719FFFD5A6E2F004* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_719FFFD5A6E2F004*))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_719FFFD5A6E2F004* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_719FFFD5A6E2F004*))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_719FFFD5A6E2F004_MERGEFROM_1_OFFSET))(this, a1);
	}
};
