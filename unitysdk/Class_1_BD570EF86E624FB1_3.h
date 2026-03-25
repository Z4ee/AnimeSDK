#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BD570EF86E624FB1_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C73710)
#define CLASS_1_BD570EF86E624FB1_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17C73490)
#define CLASS_1_BD570EF86E624FB1_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C73590)
#define CLASS_1_BD570EF86E624FB1_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C73520)
#define CLASS_1_BD570EF86E624FB1_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C735F0)
#define CLASS_1_BD570EF86E624FB1_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C738C0)
#define CLASS_1_BD570EF86E624FB1_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C73880)
#define CLASS_1_BD570EF86E624FB1_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C734E0)
#define CLASS_1_BD570EF86E624FB1_3_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17C73510)
#define CLASS_1_BD570EF86E624FB1_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C734F0)
#define CLASS_1_BD570EF86E624FB1_3_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17C73500)
#define CLASS_1_BD570EF86E624FB1_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C73430)
#define CLASS_1_BD570EF86E624FB1_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C73630)
#define CLASS_1_BD570EF86E624FB1_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C73690)
#define CLASS_1_BD570EF86E624FB1_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C73450)
#define CLASS_1_BD570EF86E624FB1_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17C73440)

inline static constexpr unsigned int Class_1_BD570EF86E624FB1_3_TypeDefinitionIndex = 24095;

class Class_1_BD570EF86E624FB1_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Int64 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BD570EF86E624FB1_3* Clone()
	{
		return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD570EF86E624FB1_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
