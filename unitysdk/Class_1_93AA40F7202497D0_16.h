#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_7.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_16_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC763B0)
#define CLASS_1_93AA40F7202497D0_16_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC75FE0)
#define CLASS_1_93AA40F7202497D0_16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC76110)
#define CLASS_1_93AA40F7202497D0_16_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC76040)
#define CLASS_1_93AA40F7202497D0_16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC76280)
#define CLASS_1_93AA40F7202497D0_16_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC764B0)
#define CLASS_1_93AA40F7202497D0_16_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC76480)
#define CLASS_1_93AA40F7202497D0_16_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1EC76030)
#define CLASS_1_93AA40F7202497D0_16_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EC75F60)
#define CLASS_1_93AA40F7202497D0_16_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1EC76020)
#define CLASS_1_93AA40F7202497D0_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC75F90)
#define CLASS_1_93AA40F7202497D0_16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC762B0)
#define CLASS_1_93AA40F7202497D0_16_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC76310)
#define CLASS_1_93AA40F7202497D0_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC76610)
#define CLASS_1_93AA40F7202497D0_16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC75FB0)
#define CLASS_1_93AA40F7202497D0_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC75FA0)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_16_TypeDefinitionIndex = 31436;

class Class_1_93AA40F7202497D0_16 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_16_TypeDefinitionIndex)->GetStaticField(0x3E3E0);
	}
	// static const ::System::Int32 BCGONOOIJBD = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Enum_3_0A3761FE34514D6C_7 INJGECDAJIA; // 0x18

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

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_16*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_16* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_7))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_16_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
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
