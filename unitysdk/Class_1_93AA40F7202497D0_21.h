#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_6.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6AFF60)
#define CLASS_1_93AA40F7202497D0_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6AFCE0)
#define CLASS_1_93AA40F7202497D0_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6AFE10)
#define CLASS_1_93AA40F7202497D0_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6AFD70)
#define CLASS_1_93AA40F7202497D0_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6AFE60)
#define CLASS_1_93AA40F7202497D0_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6B0060)
#define CLASS_1_93AA40F7202497D0_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6B0030)
#define CLASS_1_93AA40F7202497D0_21_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6AFC30)
#define CLASS_1_93AA40F7202497D0_21_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A6AFD60)
#define CLASS_1_93AA40F7202497D0_21_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A6AFD50)
#define CLASS_1_93AA40F7202497D0_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6AFC90)
#define CLASS_1_93AA40F7202497D0_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6AFE90)
#define CLASS_1_93AA40F7202497D0_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6AFEF0)
#define CLASS_1_93AA40F7202497D0_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6B01C0)
#define CLASS_1_93AA40F7202497D0_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6AFCB0)
#define CLASS_1_93AA40F7202497D0_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6AFCA0)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_21_TypeDefinitionIndex = 32197;

class Class_1_93AA40F7202497D0_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_21_TypeDefinitionIndex)->GetStaticField(0x2F560);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_71AA90D596A09AC8_6 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_21*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_21*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_21* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_CLONE_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_6 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_6))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_21*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_21*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
