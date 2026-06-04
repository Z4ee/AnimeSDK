#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A610F20)
#define CLASS_1_93AA40F7202497D0_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1A610D10)
#define CLASS_1_93AA40F7202497D0_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A610DD0)
#define CLASS_1_93AA40F7202497D0_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A610D70)
#define CLASS_1_93AA40F7202497D0_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A610E20)
#define CLASS_1_93AA40F7202497D0_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A611020)
#define CLASS_1_93AA40F7202497D0_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A610FF0)
#define CLASS_1_93AA40F7202497D0_14_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A610D60)
#define CLASS_1_93AA40F7202497D0_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A610C90)
#define CLASS_1_93AA40F7202497D0_14_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A610D50)
#define CLASS_1_93AA40F7202497D0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A610CC0)
#define CLASS_1_93AA40F7202497D0_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A610E50)
#define CLASS_1_93AA40F7202497D0_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A610EB0)
#define CLASS_1_93AA40F7202497D0_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A611180)
#define CLASS_1_93AA40F7202497D0_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A610CE0)
#define CLASS_1_93AA40F7202497D0_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1A610CD0)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_14_TypeDefinitionIndex = 28616;

class Class_1_93AA40F7202497D0_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_14_TypeDefinitionIndex)->GetStaticField(0x24590);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_63C076C405BE0674_2 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_14*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_14* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_CLONE_OFFSET))(this);
	}

	::Enum_3_63C076C405BE0674_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63C076C405BE0674_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63C076C405BE0674_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_14*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_14*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
