#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1967DEF0)
#define CLASS_1_1CBA230307F9C289_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1967DC70)
#define CLASS_1_1CBA230307F9C289_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1967DD70)
#define CLASS_1_1CBA230307F9C289_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1967DD00)
#define CLASS_1_1CBA230307F9C289_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1967DDD0)
#define CLASS_1_1CBA230307F9C289_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1967E080)
#define CLASS_1_1CBA230307F9C289_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1967E040)
#define CLASS_1_1CBA230307F9C289_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1967DCC0)
#define CLASS_1_1CBA230307F9C289_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1967DCF0)
#define CLASS_1_1CBA230307F9C289_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1967DBF0)
#define CLASS_1_1CBA230307F9C289_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1967DCD0)
#define CLASS_1_1CBA230307F9C289_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1967DCE0)
#define CLASS_1_1CBA230307F9C289_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1967DC20)
#define CLASS_1_1CBA230307F9C289_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1967DE00)
#define CLASS_1_1CBA230307F9C289_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1967DE60)
#define CLASS_1_1CBA230307F9C289_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1967E100)
#define CLASS_1_1CBA230307F9C289_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1967DC40)
#define CLASS_1_1CBA230307F9C289_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1967DC30)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_8_TypeDefinitionIndex = 25058;

class Class_1_1CBA230307F9C289_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_8_TypeDefinitionIndex)->GetStaticField(0x44A90);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_DFCB42601400F441 Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_8*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_8* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_8*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_8*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
