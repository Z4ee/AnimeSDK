#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6EBEA8069CDA622C_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B6D100)
#define CLASS_1_6EBEA8069CDA622C_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17B6CD60)
#define CLASS_1_6EBEA8069CDA622C_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B6CE80)
#define CLASS_1_6EBEA8069CDA622C_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B6CE20)
#define CLASS_1_6EBEA8069CDA622C_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B6CF70)
#define CLASS_1_6EBEA8069CDA622C_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B6D200)
#define CLASS_1_6EBEA8069CDA622C_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B6D1B0)
#define CLASS_1_6EBEA8069CDA622C_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B6CDE0)
#define CLASS_1_6EBEA8069CDA622C_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B6CDF0)
#define CLASS_1_6EBEA8069CDA622C_5_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x17B6CE10)
#define CLASS_1_6EBEA8069CDA622C_5_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x17B6CE00)
#define CLASS_1_6EBEA8069CDA622C_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B6CD00)
#define CLASS_1_6EBEA8069CDA622C_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B6D010)
#define CLASS_1_6EBEA8069CDA622C_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B6D070)
#define CLASS_1_6EBEA8069CDA622C_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B6CD20)
#define CLASS_1_6EBEA8069CDA622C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6CD10)

inline static constexpr unsigned int Class_1_6EBEA8069CDA622C_5_TypeDefinitionIndex = 23147;

class Class_1_6EBEA8069CDA622C_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Double Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6EBEA8069CDA622C_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_5*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6EBEA8069CDA622C_5* Clone()
	{
		return ((::Class_1_6EBEA8069CDA622C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6EBEA8069CDA622C_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_5*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6EBEA8069CDA622C_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_5*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
