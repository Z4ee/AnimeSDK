#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_12.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3AD2528CD53B1639_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F96EC0)
#define CLASS_1_3AD2528CD53B1639_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F96730)
#define CLASS_1_3AD2528CD53B1639_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F96940)
#define CLASS_1_3AD2528CD53B1639_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F968E0)
#define CLASS_1_3AD2528CD53B1639_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F96AC0)
#define CLASS_1_3AD2528CD53B1639_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F97400)
#define CLASS_1_3AD2528CD53B1639_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F972B0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F968C0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F968A0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F967C0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17F967E0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17F967B0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F96790)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x17F96890)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F968D0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F968B0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F967D0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17F967A0)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F96780)
#define CLASS_1_3AD2528CD53B1639_1_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17F967F0)
#define CLASS_1_3AD2528CD53B1639_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F96510)
#define CLASS_1_3AD2528CD53B1639_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F96C50)
#define CLASS_1_3AD2528CD53B1639_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F96CB0)
#define CLASS_1_3AD2528CD53B1639_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F97620)
#define CLASS_1_3AD2528CD53B1639_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F965C0)
#define CLASS_1_3AD2528CD53B1639_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F96520)

inline static constexpr unsigned int Class_1_3AD2528CD53B1639_1_TypeDefinitionIndex = 23153;

class Class_1_3AD2528CD53B1639_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AD2528CD53B1639_1_TypeDefinitionIndex)->GetStaticField(0x351D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Field_1_11; // 0x10
	::Class_1_C9DFE5EE7107C629* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::ByteString* Field_1_8; // 0x28
	::Enum_3_DB663931210BBC27_8 Field_1_4; // 0x30
	::Enum_3_0A3761FE34514D6C_12 Field_1_2; // 0x34
	::System::UInt32 Field_1_15; // 0x38
	::System::UInt32 Field_1_13; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3AD2528CD53B1639_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_1*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_1* Clone()
	{
		return ((::Class_1_3AD2528CD53B1639_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_12 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_12 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_12))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_8 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3AD2528CD53B1639_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_1*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3AD2528CD53B1639_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_1*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
