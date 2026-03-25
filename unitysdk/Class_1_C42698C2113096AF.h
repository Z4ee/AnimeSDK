#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C42698C2113096AF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F5B1D0)
#define CLASS_1_C42698C2113096AF_CLONE_OFFSET UNITYSDK_OFFSET(0x17F5ACF0)
#define CLASS_1_C42698C2113096AF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F5AE40)
#define CLASS_1_C42698C2113096AF_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F5AE10)
#define CLASS_1_C42698C2113096AF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F5AF70)
#define CLASS_1_C42698C2113096AF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F5B400)
#define CLASS_1_C42698C2113096AF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F5B380)
#define CLASS_1_C42698C2113096AF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F5ADD0)
#define CLASS_1_C42698C2113096AF_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17F5AD50)
#define CLASS_1_C42698C2113096AF_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17F5AD60)
#define CLASS_1_C42698C2113096AF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F5ADE0)
#define CLASS_1_C42698C2113096AF_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x17F5AE00)
#define CLASS_1_C42698C2113096AF_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x17F5ADF0)
#define CLASS_1_C42698C2113096AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F5AC80)
#define CLASS_1_C42698C2113096AF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F5B0A0)
#define CLASS_1_C42698C2113096AF_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F5B100)
#define CLASS_1_C42698C2113096AF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F5ACA0)
#define CLASS_1_C42698C2113096AF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5AC90)

inline static constexpr unsigned int Class_1_C42698C2113096AF_TypeDefinitionIndex = 23055;

class Class_1_C42698C2113096AF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Double Field_1_6; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C42698C2113096AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C42698C2113096AF*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C42698C2113096AF* Clone()
	{
		return ((::Class_1_C42698C2113096AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C42698C2113096AF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C42698C2113096AF*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C42698C2113096AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C42698C2113096AF*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C42698C2113096AF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
