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
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_FC8BF52F067E8047_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06C0D0)
#define CLASS_1_FC8BF52F067E8047_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06BA90)
#define CLASS_1_FC8BF52F067E8047_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06BCE0)
#define CLASS_1_FC8BF52F067E8047_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06BAF0)
#define CLASS_1_FC8BF52F067E8047_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06BEB0)
#define CLASS_1_FC8BF52F067E8047_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06C2D0)
#define CLASS_1_FC8BF52F067E8047_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06C1C0)
#define CLASS_1_FC8BF52F067E8047_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1E06BAE0)
#define CLASS_1_FC8BF52F067E8047_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E06B930)
#define CLASS_1_FC8BF52F067E8047_METHOD_1_AF79E24951DBBA50_OFFSET UNITYSDK_OFFSET(0x1E06BAD0)
#define CLASS_1_FC8BF52F067E8047_METHOD_1_E8F5A96D93A6544B_OFFSET UNITYSDK_OFFSET(0x1E06BAC0)
#define CLASS_1_FC8BF52F067E8047_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06B960)
#define CLASS_1_FC8BF52F067E8047_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06BF50)
#define CLASS_1_FC8BF52F067E8047_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06BFB0)
#define CLASS_1_FC8BF52F067E8047__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06C4A0)
#define CLASS_1_FC8BF52F067E8047__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06B9B0)
#define CLASS_1_FC8BF52F067E8047__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06B970)

inline static constexpr unsigned int Class_1_FC8BF52F067E8047_TypeDefinitionIndex = 29577;

class Class_1_FC8BF52F067E8047 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_BAFAEHMLHCF()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC8BF52F067E8047_TypeDefinitionIndex)->GetStaticField(0xC700);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_FC8BF52F067E8047*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FC8BF52F067E8047*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC8BF52F067E8047_TypeDefinitionIndex)->GetStaticField(0xC708);
	}
	// static const ::System::Int32 NIMIGEFNLCA = 0x9; // 0x0
	// static const ::System::Int32 IPCPPOICJCF = 0x8; // 0x0
	::Proto::PileItem* OOHMIECCIPM; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* LEKOBDNNNDK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FC8BF52F067E8047* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FC8BF52F067E8047*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FC8BF52F067E8047*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FC8BF52F067E8047*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FC8BF52F067E8047* Clone()
	{
		return ((::Class_1_FC8BF52F067E8047*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_CLONE_OFFSET))(this);
	}

	::Proto::PileItem* Method_1_E8F5A96D93A6544B()
	{
		return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_METHOD_1_E8F5A96D93A6544B_OFFSET))(this);
	}

	::System::Void Method_1_AF79E24951DBBA50(::Proto::PileItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_METHOD_1_AF79E24951DBBA50_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FC8BF52F067E8047* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FC8BF52F067E8047*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FC8BF52F067E8047* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FC8BF52F067E8047*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FC8BF52F067E8047_MERGEFROM_1_OFFSET))(this, a1);
	}
};
