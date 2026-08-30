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

#define CLASS_1_C3162D2F7EA647B9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9B12E0)
#define CLASS_1_C3162D2F7EA647B9_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9A8CA0)
#define CLASS_1_C3162D2F7EA647B9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9B10B0)
#define CLASS_1_C3162D2F7EA647B9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9B0F70)
#define CLASS_1_C3162D2F7EA647B9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9A91F0)
#define CLASS_1_C3162D2F7EA647B9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9B1380)
#define CLASS_1_C3162D2F7EA647B9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9A95F0)
#define CLASS_1_C3162D2F7EA647B9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D9B0E90)
#define CLASS_1_C3162D2F7EA647B9_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x1D9B0F60)
#define CLASS_1_C3162D2F7EA647B9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9B0EC0)
#define CLASS_1_C3162D2F7EA647B9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9B11D0)
#define CLASS_1_C3162D2F7EA647B9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9B1230)
#define CLASS_1_C3162D2F7EA647B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9B1520)
#define CLASS_1_C3162D2F7EA647B9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9B0ED0)
#define CLASS_1_C3162D2F7EA647B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A95B0)

inline static constexpr unsigned int Class_1_C3162D2F7EA647B9_TypeDefinitionIndex = 27286;

class Class_1_C3162D2F7EA647B9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C3162D2F7EA647B9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C3162D2F7EA647B9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3162D2F7EA647B9_TypeDefinitionIndex)->GetStaticField(0xFC40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_KHPCDHPFCHE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3162D2F7EA647B9_TypeDefinitionIndex)->GetStaticField(0xFC48);
	}
	// static const ::System::Int32 DPPAFBAHEFH = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* DALKEINMPBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C3162D2F7EA647B9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C3162D2F7EA647B9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3162D2F7EA647B9* Clone()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3162D2F7EA647B9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
