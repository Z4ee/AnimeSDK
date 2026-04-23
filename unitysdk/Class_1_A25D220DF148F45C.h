#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_11.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A25D220DF148F45C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1973EF60)
#define CLASS_1_A25D220DF148F45C_CLONE_OFFSET UNITYSDK_OFFSET(0x1973EB40)
#define CLASS_1_A25D220DF148F45C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1973ECC0)
#define CLASS_1_A25D220DF148F45C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1973EBA0)
#define CLASS_1_A25D220DF148F45C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1973EDB0)
#define CLASS_1_A25D220DF148F45C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1973F140)
#define CLASS_1_A25D220DF148F45C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1973F040)
#define CLASS_1_A25D220DF148F45C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1973EB80)
#define CLASS_1_A25D220DF148F45C_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1973EB70)
#define CLASS_1_A25D220DF148F45C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1973EA00)
#define CLASS_1_A25D220DF148F45C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1973EB90)
#define CLASS_1_A25D220DF148F45C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1973EA30)
#define CLASS_1_A25D220DF148F45C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1973EE30)
#define CLASS_1_A25D220DF148F45C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1973EE90)
#define CLASS_1_A25D220DF148F45C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1973F230)
#define CLASS_1_A25D220DF148F45C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1973EA80)
#define CLASS_1_A25D220DF148F45C__CTOR_OFFSET UNITYSDK_OFFSET(0x1973EA40)

inline static constexpr unsigned int Class_1_A25D220DF148F45C_TypeDefinitionIndex = 28603;

class Class_1_A25D220DF148F45C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_11>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_11>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A25D220DF148F45C_TypeDefinitionIndex)->GetStaticField(0x55220);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A25D220DF148F45C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A25D220DF148F45C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A25D220DF148F45C_TypeDefinitionIndex)->GetStaticField(0x55228);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_11>* Field_1_4; // 0x10
	::Class_1_36E3880E987172D7_4* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A25D220DF148F45C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A25D220DF148F45C*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A25D220DF148F45C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A25D220DF148F45C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A25D220DF148F45C* Clone()
	{
		return ((::Class_1_A25D220DF148F45C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_11>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_11>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::Class_1_36E3880E987172D7_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_36E3880E987172D7_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_36E3880E987172D7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_4*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A25D220DF148F45C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A25D220DF148F45C*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A25D220DF148F45C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A25D220DF148F45C*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
