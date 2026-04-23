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

#define CLASS_1_C1CABA0AA40C4DD8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19900710)
#define CLASS_1_C1CABA0AA40C4DD8_CLONE_OFFSET UNITYSDK_OFFSET(0x19900220)
#define CLASS_1_C1CABA0AA40C4DD8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19900470)
#define CLASS_1_C1CABA0AA40C4DD8_EQUALS_OFFSET UNITYSDK_OFFSET(0x19900390)
#define CLASS_1_C1CABA0AA40C4DD8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19900520)
#define CLASS_1_C1CABA0AA40C4DD8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19900990)
#define CLASS_1_C1CABA0AA40C4DD8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199008F0)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x199002A0)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19900150)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19900360)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x199002B0)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19900350)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19900380)
#define CLASS_1_C1CABA0AA40C4DD8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19900370)
#define CLASS_1_C1CABA0AA40C4DD8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199001B0)
#define CLASS_1_C1CABA0AA40C4DD8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199005E0)
#define CLASS_1_C1CABA0AA40C4DD8_WRITETO_OFFSET UNITYSDK_OFFSET(0x19900640)
#define CLASS_1_C1CABA0AA40C4DD8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19900AC0)
#define CLASS_1_C1CABA0AA40C4DD8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199001D0)
#define CLASS_1_C1CABA0AA40C4DD8__CTOR_OFFSET UNITYSDK_OFFSET(0x199001C0)

inline static constexpr unsigned int Class_1_C1CABA0AA40C4DD8_TypeDefinitionIndex = 30060;

class Class_1_C1CABA0AA40C4DD8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C1CABA0AA40C4DD8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C1CABA0AA40C4DD8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1CABA0AA40C4DD8_TypeDefinitionIndex)->GetStaticField(0x55AD0);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::System::String* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::Enum_3_0A3761FE34514D6C_7 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C1CABA0AA40C4DD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1CABA0AA40C4DD8*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C1CABA0AA40C4DD8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C1CABA0AA40C4DD8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C1CABA0AA40C4DD8* Clone()
	{
		return ((::Class_1_C1CABA0AA40C4DD8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_7))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C1CABA0AA40C4DD8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C1CABA0AA40C4DD8*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C1CABA0AA40C4DD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1CABA0AA40C4DD8*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C1CABA0AA40C4DD8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
