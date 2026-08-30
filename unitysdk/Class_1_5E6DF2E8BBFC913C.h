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

#define CLASS_1_5E6DF2E8BBFC913C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA3C030)
#define CLASS_1_5E6DF2E8BBFC913C_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA3BB80)
#define CLASS_1_5E6DF2E8BBFC913C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA3BD30)
#define CLASS_1_5E6DF2E8BBFC913C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA3BBE0)
#define CLASS_1_5E6DF2E8BBFC913C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA3BE60)
#define CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA3C1E0)
#define CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA3C140)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DA3BBB0)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DA3BA70)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DA3BBC0)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x1DA3BBD0)
#define CLASS_1_5E6DF2E8BBFC913C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BAA0)
#define CLASS_1_5E6DF2E8BBFC913C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA3BED0)
#define CLASS_1_5E6DF2E8BBFC913C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA3BF30)
#define CLASS_1_5E6DF2E8BBFC913C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA3C3A0)
#define CLASS_1_5E6DF2E8BBFC913C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA3BAF0)
#define CLASS_1_5E6DF2E8BBFC913C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BAB0)

inline static constexpr unsigned int Class_1_5E6DF2E8BBFC913C_TypeDefinitionIndex = 25920;

class Class_1_5E6DF2E8BBFC913C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_KHPCDHPFCHE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E6DF2E8BBFC913C_TypeDefinitionIndex)->GetStaticField(0x1E240);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E6DF2E8BBFC913C_TypeDefinitionIndex)->GetStaticField(0x1E248);
	}
	// static const ::System::Int32 ADFLIGDHDDM = 0x2; // 0x0
	// static const ::System::Int32 DPPAFBAHEFH = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* DALKEINMPBH; // 0x18
	::System::UInt32 HEKOAJFHMJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5E6DF2E8BBFC913C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E6DF2E8BBFC913C*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5E6DF2E8BBFC913C* Clone()
	{
		return ((::Class_1_5E6DF2E8BBFC913C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5E6DF2E8BBFC913C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5E6DF2E8BBFC913C*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5E6DF2E8BBFC913C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E6DF2E8BBFC913C*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
