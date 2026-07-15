#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_8.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C828E90)
#define CLASS_1_93AA40F7202497D0_18_CLONE_OFFSET UNITYSDK_OFFSET(0x1C828A60)
#define CLASS_1_93AA40F7202497D0_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C828BF0)
#define CLASS_1_93AA40F7202497D0_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C828AF0)
#define CLASS_1_93AA40F7202497D0_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C828D60)
#define CLASS_1_93AA40F7202497D0_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C828F90)
#define CLASS_1_93AA40F7202497D0_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C828F60)
#define CLASS_1_93AA40F7202497D0_18_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8289B0)
#define CLASS_1_93AA40F7202497D0_18_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C828AE0)
#define CLASS_1_93AA40F7202497D0_18_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C828AD0)
#define CLASS_1_93AA40F7202497D0_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C828A10)
#define CLASS_1_93AA40F7202497D0_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C828D90)
#define CLASS_1_93AA40F7202497D0_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C828DF0)
#define CLASS_1_93AA40F7202497D0_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8290F0)
#define CLASS_1_93AA40F7202497D0_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C828A30)
#define CLASS_1_93AA40F7202497D0_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1C828A20)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_18_TypeDefinitionIndex = 31092;

class Class_1_93AA40F7202497D0_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_18*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_18_TypeDefinitionIndex)->GetStaticField(0x241C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_0F1B992870941C13_8 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_18*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_18*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_18*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_18* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_CLONE_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_8))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_18*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_18*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
