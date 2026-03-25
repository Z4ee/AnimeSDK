#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F48B67D07D3C17D7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2AE9EADEAA87F763_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E115B0)
#define CLASS_1_2AE9EADEAA87F763_CLONE_OFFSET UNITYSDK_OFFSET(0x17E11080)
#define CLASS_1_2AE9EADEAA87F763_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E11170)
#define CLASS_1_2AE9EADEAA87F763_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E11110)
#define CLASS_1_2AE9EADEAA87F763_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E11260)
#define CLASS_1_2AE9EADEAA87F763_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E11770)
#define CLASS_1_2AE9EADEAA87F763_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E116B0)
#define CLASS_1_2AE9EADEAA87F763_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E11100)
#define CLASS_1_2AE9EADEAA87F763_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E110D0)
#define CLASS_1_2AE9EADEAA87F763_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E110F0)
#define CLASS_1_2AE9EADEAA87F763_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E110E0)
#define CLASS_1_2AE9EADEAA87F763_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E10EB0)
#define CLASS_1_2AE9EADEAA87F763_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E11440)
#define CLASS_1_2AE9EADEAA87F763_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E114A0)
#define CLASS_1_2AE9EADEAA87F763__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E118B0)
#define CLASS_1_2AE9EADEAA87F763__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E10F50)
#define CLASS_1_2AE9EADEAA87F763__CTOR_OFFSET UNITYSDK_OFFSET(0x17E10EC0)

inline static constexpr unsigned int Class_1_2AE9EADEAA87F763_TypeDefinitionIndex = 24169;

class Class_1_2AE9EADEAA87F763 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AE9EADEAA87F763_TypeDefinitionIndex)->GetStaticField(0x20860);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F48B67D07D3C17D7*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F48B67D07D3C17D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AE9EADEAA87F763_TypeDefinitionIndex)->GetStaticField(0x20868);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F48B67D07D3C17D7*>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2AE9EADEAA87F763* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AE9EADEAA87F763*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2AE9EADEAA87F763* Clone()
	{
		return ((::Class_1_2AE9EADEAA87F763*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F48B67D07D3C17D7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F48B67D07D3C17D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2AE9EADEAA87F763* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2AE9EADEAA87F763*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2AE9EADEAA87F763* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AE9EADEAA87F763*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9EADEAA87F763_MERGEFROM_1_OFFSET))(this, a1);
	}
};
