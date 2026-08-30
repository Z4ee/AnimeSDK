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

#define CLASS_1_1268502D35D89F60_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15F120)
#define CLASS_1_1268502D35D89F60_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15EA20)
#define CLASS_1_1268502D35D89F60_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15EC30)
#define CLASS_1_1268502D35D89F60_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15EAC0)
#define CLASS_1_1268502D35D89F60_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15EF00)
#define CLASS_1_1268502D35D89F60_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15F270)
#define CLASS_1_1268502D35D89F60_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15F180)
#define CLASS_1_1268502D35D89F60_METHOD_1_52252D4E87F031B5_OFFSET UNITYSDK_OFFSET(0x1E15EAA0)
#define CLASS_1_1268502D35D89F60_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E15E960)
#define CLASS_1_1268502D35D89F60_METHOD_1_77F8C554D3EA21B6_OFFSET UNITYSDK_OFFSET(0x1E15EAB0)
#define CLASS_1_1268502D35D89F60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15E990)
#define CLASS_1_1268502D35D89F60_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15F030)
#define CLASS_1_1268502D35D89F60_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15F090)
#define CLASS_1_1268502D35D89F60__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15F440)
#define CLASS_1_1268502D35D89F60__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15E9B0)
#define CLASS_1_1268502D35D89F60__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15E9A0)

inline static constexpr unsigned int Class_1_1268502D35D89F60_TypeDefinitionIndex = 29290;

class Class_1_1268502D35D89F60 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1268502D35D89F60_TypeDefinitionIndex)->GetStaticField(0x1E260);
	}
	// static const ::System::Int32 KBMGGGHELJP = 0x8; // 0x0
	::Proto::HeliobusChallengeLineup* MNJNMPKLFAI; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1268502D35D89F60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1268502D35D89F60*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1268502D35D89F60* Clone()
	{
		return ((::Class_1_1268502D35D89F60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_CLONE_OFFSET))(this);
	}

	::Proto::HeliobusChallengeLineup* Method_1_52252D4E87F031B5()
	{
		return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_METHOD_1_52252D4E87F031B5_OFFSET))(this);
	}

	::System::Void Method_1_77F8C554D3EA21B6(::Proto::HeliobusChallengeLineup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_METHOD_1_77F8C554D3EA21B6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1268502D35D89F60* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1268502D35D89F60*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1268502D35D89F60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1268502D35D89F60*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_MERGEFROM_1_OFFSET))(this, a1);
	}
};
