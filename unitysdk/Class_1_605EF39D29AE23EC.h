#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_605EF39D29AE23EC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA75C00)
#define CLASS_1_605EF39D29AE23EC_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA757F0)
#define CLASS_1_605EF39D29AE23EC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA75970)
#define CLASS_1_605EF39D29AE23EC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA75870)
#define CLASS_1_605EF39D29AE23EC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA75A40)
#define CLASS_1_605EF39D29AE23EC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA75DC0)
#define CLASS_1_605EF39D29AE23EC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA75CE0)
#define CLASS_1_605EF39D29AE23EC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AA75840)
#define CLASS_1_605EF39D29AE23EC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AA75640)
#define CLASS_1_605EF39D29AE23EC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AA75850)
#define CLASS_1_605EF39D29AE23EC_METHOD_1_F64A1871C5AC5ACE_OFFSET UNITYSDK_OFFSET(0x1AA75860)
#define CLASS_1_605EF39D29AE23EC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA756A0)
#define CLASS_1_605EF39D29AE23EC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA75AC0)
#define CLASS_1_605EF39D29AE23EC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA75B20)
#define CLASS_1_605EF39D29AE23EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA75FA0)
#define CLASS_1_605EF39D29AE23EC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA75700)
#define CLASS_1_605EF39D29AE23EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA756B0)

inline static constexpr unsigned int Class_1_605EF39D29AE23EC_TypeDefinitionIndex = 26741;

class Class_1_605EF39D29AE23EC : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_605EF39D29AE23EC_TypeDefinitionIndex)->GetStaticField(0x24B60);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_605EF39D29AE23EC*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_605EF39D29AE23EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_605EF39D29AE23EC_TypeDefinitionIndex)->GetStaticField(0x24B68);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Field_1_4; // 0x10
	::Class_1_1CBA230307F9C289_18* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_605EF39D29AE23EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_605EF39D29AE23EC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_605EF39D29AE23EC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_605EF39D29AE23EC* Clone()
	{
		return ((::Class_1_605EF39D29AE23EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_CLONE_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_18* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CBA230307F9C289_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CBA230307F9C289_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_18*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Method_1_F64A1871C5AC5ACE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_METHOD_1_F64A1871C5AC5ACE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_605EF39D29AE23EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_605EF39D29AE23EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_605EF39D29AE23EC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
