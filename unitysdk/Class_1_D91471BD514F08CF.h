#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class HeliobusChallengeLineup; }
namespace System { class String; }

#define CLASS_1_D91471BD514F08CF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192A2640)
#define CLASS_1_D91471BD514F08CF_CLONE_OFFSET UNITYSDK_OFFSET(0x192A2340)
#define CLASS_1_D91471BD514F08CF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192A2490)
#define CLASS_1_D91471BD514F08CF_EQUALS_OFFSET UNITYSDK_OFFSET(0x192A23E0)
#define CLASS_1_D91471BD514F08CF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192A2530)
#define CLASS_1_D91471BD514F08CF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192A2790)
#define CLASS_1_D91471BD514F08CF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192A26A0)
#define CLASS_1_D91471BD514F08CF_METHOD_1_52252D4E87F031B5_OFFSET UNITYSDK_OFFSET(0x192A23C0)
#define CLASS_1_D91471BD514F08CF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192A2280)
#define CLASS_1_D91471BD514F08CF_METHOD_1_77F8C554D3EA21B6_OFFSET UNITYSDK_OFFSET(0x192A23D0)
#define CLASS_1_D91471BD514F08CF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192A22B0)
#define CLASS_1_D91471BD514F08CF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192A2580)
#define CLASS_1_D91471BD514F08CF_WRITETO_OFFSET UNITYSDK_OFFSET(0x192A25E0)
#define CLASS_1_D91471BD514F08CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x192A2890)
#define CLASS_1_D91471BD514F08CF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192A22D0)
#define CLASS_1_D91471BD514F08CF__CTOR_OFFSET UNITYSDK_OFFSET(0x192A22C0)

inline static constexpr unsigned int Class_1_D91471BD514F08CF_TypeDefinitionIndex = 28062;

class Class_1_D91471BD514F08CF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D91471BD514F08CF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D91471BD514F08CF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D91471BD514F08CF_TypeDefinitionIndex)->GetStaticField(0x541B0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::HeliobusChallengeLineup* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D91471BD514F08CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D91471BD514F08CF*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D91471BD514F08CF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D91471BD514F08CF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D91471BD514F08CF* Clone()
	{
		return ((::Class_1_D91471BD514F08CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_CLONE_OFFSET))(this);
	}

	::Proto::HeliobusChallengeLineup* Method_1_52252D4E87F031B5()
	{
		return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_METHOD_1_52252D4E87F031B5_OFFSET))(this);
	}

	::System::Void Method_1_77F8C554D3EA21B6(::Proto::HeliobusChallengeLineup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_METHOD_1_77F8C554D3EA21B6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D91471BD514F08CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D91471BD514F08CF*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D91471BD514F08CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D91471BD514F08CF*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
