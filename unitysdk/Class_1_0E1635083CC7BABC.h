#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0E1635083CC7BABC_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0E1635083CC7BABC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19948F80)
#define CLASS_1_0E1635083CC7BABC_CLONE_OFFSET UNITYSDK_OFFSET(0x19948BD0)
#define CLASS_1_0E1635083CC7BABC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19948D50)
#define CLASS_1_0E1635083CC7BABC_EQUALS_OFFSET UNITYSDK_OFFSET(0x19948CA0)
#define CLASS_1_0E1635083CC7BABC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19948E00)
#define CLASS_1_0E1635083CC7BABC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19949150)
#define CLASS_1_0E1635083CC7BABC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19949090)
#define CLASS_1_0E1635083CC7BABC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19948C80)
#define CLASS_1_0E1635083CC7BABC_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19948B00)
#define CLASS_1_0E1635083CC7BABC_METHOD_1_846EDF57F2A478CA_OFFSET UNITYSDK_OFFSET(0x19948C60)
#define CLASS_1_0E1635083CC7BABC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19948C90)
#define CLASS_1_0E1635083CC7BABC_METHOD_1_CBA8E20523A95EF1_OFFSET UNITYSDK_OFFSET(0x19948C70)
#define CLASS_1_0E1635083CC7BABC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19948B30)
#define CLASS_1_0E1635083CC7BABC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19948E90)
#define CLASS_1_0E1635083CC7BABC_WRITETO_OFFSET UNITYSDK_OFFSET(0x19948EF0)
#define CLASS_1_0E1635083CC7BABC__CCTOR_OFFSET UNITYSDK_OFFSET(0x199491E0)
#define CLASS_1_0E1635083CC7BABC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19948B50)
#define CLASS_1_0E1635083CC7BABC__CTOR_OFFSET UNITYSDK_OFFSET(0x19948B40)

inline static constexpr unsigned int Class_1_0E1635083CC7BABC_TypeDefinitionIndex = 30004;

class Class_1_0E1635083CC7BABC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0E1635083CC7BABC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0E1635083CC7BABC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E1635083CC7BABC_TypeDefinitionIndex)->GetStaticField(0x5EF90);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_C9E417278351157F* Field_1_5; // 0x18
	::Class_1_0E1635083CC7BABC_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0E1635083CC7BABC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E1635083CC7BABC*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0E1635083CC7BABC*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0E1635083CC7BABC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0E1635083CC7BABC* Clone()
	{
		return ((::Class_1_0E1635083CC7BABC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_CLONE_OFFSET))(this);
	}

	::Class_1_0E1635083CC7BABC_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901 Method_1_846EDF57F2A478CA()
	{
		return ((::Class_1_0E1635083CC7BABC_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_METHOD_1_846EDF57F2A478CA_OFFSET))(this);
	}

	::System::Void Method_1_CBA8E20523A95EF1(::Class_1_0E1635083CC7BABC_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E1635083CC7BABC_Class_1_534EF681CC2FBEA4_2_Enum_3_CC844EE29E976901))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_METHOD_1_CBA8E20523A95EF1_OFFSET))(this, a1);
	}

	::Class_1_C9E417278351157F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9E417278351157F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9E417278351157F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0E1635083CC7BABC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E1635083CC7BABC*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0E1635083CC7BABC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E1635083CC7BABC*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0E1635083CC7BABC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
