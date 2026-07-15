#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BAE7C70)
#define CLASS_1_93AA40F7202497D0_19_CLONE_OFFSET UNITYSDK_OFFSET(0x1BAE78A0)
#define CLASS_1_93AA40F7202497D0_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BAE79D0)
#define CLASS_1_93AA40F7202497D0_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BAE7900)
#define CLASS_1_93AA40F7202497D0_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BAE7B40)
#define CLASS_1_93AA40F7202497D0_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BAE7D70)
#define CLASS_1_93AA40F7202497D0_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BAE7D40)
#define CLASS_1_93AA40F7202497D0_19_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BAE78F0)
#define CLASS_1_93AA40F7202497D0_19_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BAE7820)
#define CLASS_1_93AA40F7202497D0_19_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1BAE78E0)
#define CLASS_1_93AA40F7202497D0_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BAE7850)
#define CLASS_1_93AA40F7202497D0_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BAE7B70)
#define CLASS_1_93AA40F7202497D0_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BAE7BD0)
#define CLASS_1_93AA40F7202497D0_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAE7ED0)
#define CLASS_1_93AA40F7202497D0_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BAE7870)
#define CLASS_1_93AA40F7202497D0_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE7860)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_19_TypeDefinitionIndex = 32214;

class Class_1_93AA40F7202497D0_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_19*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_19_TypeDefinitionIndex)->GetStaticField(0x4F530);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_0F1B992870941C13_4 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_19*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_19*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_19*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_19* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_CLONE_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_19*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_19*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
