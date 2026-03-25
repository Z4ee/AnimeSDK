#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6EBEA8069CDA622C_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18118B40)
#define CLASS_1_6EBEA8069CDA622C_1_CLONE_OFFSET UNITYSDK_OFFSET(0x181187A0)
#define CLASS_1_6EBEA8069CDA622C_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181188C0)
#define CLASS_1_6EBEA8069CDA622C_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x18118860)
#define CLASS_1_6EBEA8069CDA622C_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181189B0)
#define CLASS_1_6EBEA8069CDA622C_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18118C40)
#define CLASS_1_6EBEA8069CDA622C_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18118BF0)
#define CLASS_1_6EBEA8069CDA622C_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18118820)
#define CLASS_1_6EBEA8069CDA622C_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18118830)
#define CLASS_1_6EBEA8069CDA622C_1_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x18118850)
#define CLASS_1_6EBEA8069CDA622C_1_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x18118840)
#define CLASS_1_6EBEA8069CDA622C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18118740)
#define CLASS_1_6EBEA8069CDA622C_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18118A50)
#define CLASS_1_6EBEA8069CDA622C_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x18118AB0)
#define CLASS_1_6EBEA8069CDA622C_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18118760)
#define CLASS_1_6EBEA8069CDA622C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18118750)

inline static constexpr unsigned int Class_1_6EBEA8069CDA622C_1_TypeDefinitionIndex = 23077;

class Class_1_6EBEA8069CDA622C_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Double Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6EBEA8069CDA622C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_1*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6EBEA8069CDA622C_1* Clone()
	{
		return ((::Class_1_6EBEA8069CDA622C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6EBEA8069CDA622C_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_1*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6EBEA8069CDA622C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_1*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6EBEA8069CDA622C_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
