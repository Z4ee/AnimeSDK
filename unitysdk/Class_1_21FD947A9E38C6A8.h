#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_26.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21FD947A9E38C6A8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E89890)
#define CLASS_1_21FD947A9E38C6A8_CLONE_OFFSET UNITYSDK_OFFSET(0x17E89310)
#define CLASS_1_21FD947A9E38C6A8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E893C0)
#define CLASS_1_21FD947A9E38C6A8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E89390)
#define CLASS_1_21FD947A9E38C6A8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E894D0)
#define CLASS_1_21FD947A9E38C6A8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E89B60)
#define CLASS_1_21FD947A9E38C6A8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E89A70)
#define CLASS_1_21FD947A9E38C6A8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E89370)
#define CLASS_1_21FD947A9E38C6A8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E89340)
#define CLASS_1_21FD947A9E38C6A8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E89350)
#define CLASS_1_21FD947A9E38C6A8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E89360)
#define CLASS_1_21FD947A9E38C6A8_METHOD_1_AA415D46E3167651_OFFSET UNITYSDK_OFFSET(0x17E89380)
#define CLASS_1_21FD947A9E38C6A8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E89140)
#define CLASS_1_21FD947A9E38C6A8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E896C0)
#define CLASS_1_21FD947A9E38C6A8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E89720)
#define CLASS_1_21FD947A9E38C6A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E89CE0)
#define CLASS_1_21FD947A9E38C6A8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E891E0)
#define CLASS_1_21FD947A9E38C6A8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E89150)

inline static constexpr unsigned int Class_1_21FD947A9E38C6A8_TypeDefinitionIndex = 23906;

class Class_1_21FD947A9E38C6A8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_10*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21FD947A9E38C6A8_TypeDefinitionIndex)->GetStaticField(0x27260);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21FD947A9E38C6A8_TypeDefinitionIndex)->GetStaticField(0x27268);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21FD947A9E38C6A8_TypeDefinitionIndex)->GetStaticField(0x27270);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Field_1_11; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_10*>* Field_1_6; // 0x28
	::Enum_3_0A3761FE34514D6C_26 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21FD947A9E38C6A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21FD947A9E38C6A8*))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21FD947A9E38C6A8* Clone()
	{
		return ((::Class_1_21FD947A9E38C6A8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_10*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_26 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_26(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_26 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_26))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Method_1_AA415D46E3167651()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_METHOD_1_AA415D46E3167651_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21FD947A9E38C6A8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21FD947A9E38C6A8*))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21FD947A9E38C6A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21FD947A9E38C6A8*))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21FD947A9E38C6A8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
