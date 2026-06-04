#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_77.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB61740)
#define CLASS_1_93AA40F7202497D0_23_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB61530)
#define CLASS_1_93AA40F7202497D0_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB615F0)
#define CLASS_1_93AA40F7202497D0_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB61590)
#define CLASS_1_93AA40F7202497D0_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB61640)
#define CLASS_1_93AA40F7202497D0_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB61840)
#define CLASS_1_93AA40F7202497D0_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB61810)
#define CLASS_1_93AA40F7202497D0_23_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1AB61580)
#define CLASS_1_93AA40F7202497D0_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB614B0)
#define CLASS_1_93AA40F7202497D0_23_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1AB61570)
#define CLASS_1_93AA40F7202497D0_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB614E0)
#define CLASS_1_93AA40F7202497D0_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB61670)
#define CLASS_1_93AA40F7202497D0_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB616D0)
#define CLASS_1_93AA40F7202497D0_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB619A0)
#define CLASS_1_93AA40F7202497D0_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB61500)
#define CLASS_1_93AA40F7202497D0_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB614F0)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_23_TypeDefinitionIndex = 33118;

class Class_1_93AA40F7202497D0_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_23*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_23_TypeDefinitionIndex)->GetStaticField(0x1B230);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_0A3761FE34514D6C_77 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_23*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_23* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_77 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_77(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_77 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_77))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_23*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_23*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
