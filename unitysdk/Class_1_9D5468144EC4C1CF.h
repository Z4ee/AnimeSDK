#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class BigDataAvatarRelicRecommend; }
namespace System { class String; }

#define CLASS_1_9D5468144EC4C1CF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C67D9B0)
#define CLASS_1_9D5468144EC4C1CF_CLONE_OFFSET UNITYSDK_OFFSET(0x1C67D530)
#define CLASS_1_9D5468144EC4C1CF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C67D710)
#define CLASS_1_9D5468144EC4C1CF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C67D590)
#define CLASS_1_9D5468144EC4C1CF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C67D830)
#define CLASS_1_9D5468144EC4C1CF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C67DAF0)
#define CLASS_1_9D5468144EC4C1CF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C67DA50)
#define CLASS_1_9D5468144EC4C1CF_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C67D3C0)
#define CLASS_1_9D5468144EC4C1CF_METHOD_1_96F1CABDCC6E782E_OFFSET UNITYSDK_OFFSET(0x1C67D580)
#define CLASS_1_9D5468144EC4C1CF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C67D420)
#define CLASS_1_9D5468144EC4C1CF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C67D8A0)
#define CLASS_1_9D5468144EC4C1CF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C67D900)
#define CLASS_1_9D5468144EC4C1CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C67DCB0)
#define CLASS_1_9D5468144EC4C1CF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C67D480)
#define CLASS_1_9D5468144EC4C1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67D430)

inline static constexpr unsigned int Class_1_9D5468144EC4C1CF_TypeDefinitionIndex = 31090;

class Class_1_9D5468144EC4C1CF : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::BigDataAvatarRelicRecommend*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::BigDataAvatarRelicRecommend*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D5468144EC4C1CF_TypeDefinitionIndex)->GetStaticField(0x1DC80);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_9D5468144EC4C1CF*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9D5468144EC4C1CF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D5468144EC4C1CF_TypeDefinitionIndex)->GetStaticField(0x1DC88);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::BigDataAvatarRelicRecommend*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9D5468144EC4C1CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5468144EC4C1CF*))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9D5468144EC4C1CF*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9D5468144EC4C1CF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9D5468144EC4C1CF* Clone()
	{
		return ((::Class_1_9D5468144EC4C1CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::BigDataAvatarRelicRecommend*>* Method_1_96F1CABDCC6E782E()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::BigDataAvatarRelicRecommend*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_METHOD_1_96F1CABDCC6E782E_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9D5468144EC4C1CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9D5468144EC4C1CF*))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9D5468144EC4C1CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5468144EC4C1CF*))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5468144EC4C1CF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
