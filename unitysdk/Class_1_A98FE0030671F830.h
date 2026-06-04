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

#define CLASS_1_A98FE0030671F830_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB01EA0)
#define CLASS_1_A98FE0030671F830_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB01A70)
#define CLASS_1_A98FE0030671F830_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB01BC0)
#define CLASS_1_A98FE0030671F830_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB01AD0)
#define CLASS_1_A98FE0030671F830_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB01C70)
#define CLASS_1_A98FE0030671F830_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB02050)
#define CLASS_1_A98FE0030671F830_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB01FB0)
#define CLASS_1_A98FE0030671F830_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AB01AA0)
#define CLASS_1_A98FE0030671F830_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB01920)
#define CLASS_1_A98FE0030671F830_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AB01AB0)
#define CLASS_1_A98FE0030671F830_METHOD_1_959BA94B4EE67881_OFFSET UNITYSDK_OFFSET(0x1AB01AC0)
#define CLASS_1_A98FE0030671F830_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB01950)
#define CLASS_1_A98FE0030671F830_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB01D60)
#define CLASS_1_A98FE0030671F830_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB01DC0)
#define CLASS_1_A98FE0030671F830__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB02220)
#define CLASS_1_A98FE0030671F830__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB019B0)
#define CLASS_1_A98FE0030671F830__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB01960)

inline static constexpr unsigned int Class_1_A98FE0030671F830_TypeDefinitionIndex = 27289;

class Class_1_A98FE0030671F830 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A98FE0030671F830*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A98FE0030671F830*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A98FE0030671F830_TypeDefinitionIndex)->GetStaticField(0x14ED0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A98FE0030671F830_TypeDefinitionIndex)->GetStaticField(0x14ED8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A98FE0030671F830* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A98FE0030671F830*))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A98FE0030671F830*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A98FE0030671F830*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A98FE0030671F830* Clone()
	{
		return ((::Class_1_A98FE0030671F830*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>* Method_1_959BA94B4EE67881()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerSimpleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_METHOD_1_959BA94B4EE67881_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A98FE0030671F830* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A98FE0030671F830*))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A98FE0030671F830* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A98FE0030671F830*))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830_MERGEFROM_1_OFFSET))(this, a1);
	}
};
