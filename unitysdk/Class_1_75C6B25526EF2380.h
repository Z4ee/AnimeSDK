#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_75C6B25526EF2380_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A7FDF0)
#define CLASS_1_75C6B25526EF2380_CLONE_OFFSET UNITYSDK_OFFSET(0x19A7F800)
#define CLASS_1_75C6B25526EF2380_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A7F930)
#define CLASS_1_75C6B25526EF2380_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A7F8D0)
#define CLASS_1_75C6B25526EF2380_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A7FA00)
#define CLASS_1_75C6B25526EF2380_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A800A0)
#define CLASS_1_75C6B25526EF2380_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A80020)
#define CLASS_1_75C6B25526EF2380_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A7F8B0)
#define CLASS_1_75C6B25526EF2380_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A7F600)
#define CLASS_1_75C6B25526EF2380_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19A7F860)
#define CLASS_1_75C6B25526EF2380_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19A7F8A0)
#define CLASS_1_75C6B25526EF2380_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19A7F870)
#define CLASS_1_75C6B25526EF2380_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A7F8C0)
#define CLASS_1_75C6B25526EF2380_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19A7F850)
#define CLASS_1_75C6B25526EF2380_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A7F890)
#define CLASS_1_75C6B25526EF2380_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A7F880)
#define CLASS_1_75C6B25526EF2380_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A7F660)
#define CLASS_1_75C6B25526EF2380_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A7FBF0)
#define CLASS_1_75C6B25526EF2380_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A7FC50)
#define CLASS_1_75C6B25526EF2380__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A80210)
#define CLASS_1_75C6B25526EF2380__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A7F700)
#define CLASS_1_75C6B25526EF2380__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7F670)

inline static constexpr unsigned int Class_1_75C6B25526EF2380_TypeDefinitionIndex = 27330;

class Class_1_75C6B25526EF2380 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_75C6B25526EF2380*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_75C6B25526EF2380*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75C6B25526EF2380_TypeDefinitionIndex)->GetStaticField(0x51EC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75C6B25526EF2380_TypeDefinitionIndex)->GetStaticField(0x51EC8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75C6B25526EF2380_TypeDefinitionIndex)->GetStaticField(0x51ED0);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20
	::System::UInt32 Field_1_13; // 0x28
	::System::Boolean Field_1_8; // 0x2C
	::Enum_3_0A3761FE34514D6C_9 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_75C6B25526EF2380* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C6B25526EF2380*))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_75C6B25526EF2380*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_75C6B25526EF2380*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_75C6B25526EF2380* Clone()
	{
		return ((::Class_1_75C6B25526EF2380*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_9 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_9))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_75C6B25526EF2380* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_75C6B25526EF2380*))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_75C6B25526EF2380* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C6B25526EF2380*))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_75C6B25526EF2380_MERGEFROM_1_OFFSET))(this, a1);
	}
};
