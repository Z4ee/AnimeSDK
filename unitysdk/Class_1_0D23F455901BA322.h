#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0D23F455901BA322_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FB7170)
#define CLASS_1_0D23F455901BA322_CLONE_OFFSET UNITYSDK_OFFSET(0x19FB6C60)
#define CLASS_1_0D23F455901BA322_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FB6E10)
#define CLASS_1_0D23F455901BA322_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FB6D20)
#define CLASS_1_0D23F455901BA322_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FB6EC0)
#define CLASS_1_0D23F455901BA322_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FB7410)
#define CLASS_1_0D23F455901BA322_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FB73A0)
#define CLASS_1_0D23F455901BA322_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19FB6CD0)
#define CLASS_1_0D23F455901BA322_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19FB6B00)
#define CLASS_1_0D23F455901BA322_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19FB6CF0)
#define CLASS_1_0D23F455901BA322_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19FB6CB0)
#define CLASS_1_0D23F455901BA322_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19FB6CE0)
#define CLASS_1_0D23F455901BA322_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19FB6D10)
#define CLASS_1_0D23F455901BA322_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19FB6CC0)
#define CLASS_1_0D23F455901BA322_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19FB6D00)
#define CLASS_1_0D23F455901BA322_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FB6B60)
#define CLASS_1_0D23F455901BA322_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FB6FD0)
#define CLASS_1_0D23F455901BA322_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FB7030)
#define CLASS_1_0D23F455901BA322__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB7530)
#define CLASS_1_0D23F455901BA322__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FB6BC0)
#define CLASS_1_0D23F455901BA322__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB6B70)

inline static constexpr unsigned int Class_1_0D23F455901BA322_TypeDefinitionIndex = 28380;

class Class_1_0D23F455901BA322 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D23F455901BA322_TypeDefinitionIndex)->GetStaticField(0xE040);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_0D23F455901BA322*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0D23F455901BA322*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D23F455901BA322_TypeDefinitionIndex)->GetStaticField(0xE048);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Enum_3_0A3761FE34514D6C_45 Field_1_8; // 0x20
	::System::Boolean Field_1_9; // 0x24
	::System::UInt64 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0D23F455901BA322* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D23F455901BA322*))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0D23F455901BA322*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0D23F455901BA322*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0D23F455901BA322* Clone()
	{
		return ((::Class_1_0D23F455901BA322*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_45 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_45(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_45 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_45))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0D23F455901BA322* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0D23F455901BA322*))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0D23F455901BA322* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D23F455901BA322*))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0D23F455901BA322_MERGEFROM_1_OFFSET))(this, a1);
	}
};
