#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F91AD0C5A85E4AFA_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C968750)
#define CLASS_1_0A99AF1699F7F17E_22_CLONE_OFFSET UNITYSDK_OFFSET(0x1C968360)
#define CLASS_1_0A99AF1699F7F17E_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9684E0)
#define CLASS_1_0A99AF1699F7F17E_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9683A0)
#define CLASS_1_0A99AF1699F7F17E_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C968600)
#define CLASS_1_0A99AF1699F7F17E_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C968890)
#define CLASS_1_0A99AF1699F7F17E_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9687F0)
#define CLASS_1_0A99AF1699F7F17E_22_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C968250)
#define CLASS_1_0A99AF1699F7F17E_22_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C968390)
#define CLASS_1_0A99AF1699F7F17E_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C968280)
#define CLASS_1_0A99AF1699F7F17E_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C968670)
#define CLASS_1_0A99AF1699F7F17E_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9686D0)
#define CLASS_1_0A99AF1699F7F17E_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C968A30)
#define CLASS_1_0A99AF1699F7F17E_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9682D0)
#define CLASS_1_0A99AF1699F7F17E_22__CTOR_OFFSET UNITYSDK_OFFSET(0x1C968290)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_22_TypeDefinitionIndex = 29608;

class Class_1_0A99AF1699F7F17E_22 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_22*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_22_TypeDefinitionIndex)->GetStaticField(0x2C600);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_17*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_22_TypeDefinitionIndex)->GetStaticField(0x2C608);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_17*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_22*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_22*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_22*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_22* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_17*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_22*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_22*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
