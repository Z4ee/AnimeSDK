#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A809200)
#define CLASS_1_93AA40F7202497D0_CLONE_OFFSET UNITYSDK_OFFSET(0x1A808F80)
#define CLASS_1_93AA40F7202497D0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8090B0)
#define CLASS_1_93AA40F7202497D0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A809010)
#define CLASS_1_93AA40F7202497D0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A809100)
#define CLASS_1_93AA40F7202497D0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A809300)
#define CLASS_1_93AA40F7202497D0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8092D0)
#define CLASS_1_93AA40F7202497D0_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A808ED0)
#define CLASS_1_93AA40F7202497D0_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A809000)
#define CLASS_1_93AA40F7202497D0_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A808FF0)
#define CLASS_1_93AA40F7202497D0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A808F30)
#define CLASS_1_93AA40F7202497D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A809130)
#define CLASS_1_93AA40F7202497D0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A809190)
#define CLASS_1_93AA40F7202497D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A809460)
#define CLASS_1_93AA40F7202497D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A808F50)
#define CLASS_1_93AA40F7202497D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A808F40)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_TypeDefinitionIndex = 24273;

class Class_1_93AA40F7202497D0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_TypeDefinitionIndex)->GetStaticField(0x195C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_DB663931210BBC27_9 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0* Clone()
	{
		return ((::Class_1_93AA40F7202497D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_9 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
