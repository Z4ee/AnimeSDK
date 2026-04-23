#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_16_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1967CF40)
#define CLASS_1_93AA40F7202497D0_16_CLONE_OFFSET UNITYSDK_OFFSET(0x1967CCC0)
#define CLASS_1_93AA40F7202497D0_16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1967CDF0)
#define CLASS_1_93AA40F7202497D0_16_EQUALS_OFFSET UNITYSDK_OFFSET(0x1967CD50)
#define CLASS_1_93AA40F7202497D0_16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1967CE40)
#define CLASS_1_93AA40F7202497D0_16_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1967D040)
#define CLASS_1_93AA40F7202497D0_16_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1967D010)
#define CLASS_1_93AA40F7202497D0_16_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1967CC10)
#define CLASS_1_93AA40F7202497D0_16_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1967CD40)
#define CLASS_1_93AA40F7202497D0_16_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1967CD30)
#define CLASS_1_93AA40F7202497D0_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1967CC70)
#define CLASS_1_93AA40F7202497D0_16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1967CE70)
#define CLASS_1_93AA40F7202497D0_16_WRITETO_OFFSET UNITYSDK_OFFSET(0x1967CED0)
#define CLASS_1_93AA40F7202497D0_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1967D0B0)
#define CLASS_1_93AA40F7202497D0_16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1967CC90)
#define CLASS_1_93AA40F7202497D0_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1967CC80)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_16_TypeDefinitionIndex = 30044;

class Class_1_93AA40F7202497D0_16 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_16_TypeDefinitionIndex)->GetStaticField(0x44910);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_63CAB6C405C6C7B1 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_16*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_16* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_CLONE_OFFSET))(this);
	}

	::Enum_3_63CAB6C405C6C7B1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63CAB6C405C6C7B1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63CAB6C405C6C7B1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63CAB6C405C6C7B1))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_16* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_16*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_16*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_MERGEFROM_1_OFFSET))(this, a1);
	}
};
