#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/System/Object.h"

class Class_1_F95E70757E85280D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EB91F58AEEF3F578_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BBFC80)
#define CLASS_1_EB91F58AEEF3F578_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19BBF750)
#define CLASS_1_EB91F58AEEF3F578_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BBF840)
#define CLASS_1_EB91F58AEEF3F578_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BBF7E0)
#define CLASS_1_EB91F58AEEF3F578_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BBF930)
#define CLASS_1_EB91F58AEEF3F578_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BBFED0)
#define CLASS_1_EB91F58AEEF3F578_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BBFE10)
#define CLASS_1_EB91F58AEEF3F578_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BBF520)
#define CLASS_1_EB91F58AEEF3F578_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19BBF7D0)
#define CLASS_1_EB91F58AEEF3F578_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19BBF7B0)
#define CLASS_1_EB91F58AEEF3F578_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19BBF7A0)
#define CLASS_1_EB91F58AEEF3F578_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19BBF7C0)
#define CLASS_1_EB91F58AEEF3F578_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BBF580)
#define CLASS_1_EB91F58AEEF3F578_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BBFB00)
#define CLASS_1_EB91F58AEEF3F578_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BBFB60)
#define CLASS_1_EB91F58AEEF3F578_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC0020)
#define CLASS_1_EB91F58AEEF3F578_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BBF620)
#define CLASS_1_EB91F58AEEF3F578_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBF590)

inline static constexpr unsigned int Class_1_EB91F58AEEF3F578_1_TypeDefinitionIndex = 27648;

class Class_1_EB91F58AEEF3F578_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB91F58AEEF3F578_1_TypeDefinitionIndex)->GetStaticField(0x4FFA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F95E70757E85280D*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F95E70757E85280D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB91F58AEEF3F578_1_TypeDefinitionIndex)->GetStaticField(0x4FFA8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB91F58AEEF3F578_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB91F58AEEF3F578_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB91F58AEEF3F578_1_TypeDefinitionIndex)->GetStaticField(0x4FFB0);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F95E70757E85280D*>* Field_1_4; // 0x20
	::Enum_3_75A5C8C4100A8E33_1 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB91F58AEEF3F578_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_1*))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB91F58AEEF3F578_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB91F58AEEF3F578_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB91F58AEEF3F578_1* Clone()
	{
		return ((::Class_1_EB91F58AEEF3F578_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F95E70757E85280D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F95E70757E85280D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_75A5C8C4100A8E33_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_75A5C8C4100A8E33_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB91F58AEEF3F578_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_1*))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB91F58AEEF3F578_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_1*))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
