#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9F9C2AEAEFFE3610_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B7E3F0)
#define CLASS_1_9F9C2AEAEFFE3610_CLONE_OFFSET UNITYSDK_OFFSET(0x19B7E0B0)
#define CLASS_1_9F9C2AEAEFFE3610_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B7E240)
#define CLASS_1_9F9C2AEAEFFE3610_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B7E190)
#define CLASS_1_9F9C2AEAEFFE3610_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B7E2B0)
#define CLASS_1_9F9C2AEAEFFE3610_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B7E620)
#define CLASS_1_9F9C2AEAEFFE3610_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B7E5D0)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19B7E150)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B7E130)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19B7E180)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19B7DFF0)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19B7E160)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B7E140)
#define CLASS_1_9F9C2AEAEFFE3610_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19B7E170)
#define CLASS_1_9F9C2AEAEFFE3610_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B7E050)
#define CLASS_1_9F9C2AEAEFFE3610_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B7E2F0)
#define CLASS_1_9F9C2AEAEFFE3610_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B7E350)
#define CLASS_1_9F9C2AEAEFFE3610__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B7E6C0)
#define CLASS_1_9F9C2AEAEFFE3610__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B7E070)
#define CLASS_1_9F9C2AEAEFFE3610__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7E060)

inline static constexpr unsigned int Class_1_9F9C2AEAEFFE3610_TypeDefinitionIndex = 23945;

class Class_1_9F9C2AEAEFFE3610 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9F9C2AEAEFFE3610*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9F9C2AEAEFFE3610*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F9C2AEAEFFE3610_TypeDefinitionIndex)->GetStaticField(0x492E0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt64 Field_1_7; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9F9C2AEAEFFE3610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F9C2AEAEFFE3610*))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9F9C2AEAEFFE3610*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9F9C2AEAEFFE3610*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9F9C2AEAEFFE3610* Clone()
	{
		return ((::Class_1_9F9C2AEAEFFE3610*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9F9C2AEAEFFE3610* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9F9C2AEAEFFE3610*))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9F9C2AEAEFFE3610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F9C2AEAEFFE3610*))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9F9C2AEAEFFE3610_MERGEFROM_1_OFFSET))(this, a1);
	}
};
