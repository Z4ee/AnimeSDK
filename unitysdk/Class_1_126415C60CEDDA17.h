#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_126415C60CEDDA17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C480570)
#define CLASS_1_126415C60CEDDA17_CLONE_OFFSET UNITYSDK_OFFSET(0x1C4800A0)
#define CLASS_1_126415C60CEDDA17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C480220)
#define CLASS_1_126415C60CEDDA17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C480180)
#define CLASS_1_126415C60CEDDA17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C480320)
#define CLASS_1_126415C60CEDDA17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C4806C0)
#define CLASS_1_126415C60CEDDA17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C480670)
#define CLASS_1_126415C60CEDDA17_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1C480170)
#define CLASS_1_126415C60CEDDA17_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C47FFE0)
#define CLASS_1_126415C60CEDDA17_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C480150)
#define CLASS_1_126415C60CEDDA17_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C480130)
#define CLASS_1_126415C60CEDDA17_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1C480160)
#define CLASS_1_126415C60CEDDA17_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C480140)
#define CLASS_1_126415C60CEDDA17_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C480120)
#define CLASS_1_126415C60CEDDA17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C480040)
#define CLASS_1_126415C60CEDDA17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C480370)
#define CLASS_1_126415C60CEDDA17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C4803D0)
#define CLASS_1_126415C60CEDDA17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C480860)
#define CLASS_1_126415C60CEDDA17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C480060)
#define CLASS_1_126415C60CEDDA17__CTOR_OFFSET UNITYSDK_OFFSET(0x1C480050)

inline static constexpr unsigned int Class_1_126415C60CEDDA17_TypeDefinitionIndex = 29685;

class Class_1_126415C60CEDDA17 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_126415C60CEDDA17*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_126415C60CEDDA17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_126415C60CEDDA17_TypeDefinitionIndex)->GetStaticField(0x28B00);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Boolean Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x19
	::System::UInt64 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_126415C60CEDDA17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_126415C60CEDDA17*))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_126415C60CEDDA17*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_126415C60CEDDA17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_126415C60CEDDA17* Clone()
	{
		return ((::Class_1_126415C60CEDDA17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_126415C60CEDDA17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_126415C60CEDDA17*))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_126415C60CEDDA17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_126415C60CEDDA17*))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_126415C60CEDDA17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
