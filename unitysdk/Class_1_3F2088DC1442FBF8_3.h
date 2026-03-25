#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3F2088DC1442FBF8_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ED33C0)
#define CLASS_1_3F2088DC1442FBF8_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17ED2E40)
#define CLASS_1_3F2088DC1442FBF8_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ED30C0)
#define CLASS_1_3F2088DC1442FBF8_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ED2FC0)
#define CLASS_1_3F2088DC1442FBF8_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ED3180)
#define CLASS_1_3F2088DC1442FBF8_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ED35A0)
#define CLASS_1_3F2088DC1442FBF8_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ED3510)
#define CLASS_1_3F2088DC1442FBF8_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17ED2FA0)
#define CLASS_1_3F2088DC1442FBF8_3_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17ED2EF0)
#define CLASS_1_3F2088DC1442FBF8_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17ED2FB0)
#define CLASS_1_3F2088DC1442FBF8_3_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17ED2F00)
#define CLASS_1_3F2088DC1442FBF8_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ED2D60)
#define CLASS_1_3F2088DC1442FBF8_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ED32B0)
#define CLASS_1_3F2088DC1442FBF8_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ED3310)
#define CLASS_1_3F2088DC1442FBF8_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ED2DC0)
#define CLASS_1_3F2088DC1442FBF8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED2D70)

inline static constexpr unsigned int Class_1_3F2088DC1442FBF8_3_TypeDefinitionIndex = 24400;

class Class_1_3F2088DC1442FBF8_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::ByteString* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3F2088DC1442FBF8_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_3*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3F2088DC1442FBF8_3* Clone()
	{
		return ((::Class_1_3F2088DC1442FBF8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3F2088DC1442FBF8_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_3*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3F2088DC1442FBF8_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_3*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
