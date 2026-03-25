#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class HeliobusChallengeLineup; }
namespace System { class String; }

#define CLASS_1_A315E2F70AEA848D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18090A20)
#define CLASS_1_A315E2F70AEA848D_CLONE_OFFSET UNITYSDK_OFFSET(0x18090720)
#define CLASS_1_A315E2F70AEA848D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18090870)
#define CLASS_1_A315E2F70AEA848D_EQUALS_OFFSET UNITYSDK_OFFSET(0x180907C0)
#define CLASS_1_A315E2F70AEA848D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18090910)
#define CLASS_1_A315E2F70AEA848D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18090B70)
#define CLASS_1_A315E2F70AEA848D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18090A80)
#define CLASS_1_A315E2F70AEA848D_METHOD_1_52252D4E87F031B5_OFFSET UNITYSDK_OFFSET(0x180907A0)
#define CLASS_1_A315E2F70AEA848D_METHOD_1_77F8C554D3EA21B6_OFFSET UNITYSDK_OFFSET(0x180907B0)
#define CLASS_1_A315E2F70AEA848D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18090690)
#define CLASS_1_A315E2F70AEA848D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18090960)
#define CLASS_1_A315E2F70AEA848D_WRITETO_OFFSET UNITYSDK_OFFSET(0x180909C0)
#define CLASS_1_A315E2F70AEA848D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180906B0)
#define CLASS_1_A315E2F70AEA848D__CTOR_OFFSET UNITYSDK_OFFSET(0x180906A0)

inline static constexpr unsigned int Class_1_A315E2F70AEA848D_TypeDefinitionIndex = 25037;

class Class_1_A315E2F70AEA848D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::HeliobusChallengeLineup* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A315E2F70AEA848D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A315E2F70AEA848D*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A315E2F70AEA848D* Clone()
	{
		return ((::Class_1_A315E2F70AEA848D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_CLONE_OFFSET))(this);
	}

	::Proto::HeliobusChallengeLineup* Method_1_52252D4E87F031B5()
	{
		return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_METHOD_1_52252D4E87F031B5_OFFSET))(this);
	}

	::System::Void Method_1_77F8C554D3EA21B6(::Proto::HeliobusChallengeLineup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_METHOD_1_77F8C554D3EA21B6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A315E2F70AEA848D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A315E2F70AEA848D*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A315E2F70AEA848D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A315E2F70AEA848D*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A315E2F70AEA848D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
