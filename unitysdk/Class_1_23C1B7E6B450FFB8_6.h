#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_23C1B7E6B450FFB8_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA8C870)
#define CLASS_1_23C1B7E6B450FFB8_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA8C2F0)
#define CLASS_1_23C1B7E6B450FFB8_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA8C410)
#define CLASS_1_23C1B7E6B450FFB8_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA8C3B0)
#define CLASS_1_23C1B7E6B450FFB8_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA8C600)
#define CLASS_1_23C1B7E6B450FFB8_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA8C970)
#define CLASS_1_23C1B7E6B450FFB8_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA8C920)
#define CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DA8C390)
#define CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DA8C230)
#define CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DA8C3A0)
#define CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1DA8C380)
#define CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1DA8C370)
#define CLASS_1_23C1B7E6B450FFB8_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA8C290)
#define CLASS_1_23C1B7E6B450FFB8_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA8C720)
#define CLASS_1_23C1B7E6B450FFB8_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA8C780)
#define CLASS_1_23C1B7E6B450FFB8_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA8CAF0)
#define CLASS_1_23C1B7E6B450FFB8_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA8C2B0)
#define CLASS_1_23C1B7E6B450FFB8_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8C2A0)

inline static constexpr unsigned int Class_1_23C1B7E6B450FFB8_6_TypeDefinitionIndex = 28769;

class Class_1_23C1B7E6B450FFB8_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_6*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23C1B7E6B450FFB8_6_TypeDefinitionIndex)->GetStaticField(0x425B0);
	}
	// static const ::System::Int32 DGJBFAEBAGM = 0x8; // 0x0
	// static const ::System::Int32 IHIPPDJHJAK = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 JCOCBOBKOMA; // 0x18
	::System::Double IPFECLHKCGL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_23C1B7E6B450FFB8_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_6*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_23C1B7E6B450FFB8_6* Clone()
	{
		return ((::Class_1_23C1B7E6B450FFB8_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_23C1B7E6B450FFB8_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_6*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_23C1B7E6B450FFB8_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_6*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
