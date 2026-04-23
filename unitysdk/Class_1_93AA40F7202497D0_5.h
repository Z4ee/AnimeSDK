#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197D05B0)
#define CLASS_1_93AA40F7202497D0_5_CLONE_OFFSET UNITYSDK_OFFSET(0x197D03A0)
#define CLASS_1_93AA40F7202497D0_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197D0460)
#define CLASS_1_93AA40F7202497D0_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x197D0400)
#define CLASS_1_93AA40F7202497D0_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197D04B0)
#define CLASS_1_93AA40F7202497D0_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197D06B0)
#define CLASS_1_93AA40F7202497D0_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197D0680)
#define CLASS_1_93AA40F7202497D0_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x197D03F0)
#define CLASS_1_93AA40F7202497D0_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197D0320)
#define CLASS_1_93AA40F7202497D0_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x197D03E0)
#define CLASS_1_93AA40F7202497D0_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197D0350)
#define CLASS_1_93AA40F7202497D0_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197D04E0)
#define CLASS_1_93AA40F7202497D0_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x197D0540)
#define CLASS_1_93AA40F7202497D0_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x197D0720)
#define CLASS_1_93AA40F7202497D0_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197D0370)
#define CLASS_1_93AA40F7202497D0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x197D0360)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_5_TypeDefinitionIndex = 25056;

class Class_1_93AA40F7202497D0_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_5_TypeDefinitionIndex)->GetStaticField(0x61F10);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_DFCB42601400F441 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_5*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_5* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_CLONE_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_5*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_5*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
