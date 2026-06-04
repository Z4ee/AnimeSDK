#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10568D63349FDCA4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_E727DCE37A447723_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A775DE0)
#define CLASS_1_E727DCE37A447723_CLONE_OFFSET UNITYSDK_OFFSET(0x1A775960)
#define CLASS_1_E727DCE37A447723_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A775A00)
#define CLASS_1_E727DCE37A447723_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7759D0)
#define CLASS_1_E727DCE37A447723_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A775AF0)
#define CLASS_1_E727DCE37A447723_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A776050)
#define CLASS_1_E727DCE37A447723_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A775F40)
#define CLASS_1_E727DCE37A447723_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7759B0)
#define CLASS_1_E727DCE37A447723_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7757A0)
#define CLASS_1_E727DCE37A447723_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A7759A0)
#define CLASS_1_E727DCE37A447723_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7759C0)
#define CLASS_1_E727DCE37A447723_METHOD_1_959BA94B4EE67881_OFFSET UNITYSDK_OFFSET(0x1A775990)
#define CLASS_1_E727DCE37A447723_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7757D0)
#define CLASS_1_E727DCE37A447723_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A775C70)
#define CLASS_1_E727DCE37A447723_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A775CD0)
#define CLASS_1_E727DCE37A447723__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A776280)
#define CLASS_1_E727DCE37A447723__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A775850)
#define CLASS_1_E727DCE37A447723__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7757E0)

inline static constexpr unsigned int Class_1_E727DCE37A447723_TypeDefinitionIndex = 27209;

class Class_1_E727DCE37A447723 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E727DCE37A447723*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E727DCE37A447723*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E727DCE37A447723_TypeDefinitionIndex)->GetStaticField(0x45CF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10568D63349FDCA4*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10568D63349FDCA4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E727DCE37A447723_TypeDefinitionIndex)->GetStaticField(0x45CF8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E727DCE37A447723_TypeDefinitionIndex)->GetStaticField(0x45D00);
	}
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10568D63349FDCA4*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E727DCE37A447723* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E727DCE37A447723*))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E727DCE37A447723*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E727DCE37A447723*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E727DCE37A447723* Clone()
	{
		return ((::Class_1_E727DCE37A447723*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Method_1_959BA94B4EE67881()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_METHOD_1_959BA94B4EE67881_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10568D63349FDCA4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10568D63349FDCA4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E727DCE37A447723* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E727DCE37A447723*))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E727DCE37A447723* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E727DCE37A447723*))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E727DCE37A447723_MERGEFROM_1_OFFSET))(this, a1);
	}
};
