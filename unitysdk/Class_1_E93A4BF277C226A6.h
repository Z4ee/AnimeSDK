#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_33CC5447741F7959;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E93A4BF277C226A6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BA1610)
#define CLASS_1_E93A4BF277C226A6_CLONE_OFFSET UNITYSDK_OFFSET(0x17BA0FA0)
#define CLASS_1_E93A4BF277C226A6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BA1130)
#define CLASS_1_E93A4BF277C226A6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BA10D0)
#define CLASS_1_E93A4BF277C226A6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BA1280)
#define CLASS_1_E93A4BF277C226A6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BA1920)
#define CLASS_1_E93A4BF277C226A6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BA1790)
#define CLASS_1_E93A4BF277C226A6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BA10A0)
#define CLASS_1_E93A4BF277C226A6_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17BA0FF0)
#define CLASS_1_E93A4BF277C226A6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17BA10C0)
#define CLASS_1_E93A4BF277C226A6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BA10B0)
#define CLASS_1_E93A4BF277C226A6_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17BA1000)
#define CLASS_1_E93A4BF277C226A6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BA0D30)
#define CLASS_1_E93A4BF277C226A6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BA1480)
#define CLASS_1_E93A4BF277C226A6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BA14E0)
#define CLASS_1_E93A4BF277C226A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BA1BA0)
#define CLASS_1_E93A4BF277C226A6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BA0DE0)
#define CLASS_1_E93A4BF277C226A6__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA0D40)

inline static constexpr unsigned int Class_1_E93A4BF277C226A6_TypeDefinitionIndex = 22981;

class Class_1_E93A4BF277C226A6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_33CC5447741F7959*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_33CC5447741F7959*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E93A4BF277C226A6_TypeDefinitionIndex)->GetStaticField(0x31E20);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_33CC5447741F7959*>* Field_1_7; // 0x18
	::Google::Protobuf::ByteString* Field_1_2; // 0x20
	::Class_1_33CC5447741F7959* Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E93A4BF277C226A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E93A4BF277C226A6*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E93A4BF277C226A6* Clone()
	{
		return ((::Class_1_E93A4BF277C226A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::Class_1_33CC5447741F7959* Method_1_24748FC20F375725()
	{
		return ((::Class_1_33CC5447741F7959*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_33CC5447741F7959* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33CC5447741F7959*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_33CC5447741F7959*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_33CC5447741F7959*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E93A4BF277C226A6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E93A4BF277C226A6*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E93A4BF277C226A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E93A4BF277C226A6*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E93A4BF277C226A6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
