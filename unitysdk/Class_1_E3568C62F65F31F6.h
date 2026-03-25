#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerAssistInfo; }
namespace System { class String; }

#define CLASS_1_E3568C62F65F31F6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E76750)
#define CLASS_1_E3568C62F65F31F6_CLONE_OFFSET UNITYSDK_OFFSET(0x17E76410)
#define CLASS_1_E3568C62F65F31F6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E76560)
#define CLASS_1_E3568C62F65F31F6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E764B0)
#define CLASS_1_E3568C62F65F31F6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E76600)
#define CLASS_1_E3568C62F65F31F6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E76820)
#define CLASS_1_E3568C62F65F31F6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E767B0)
#define CLASS_1_E3568C62F65F31F6_METHOD_1_89019532EF66F500_OFFSET UNITYSDK_OFFSET(0x17E76490)
#define CLASS_1_E3568C62F65F31F6_METHOD_1_F09A446558DACFC3_OFFSET UNITYSDK_OFFSET(0x17E764A0)
#define CLASS_1_E3568C62F65F31F6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E76380)
#define CLASS_1_E3568C62F65F31F6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E76690)
#define CLASS_1_E3568C62F65F31F6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E766F0)
#define CLASS_1_E3568C62F65F31F6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E763A0)
#define CLASS_1_E3568C62F65F31F6__CTOR_OFFSET UNITYSDK_OFFSET(0x17E76390)

inline static constexpr unsigned int Class_1_E3568C62F65F31F6_TypeDefinitionIndex = 24664;

class Class_1_E3568C62F65F31F6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Proto::PlayerAssistInfo* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E3568C62F65F31F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3568C62F65F31F6*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E3568C62F65F31F6* Clone()
	{
		return ((::Class_1_E3568C62F65F31F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_CLONE_OFFSET))(this);
	}

	::Proto::PlayerAssistInfo* Method_1_89019532EF66F500()
	{
		return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_METHOD_1_89019532EF66F500_OFFSET))(this);
	}

	::System::Void Method_1_F09A446558DACFC3(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_METHOD_1_F09A446558DACFC3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E3568C62F65F31F6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E3568C62F65F31F6*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E3568C62F65F31F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3568C62F65F31F6*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E3568C62F65F31F6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
