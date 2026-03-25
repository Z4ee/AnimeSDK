#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_69_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C6E050)
#define CLASS_1_4CF8088A158DCE25_69_CLONE_OFFSET UNITYSDK_OFFSET(0x17C6DD60)
#define CLASS_1_4CF8088A158DCE25_69_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C6DED0)
#define CLASS_1_4CF8088A158DCE25_69_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C6DE20)
#define CLASS_1_4CF8088A158DCE25_69_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C6DF40)
#define CLASS_1_4CF8088A158DCE25_69_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C6E130)
#define CLASS_1_4CF8088A158DCE25_69_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C6E0F0)
#define CLASS_1_4CF8088A158DCE25_69_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C6DDE0)
#define CLASS_1_4CF8088A158DCE25_69_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C6DDF0)
#define CLASS_1_4CF8088A158DCE25_69_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C6DE10)
#define CLASS_1_4CF8088A158DCE25_69_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C6DE00)
#define CLASS_1_4CF8088A158DCE25_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C6DD00)
#define CLASS_1_4CF8088A158DCE25_69_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C6DF70)
#define CLASS_1_4CF8088A158DCE25_69_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C6DFD0)
#define CLASS_1_4CF8088A158DCE25_69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C6DD20)
#define CLASS_1_4CF8088A158DCE25_69__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6DD10)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_69_TypeDefinitionIndex = 26090;

class Class_1_4CF8088A158DCE25_69 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Boolean Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_69*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_69* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_69* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_69*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_69*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_69_MERGEFROM_1_OFFSET))(this, a1);
	}
};
