#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_80;
class Class_1_B87B938F2BCBD84D_6;
class Class_1_BB3E6AE176160DE3_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1EFCDE13B7317BD9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD853A0)
#define CLASS_1_1EFCDE13B7317BD9_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD84C20)
#define CLASS_1_1EFCDE13B7317BD9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD84D20)
#define CLASS_1_1EFCDE13B7317BD9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD84CC0)
#define CLASS_1_1EFCDE13B7317BD9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD84F40)
#define CLASS_1_1EFCDE13B7317BD9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD856A0)
#define CLASS_1_1EFCDE13B7317BD9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD854E0)
#define CLASS_1_1EFCDE13B7317BD9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD84CA0)
#define CLASS_1_1EFCDE13B7317BD9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CD849D0)
#define CLASS_1_1EFCDE13B7317BD9_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CD84C90)
#define CLASS_1_1EFCDE13B7317BD9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1CD84C80)
#define CLASS_1_1EFCDE13B7317BD9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CD84C70)
#define CLASS_1_1EFCDE13B7317BD9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD84CB0)
#define CLASS_1_1EFCDE13B7317BD9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD84A30)
#define CLASS_1_1EFCDE13B7317BD9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD851A0)
#define CLASS_1_1EFCDE13B7317BD9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD85200)
#define CLASS_1_1EFCDE13B7317BD9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD858B0)
#define CLASS_1_1EFCDE13B7317BD9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD84B00)
#define CLASS_1_1EFCDE13B7317BD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD84A40)

inline static constexpr unsigned int Class_1_1EFCDE13B7317BD9_TypeDefinitionIndex = 30465;

class Class_1_1EFCDE13B7317BD9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_BB3E6AE176160DE3_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_BB3E6AE176160DE3_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EFCDE13B7317BD9_TypeDefinitionIndex)->GetStaticField(0x9D30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_1EFCDE13B7317BD9*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1EFCDE13B7317BD9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EFCDE13B7317BD9_TypeDefinitionIndex)->GetStaticField(0x9D38);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EFCDE13B7317BD9_TypeDefinitionIndex)->GetStaticField(0x9D40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B87B938F2BCBD84D_6*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B87B938F2BCBD84D_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EFCDE13B7317BD9_TypeDefinitionIndex)->GetStaticField(0x9D48);
	}
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B87B938F2BCBD84D_6*>* Field_1_8; // 0x10
	::Class_1_075C34D03AFA1215_80* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB3E6AE176160DE3_1*>* Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1EFCDE13B7317BD9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EFCDE13B7317BD9*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1EFCDE13B7317BD9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1EFCDE13B7317BD9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1EFCDE13B7317BD9* Clone()
	{
		return ((::Class_1_1EFCDE13B7317BD9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B87B938F2BCBD84D_6*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B87B938F2BCBD84D_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB3E6AE176160DE3_1*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB3E6AE176160DE3_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_80* Method_1_24748FC20F375725()
	{
		return ((::Class_1_075C34D03AFA1215_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1EFCDE13B7317BD9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1EFCDE13B7317BD9*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1EFCDE13B7317BD9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EFCDE13B7317BD9*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1EFCDE13B7317BD9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
