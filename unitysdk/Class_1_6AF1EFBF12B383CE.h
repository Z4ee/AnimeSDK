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
namespace Proto { class StrongChallengeAvatar; }
namespace System { class String; }

#define CLASS_1_6AF1EFBF12B383CE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA92290)
#define CLASS_1_6AF1EFBF12B383CE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA91DE0)
#define CLASS_1_6AF1EFBF12B383CE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA91EB0)
#define CLASS_1_6AF1EFBF12B383CE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA91E50)
#define CLASS_1_6AF1EFBF12B383CE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA92000)
#define CLASS_1_6AF1EFBF12B383CE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA92420)
#define CLASS_1_6AF1EFBF12B383CE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA92370)
#define CLASS_1_6AF1EFBF12B383CE_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EA91BB0)
#define CLASS_1_6AF1EFBF12B383CE_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EA91E40)
#define CLASS_1_6AF1EFBF12B383CE_METHOD_1_D86324C54E2B5533_OFFSET UNITYSDK_OFFSET(0x1EA91E30)
#define CLASS_1_6AF1EFBF12B383CE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA91C10)
#define CLASS_1_6AF1EFBF12B383CE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA92150)
#define CLASS_1_6AF1EFBF12B383CE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA921B0)
#define CLASS_1_6AF1EFBF12B383CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA92640)
#define CLASS_1_6AF1EFBF12B383CE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA91CB0)
#define CLASS_1_6AF1EFBF12B383CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA91C20)

inline static constexpr unsigned int Class_1_6AF1EFBF12B383CE_TypeDefinitionIndex = 34296;

class Class_1_6AF1EFBF12B383CE : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>** StaticGet_DDFODHOFBIP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AF1EFBF12B383CE_TypeDefinitionIndex)->GetStaticField(0x5C860);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AF1EFBF12B383CE_TypeDefinitionIndex)->GetStaticField(0x5C868);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6AF1EFBF12B383CE*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6AF1EFBF12B383CE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AF1EFBF12B383CE_TypeDefinitionIndex)->GetStaticField(0x5C870);
	}
	// static const ::System::Int32 IMGDAOEBONP = 0x4; // 0x0
	// static const ::System::Int32 CPBPPPJBFGH = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* CBFGBDBJHID; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6AF1EFBF12B383CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AF1EFBF12B383CE*))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6AF1EFBF12B383CE*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6AF1EFBF12B383CE*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6AF1EFBF12B383CE* Clone()
	{
		return ((::Class_1_6AF1EFBF12B383CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* Method_1_D86324C54E2B5533()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_METHOD_1_D86324C54E2B5533_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6AF1EFBF12B383CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6AF1EFBF12B383CE*))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6AF1EFBF12B383CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AF1EFBF12B383CE*))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6AF1EFBF12B383CE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
