#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DB9F32FCA772D309_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6A1C00)
#define CLASS_1_DB9F32FCA772D309_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6A1690)
#define CLASS_1_DB9F32FCA772D309_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6A1770)
#define CLASS_1_DB9F32FCA772D309_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6A1710)
#define CLASS_1_DB9F32FCA772D309_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6A1880)
#define CLASS_1_DB9F32FCA772D309_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6A1DE0)
#define CLASS_1_DB9F32FCA772D309_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6A1D10)
#define CLASS_1_DB9F32FCA772D309_5_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1A6A16F0)
#define CLASS_1_DB9F32FCA772D309_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6A1490)
#define CLASS_1_DB9F32FCA772D309_5_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A6A1700)
#define CLASS_1_DB9F32FCA772D309_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A6A16E0)
#define CLASS_1_DB9F32FCA772D309_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6A14F0)
#define CLASS_1_DB9F32FCA772D309_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6A1A90)
#define CLASS_1_DB9F32FCA772D309_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6A1AF0)
#define CLASS_1_DB9F32FCA772D309_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1F60)
#define CLASS_1_DB9F32FCA772D309_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6A15E0)
#define CLASS_1_DB9F32FCA772D309_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1500)

inline static constexpr unsigned int Class_1_DB9F32FCA772D309_5_TypeDefinitionIndex = 31565;

class Class_1_DB9F32FCA772D309_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DB9F32FCA772D309_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DB9F32FCA772D309_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB9F32FCA772D309_5_TypeDefinitionIndex)->GetStaticField(0x2E3C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_66>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_66>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB9F32FCA772D309_5_TypeDefinitionIndex)->GetStaticField(0x2E3C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB9F32FCA772D309_5_TypeDefinitionIndex)->GetStaticField(0x2E3D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB9F32FCA772D309_5_TypeDefinitionIndex)->GetStaticField(0x2E3D8);
	}
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_66>* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DB9F32FCA772D309_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB9F32FCA772D309_5*))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DB9F32FCA772D309_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DB9F32FCA772D309_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DB9F32FCA772D309_5* Clone()
	{
		return ((::Class_1_DB9F32FCA772D309_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_66>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_66>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DB9F32FCA772D309_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DB9F32FCA772D309_5*))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DB9F32FCA772D309_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB9F32FCA772D309_5*))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DB9F32FCA772D309_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
