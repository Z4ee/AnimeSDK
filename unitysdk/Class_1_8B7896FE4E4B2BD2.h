#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerAssistInfo; }
namespace System { class String; }

#define CLASS_1_8B7896FE4E4B2BD2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1801A590)
#define CLASS_1_8B7896FE4E4B2BD2_CLONE_OFFSET UNITYSDK_OFFSET(0x1801A200)
#define CLASS_1_8B7896FE4E4B2BD2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1801A370)
#define CLASS_1_8B7896FE4E4B2BD2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1801A2C0)
#define CLASS_1_8B7896FE4E4B2BD2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1801A420)
#define CLASS_1_8B7896FE4E4B2BD2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1801A6D0)
#define CLASS_1_8B7896FE4E4B2BD2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1801A660)
#define CLASS_1_8B7896FE4E4B2BD2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1801A2A0)
#define CLASS_1_8B7896FE4E4B2BD2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1801A2B0)
#define CLASS_1_8B7896FE4E4B2BD2_METHOD_1_89019532EF66F500_OFFSET UNITYSDK_OFFSET(0x1801A280)
#define CLASS_1_8B7896FE4E4B2BD2_METHOD_1_F09A446558DACFC3_OFFSET UNITYSDK_OFFSET(0x1801A290)
#define CLASS_1_8B7896FE4E4B2BD2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1801A170)
#define CLASS_1_8B7896FE4E4B2BD2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1801A4B0)
#define CLASS_1_8B7896FE4E4B2BD2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1801A510)
#define CLASS_1_8B7896FE4E4B2BD2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1801A190)
#define CLASS_1_8B7896FE4E4B2BD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1801A180)

inline static constexpr unsigned int Class_1_8B7896FE4E4B2BD2_TypeDefinitionIndex = 24658;

class Class_1_8B7896FE4E4B2BD2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Proto::PlayerAssistInfo* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8B7896FE4E4B2BD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8B7896FE4E4B2BD2*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8B7896FE4E4B2BD2* Clone()
	{
		return ((::Class_1_8B7896FE4E4B2BD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_CLONE_OFFSET))(this);
	}

	::Proto::PlayerAssistInfo* Method_1_89019532EF66F500()
	{
		return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_METHOD_1_89019532EF66F500_OFFSET))(this);
	}

	::System::Void Method_1_F09A446558DACFC3(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_METHOD_1_F09A446558DACFC3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8B7896FE4E4B2BD2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8B7896FE4E4B2BD2*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8B7896FE4E4B2BD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8B7896FE4E4B2BD2*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8B7896FE4E4B2BD2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
