#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F2A002E962740C85_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6303FAC302C29AF3_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B26B10)
#define CLASS_1_6303FAC302C29AF3_11_CLONE_OFFSET UNITYSDK_OFFSET(0x17B266F0)
#define CLASS_1_6303FAC302C29AF3_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B26820)
#define CLASS_1_6303FAC302C29AF3_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B26750)
#define CLASS_1_6303FAC302C29AF3_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B268F0)
#define CLASS_1_6303FAC302C29AF3_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B26C30)
#define CLASS_1_6303FAC302C29AF3_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B26BB0)
#define CLASS_1_6303FAC302C29AF3_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B26730)
#define CLASS_1_6303FAC302C29AF3_11_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17B26720)
#define CLASS_1_6303FAC302C29AF3_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B26740)
#define CLASS_1_6303FAC302C29AF3_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B265F0)
#define CLASS_1_6303FAC302C29AF3_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B26A10)
#define CLASS_1_6303FAC302C29AF3_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B26A70)
#define CLASS_1_6303FAC302C29AF3_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B26D10)
#define CLASS_1_6303FAC302C29AF3_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B26650)
#define CLASS_1_6303FAC302C29AF3_11__CTOR_OFFSET UNITYSDK_OFFSET(0x17B26600)

inline static constexpr unsigned int Class_1_6303FAC302C29AF3_11_TypeDefinitionIndex = 27029;

class Class_1_6303FAC302C29AF3_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6303FAC302C29AF3_11_TypeDefinitionIndex)->GetStaticField(0x35870);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Class_1_F2A002E962740C85_2* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6303FAC302C29AF3_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_11*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6303FAC302C29AF3_11* Clone()
	{
		return ((::Class_1_6303FAC302C29AF3_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_F2A002E962740C85_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F2A002E962740C85_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F2A002E962740C85_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F2A002E962740C85_2*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6303FAC302C29AF3_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6303FAC302C29AF3_11*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6303FAC302C29AF3_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_11*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
