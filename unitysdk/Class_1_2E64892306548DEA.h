#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/System/Object.h"

class Class_1_68168894A9D2D702_7;
class Class_1_7BF8FDF00F218876_35;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2E64892306548DEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3AF8D0)
#define CLASS_1_2E64892306548DEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3AF3C0)
#define CLASS_1_2E64892306548DEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3AF480)
#define CLASS_1_2E64892306548DEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3AF450)
#define CLASS_1_2E64892306548DEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3AF570)
#define CLASS_1_2E64892306548DEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3AFBF0)
#define CLASS_1_2E64892306548DEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3AFAE0)
#define CLASS_1_2E64892306548DEA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A3AF3F0)
#define CLASS_1_2E64892306548DEA_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A3AF430)
#define CLASS_1_2E64892306548DEA_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A3AF240)
#define CLASS_1_2E64892306548DEA_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A3AF440)
#define CLASS_1_2E64892306548DEA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A3AF410)
#define CLASS_1_2E64892306548DEA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A3AF400)
#define CLASS_1_2E64892306548DEA_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A3AF420)
#define CLASS_1_2E64892306548DEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3AF270)
#define CLASS_1_2E64892306548DEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3AF700)
#define CLASS_1_2E64892306548DEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3AF760)
#define CLASS_1_2E64892306548DEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3AFD20)
#define CLASS_1_2E64892306548DEA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3AF2E0)
#define CLASS_1_2E64892306548DEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AF280)

inline static constexpr unsigned int Class_1_2E64892306548DEA_TypeDefinitionIndex = 31159;

class Class_1_2E64892306548DEA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_68168894A9D2D702_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_68168894A9D2D702_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E64892306548DEA_TypeDefinitionIndex)->GetStaticField(0x5FCF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7BF8FDF00F218876_35*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7BF8FDF00F218876_35*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E64892306548DEA_TypeDefinitionIndex)->GetStaticField(0x5FCF8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2E64892306548DEA*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2E64892306548DEA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E64892306548DEA_TypeDefinitionIndex)->GetStaticField(0x5FD00);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_68168894A9D2D702_7*>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_35*>* Field_1_9; // 0x20
	::Enum_3_0A3761FE34514D6C_63 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2E64892306548DEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2E64892306548DEA*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2E64892306548DEA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2E64892306548DEA* Clone()
	{
		return ((::Class_1_2E64892306548DEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_68168894A9D2D702_7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_68168894A9D2D702_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_63 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_63(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_35*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BF8FDF00F218876_35*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2E64892306548DEA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2E64892306548DEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
