#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE20060)
#define CLASS_1_93AA40F7202497D0_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1FC90)
#define CLASS_1_93AA40F7202497D0_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1FDC0)
#define CLASS_1_93AA40F7202497D0_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1FCF0)
#define CLASS_1_93AA40F7202497D0_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1FF30)
#define CLASS_1_93AA40F7202497D0_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE20160)
#define CLASS_1_93AA40F7202497D0_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE20130)
#define CLASS_1_93AA40F7202497D0_4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1DE1FCE0)
#define CLASS_1_93AA40F7202497D0_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DE1FC10)
#define CLASS_1_93AA40F7202497D0_4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1DE1FCD0)
#define CLASS_1_93AA40F7202497D0_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1FC40)
#define CLASS_1_93AA40F7202497D0_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1FF60)
#define CLASS_1_93AA40F7202497D0_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1FFC0)
#define CLASS_1_93AA40F7202497D0_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE202C0)
#define CLASS_1_93AA40F7202497D0_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1FC60)
#define CLASS_1_93AA40F7202497D0_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1FC50)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_4_TypeDefinitionIndex = 26162;

class Class_1_93AA40F7202497D0_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_4*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_4_TypeDefinitionIndex)->GetStaticField(0x17350);
	}
	// static const ::System::Int32 COICJNBDJFC = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Enum_3_0A3761FE34514D6C_9 CNKEBBBFBDC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_4*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_4* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_9 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_9))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_4*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_4*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
