#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_333B902B2174BECA_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8D60F0)
#define CLASS_1_333B902B2174BECA_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8D5AE0)
#define CLASS_1_333B902B2174BECA_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8D5BF0)
#define CLASS_1_333B902B2174BECA_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8D5B90)
#define CLASS_1_333B902B2174BECA_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8D5D20)
#define CLASS_1_333B902B2174BECA_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8D6330)
#define CLASS_1_333B902B2174BECA_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8D62C0)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C8D5B70)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8D5B50)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8D58F0)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1C8D5B40)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C8D5B30)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C8D5B80)
#define CLASS_1_333B902B2174BECA_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8D5B60)
#define CLASS_1_333B902B2174BECA_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8D5950)
#define CLASS_1_333B902B2174BECA_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8D5EF0)
#define CLASS_1_333B902B2174BECA_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8D5F50)
#define CLASS_1_333B902B2174BECA_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8D6480)
#define CLASS_1_333B902B2174BECA_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8D59F0)
#define CLASS_1_333B902B2174BECA_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D5960)

inline static constexpr unsigned int Class_1_333B902B2174BECA_3_TypeDefinitionIndex = 26074;

class Class_1_333B902B2174BECA_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_3_TypeDefinitionIndex)->GetStaticField(0x4DC70);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_3_TypeDefinitionIndex)->GetStaticField(0x4DC78);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_3_TypeDefinitionIndex)->GetStaticField(0x4DC80);
	}
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_333B902B2174BECA_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_3*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_333B902B2174BECA_3* Clone()
	{
		return ((::Class_1_333B902B2174BECA_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_333B902B2174BECA_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_333B902B2174BECA_3*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_333B902B2174BECA_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_3*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
