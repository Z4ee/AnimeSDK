#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_65.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5CF1DDAFE12F0E87_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DAD5D0)
#define CLASS_1_5CF1DDAFE12F0E87_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17DAD050)
#define CLASS_1_5CF1DDAFE12F0E87_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DAD130)
#define CLASS_1_5CF1DDAFE12F0E87_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DAD0D0)
#define CLASS_1_5CF1DDAFE12F0E87_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DAD240)
#define CLASS_1_5CF1DDAFE12F0E87_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DAD7B0)
#define CLASS_1_5CF1DDAFE12F0E87_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DAD6E0)
#define CLASS_1_5CF1DDAFE12F0E87_5_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x17DAD0C0)
#define CLASS_1_5CF1DDAFE12F0E87_5_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17DAD0B0)
#define CLASS_1_5CF1DDAFE12F0E87_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17DAD0A0)
#define CLASS_1_5CF1DDAFE12F0E87_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DACEC0)
#define CLASS_1_5CF1DDAFE12F0E87_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DAD460)
#define CLASS_1_5CF1DDAFE12F0E87_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DAD4C0)
#define CLASS_1_5CF1DDAFE12F0E87_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DAD950)
#define CLASS_1_5CF1DDAFE12F0E87_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DACFA0)
#define CLASS_1_5CF1DDAFE12F0E87_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17DACED0)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_5_TypeDefinitionIndex = 26714;

class Class_1_5CF1DDAFE12F0E87_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_5_TypeDefinitionIndex)->GetStaticField(0x187F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_65>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_65>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_5_TypeDefinitionIndex)->GetStaticField(0x187F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_5_TypeDefinitionIndex)->GetStaticField(0x18800);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_65>* Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5CF1DDAFE12F0E87_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_5*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5CF1DDAFE12F0E87_5* Clone()
	{
		return ((::Class_1_5CF1DDAFE12F0E87_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_65>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_65>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5CF1DDAFE12F0E87_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_5*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5CF1DDAFE12F0E87_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_5*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
