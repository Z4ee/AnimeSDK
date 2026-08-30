#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_96_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DAF1490)
#define CLASS_1_21C7581DFE99F091_96_CLONE_OFFSET UNITYSDK_OFFSET(0x1DAF1010)
#define CLASS_1_21C7581DFE99F091_96_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DAF11B0)
#define CLASS_1_21C7581DFE99F091_96_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAF10C0)
#define CLASS_1_21C7581DFE99F091_96_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAF1290)
#define CLASS_1_21C7581DFE99F091_96_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DAF1600)
#define CLASS_1_21C7581DFE99F091_96_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DAF15B0)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DAF1080)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DAF1060)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DAF0F80)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DAF1090)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DAF1070)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DAF10B0)
#define CLASS_1_21C7581DFE99F091_96_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DAF10A0)
#define CLASS_1_21C7581DFE99F091_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0FB0)
#define CLASS_1_21C7581DFE99F091_96_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DAF12C0)
#define CLASS_1_21C7581DFE99F091_96_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DAF1320)
#define CLASS_1_21C7581DFE99F091_96__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAF17A0)
#define CLASS_1_21C7581DFE99F091_96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAF0FD0)
#define CLASS_1_21C7581DFE99F091_96__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0FC0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_96_TypeDefinitionIndex = 31258;

class Class_1_21C7581DFE99F091_96 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_96*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_96*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_96_TypeDefinitionIndex)->GetStaticField(0x36020);
	}
	// static const ::System::Int32 JMLBKMKHMNK = 0xC; // 0x0
	// static const ::System::Int32 NDBLLNDJADG = 0x5; // 0x0
	// static const ::System::Int32 HGJOJKJMBKH = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean OFFPHNFCIKL; // 0x18
	::System::UInt32 LIGJAGENICG; // 0x1C
	::System::UInt32 ONPFGKIELHM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_96*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_96*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_96*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_96* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_96* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_96*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_96*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_96_MERGEFROM_1_OFFSET))(this, a1);
	}
};
