#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F5AAE9CC1C42543_Enum_3_FCBB2C507E9B21A3_34.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_861;
class Class_1_EA5A5E4D07C4CF2B_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1F5AAE9CC1C42543_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A98BD20)
#define CLASS_1_1F5AAE9CC1C42543_CLONE_OFFSET UNITYSDK_OFFSET(0x1A98B810)
#define CLASS_1_1F5AAE9CC1C42543_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A98B890)
#define CLASS_1_1F5AAE9CC1C42543_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A98B860)
#define CLASS_1_1F5AAE9CC1C42543_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A98BAA0)
#define CLASS_1_1F5AAE9CC1C42543_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A98C120)
#define CLASS_1_1F5AAE9CC1C42543_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A98BE70)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1A98B840)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x1A98B790)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1A98B710)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A98B560)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A98B850)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A98B7F0)
#define CLASS_1_1F5AAE9CC1C42543_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A98B770)
#define CLASS_1_1F5AAE9CC1C42543_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A98B590)
#define CLASS_1_1F5AAE9CC1C42543_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A98BBC0)
#define CLASS_1_1F5AAE9CC1C42543_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A98BC20)
#define CLASS_1_1F5AAE9CC1C42543__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A98C430)
#define CLASS_1_1F5AAE9CC1C42543__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A98B5B0)
#define CLASS_1_1F5AAE9CC1C42543__CTOR_OFFSET UNITYSDK_OFFSET(0x1A98B5A0)

inline static constexpr unsigned int Class_1_1F5AAE9CC1C42543_TypeDefinitionIndex = 31464;

class Class_1_1F5AAE9CC1C42543 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1F5AAE9CC1C42543*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1F5AAE9CC1C42543*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F5AAE9CC1C42543_TypeDefinitionIndex)->GetStaticField(0x4DD20);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_1F5AAE9CC1C42543_Enum_3_FCBB2C507E9B21A3_34 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1F5AAE9CC1C42543* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F5AAE9CC1C42543*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1F5AAE9CC1C42543*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1F5AAE9CC1C42543*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1F5AAE9CC1C42543* Clone()
	{
		return ((::Class_1_1F5AAE9CC1C42543*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_861* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D17272E82AE804C2_861*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_861* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_861*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_EA5A5E4D07C4CF2B_10* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_EA5A5E4D07C4CF2B_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_10*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_1F5AAE9CC1C42543_Enum_3_FCBB2C507E9B21A3_34 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_1F5AAE9CC1C42543_Enum_3_FCBB2C507E9B21A3_34(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1F5AAE9CC1C42543* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1F5AAE9CC1C42543*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1F5AAE9CC1C42543* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F5AAE9CC1C42543*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1F5AAE9CC1C42543_MERGEFROM_1_OFFSET))(this, a1);
	}
};
