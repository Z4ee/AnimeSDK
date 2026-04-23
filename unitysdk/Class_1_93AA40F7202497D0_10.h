#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1926FF00)
#define CLASS_1_93AA40F7202497D0_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1926FC80)
#define CLASS_1_93AA40F7202497D0_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1926FDB0)
#define CLASS_1_93AA40F7202497D0_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1926FD10)
#define CLASS_1_93AA40F7202497D0_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1926FE00)
#define CLASS_1_93AA40F7202497D0_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19270000)
#define CLASS_1_93AA40F7202497D0_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1926FFD0)
#define CLASS_1_93AA40F7202497D0_10_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1926FBD0)
#define CLASS_1_93AA40F7202497D0_10_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1926FD00)
#define CLASS_1_93AA40F7202497D0_10_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1926FCF0)
#define CLASS_1_93AA40F7202497D0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1926FC30)
#define CLASS_1_93AA40F7202497D0_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1926FE30)
#define CLASS_1_93AA40F7202497D0_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1926FE90)
#define CLASS_1_93AA40F7202497D0_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x19270070)
#define CLASS_1_93AA40F7202497D0_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1926FC50)
#define CLASS_1_93AA40F7202497D0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1926FC40)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_10_TypeDefinitionIndex = 26691;

class Class_1_93AA40F7202497D0_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_10_TypeDefinitionIndex)->GetStaticField(0x15C10);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_71AA90D596A09AC8_10 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_10*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_10*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_10* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_CLONE_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_10 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_10(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_10 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_10*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_10*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
