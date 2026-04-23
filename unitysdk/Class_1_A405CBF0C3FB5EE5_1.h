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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_A405CBF0C3FB5EE5_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192D9730)
#define CLASS_1_A405CBF0C3FB5EE5_1_CLONE_OFFSET UNITYSDK_OFFSET(0x192D92C0)
#define CLASS_1_A405CBF0C3FB5EE5_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192D9420)
#define CLASS_1_A405CBF0C3FB5EE5_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x192D9340)
#define CLASS_1_A405CBF0C3FB5EE5_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192D94F0)
#define CLASS_1_A405CBF0C3FB5EE5_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192D9900)
#define CLASS_1_A405CBF0C3FB5EE5_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192D9850)
#define CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x192D9300)
#define CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x192D92F0)
#define CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192D9170)
#define CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x192D9330)
#define CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x192D9320)
#define CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x192D9310)
#define CLASS_1_A405CBF0C3FB5EE5_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192D91A0)
#define CLASS_1_A405CBF0C3FB5EE5_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192D9600)
#define CLASS_1_A405CBF0C3FB5EE5_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x192D9660)
#define CLASS_1_A405CBF0C3FB5EE5_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D9A20)
#define CLASS_1_A405CBF0C3FB5EE5_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192D9200)
#define CLASS_1_A405CBF0C3FB5EE5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x192D91B0)

inline static constexpr unsigned int Class_1_A405CBF0C3FB5EE5_1_TypeDefinitionIndex = 29409;

class Class_1_A405CBF0C3FB5EE5_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A405CBF0C3FB5EE5_1_TypeDefinitionIndex)->GetStaticField(0x5B230);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A405CBF0C3FB5EE5_1_TypeDefinitionIndex)->GetStaticField(0x5B238);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Proto::ItemList* Field_1_8; // 0x20
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A405CBF0C3FB5EE5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_1*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A405CBF0C3FB5EE5_1* Clone()
	{
		return ((::Class_1_A405CBF0C3FB5EE5_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A405CBF0C3FB5EE5_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_1*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A405CBF0C3FB5EE5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5_1*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
