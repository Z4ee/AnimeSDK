#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_34.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_931;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4B36FD1EE6E3FE27_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19984CC0)
#define CLASS_1_4B36FD1EE6E3FE27_2_CLONE_OFFSET UNITYSDK_OFFSET(0x199847A0)
#define CLASS_1_4B36FD1EE6E3FE27_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19984890)
#define CLASS_1_4B36FD1EE6E3FE27_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19984830)
#define CLASS_1_4B36FD1EE6E3FE27_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19984980)
#define CLASS_1_4B36FD1EE6E3FE27_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19984EF0)
#define CLASS_1_4B36FD1EE6E3FE27_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19984E30)
#define CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19984570)
#define CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19984800)
#define CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19984820)
#define CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19984810)
#define CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x199847F0)
#define CLASS_1_4B36FD1EE6E3FE27_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199845D0)
#define CLASS_1_4B36FD1EE6E3FE27_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19984B50)
#define CLASS_1_4B36FD1EE6E3FE27_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19984BB0)
#define CLASS_1_4B36FD1EE6E3FE27_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19985040)
#define CLASS_1_4B36FD1EE6E3FE27_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19984670)
#define CLASS_1_4B36FD1EE6E3FE27_2__CTOR_OFFSET UNITYSDK_OFFSET(0x199845E0)

inline static constexpr unsigned int Class_1_4B36FD1EE6E3FE27_2_TypeDefinitionIndex = 32451;

class Class_1_4B36FD1EE6E3FE27_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4B36FD1EE6E3FE27_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4B36FD1EE6E3FE27_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B36FD1EE6E3FE27_2_TypeDefinitionIndex)->GetStaticField(0x636A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_931*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_931*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B36FD1EE6E3FE27_2_TypeDefinitionIndex)->GetStaticField(0x636A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B36FD1EE6E3FE27_2_TypeDefinitionIndex)->GetStaticField(0x636B0);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_931*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Enum_3_4608E37A1B3D374A_34 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4B36FD1EE6E3FE27_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B36FD1EE6E3FE27_2*))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4B36FD1EE6E3FE27_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4B36FD1EE6E3FE27_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4B36FD1EE6E3FE27_2* Clone()
	{
		return ((::Class_1_4B36FD1EE6E3FE27_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_34 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_34(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_34 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_931*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_931*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4B36FD1EE6E3FE27_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4B36FD1EE6E3FE27_2*))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4B36FD1EE6E3FE27_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B36FD1EE6E3FE27_2*))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B36FD1EE6E3FE27_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
