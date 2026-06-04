#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_23C1B7E6B450FFB8_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5B13D0)
#define CLASS_1_23C1B7E6B450FFB8_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5B1020)
#define CLASS_1_23C1B7E6B450FFB8_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5B1140)
#define CLASS_1_23C1B7E6B450FFB8_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5B10E0)
#define CLASS_1_23C1B7E6B450FFB8_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5B1230)
#define CLASS_1_23C1B7E6B450FFB8_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5B14D0)
#define CLASS_1_23C1B7E6B450FFB8_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5B1480)
#define CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5B10C0)
#define CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5B0F60)
#define CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A5B10D0)
#define CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A5B10B0)
#define CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A5B10A0)
#define CLASS_1_23C1B7E6B450FFB8_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5B0FC0)
#define CLASS_1_23C1B7E6B450FFB8_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5B12E0)
#define CLASS_1_23C1B7E6B450FFB8_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5B1340)
#define CLASS_1_23C1B7E6B450FFB8_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5B1650)
#define CLASS_1_23C1B7E6B450FFB8_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5B0FE0)
#define CLASS_1_23C1B7E6B450FFB8_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B0FD0)

inline static constexpr unsigned int Class_1_23C1B7E6B450FFB8_10_TypeDefinitionIndex = 28198;

class Class_1_23C1B7E6B450FFB8_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23C1B7E6B450FFB8_10_TypeDefinitionIndex)->GetStaticField(0x16D10);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Double Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_23C1B7E6B450FFB8_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_10*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_10*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_23C1B7E6B450FFB8_10* Clone()
	{
		return ((::Class_1_23C1B7E6B450FFB8_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_23C1B7E6B450FFB8_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_10*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_23C1B7E6B450FFB8_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_10*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
