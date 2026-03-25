#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemCost; }
namespace System { class String; }

#define CLASS_1_4D5D53619B020DDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F75CA0)
#define CLASS_1_4D5D53619B020DDD_CLONE_OFFSET UNITYSDK_OFFSET(0x17F69F50)
#define CLASS_1_4D5D53619B020DDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F75AE0)
#define CLASS_1_4D5D53619B020DDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F75A00)
#define CLASS_1_4D5D53619B020DDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F6A3C0)
#define CLASS_1_4D5D53619B020DDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F75D40)
#define CLASS_1_4D5D53619B020DDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F6A870)
#define CLASS_1_4D5D53619B020DDD_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x17F759F0)
#define CLASS_1_4D5D53619B020DDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F75950)
#define CLASS_1_4D5D53619B020DDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F75B90)
#define CLASS_1_4D5D53619B020DDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F75BF0)
#define CLASS_1_4D5D53619B020DDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F75DF0)
#define CLASS_1_4D5D53619B020DDD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F75960)
#define CLASS_1_4D5D53619B020DDD__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6A830)

inline static constexpr unsigned int Class_1_4D5D53619B020DDD_TypeDefinitionIndex = 24071;

class Class_1_4D5D53619B020DDD : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D5D53619B020DDD_TypeDefinitionIndex)->GetStaticField(0x29B30);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4D5D53619B020DDD* Clone()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4D5D53619B020DDD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
