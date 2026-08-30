#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_53_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBDA340)
#define CLASS_1_21C7581DFE99F091_53_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBD9EC0)
#define CLASS_1_21C7581DFE99F091_53_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBDA060)
#define CLASS_1_21C7581DFE99F091_53_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBD9F70)
#define CLASS_1_21C7581DFE99F091_53_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBDA140)
#define CLASS_1_21C7581DFE99F091_53_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBDA4B0)
#define CLASS_1_21C7581DFE99F091_53_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBDA460)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EBD9F30)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EBD9F10)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EBD9E30)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EBD9F40)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EBD9F20)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EBD9F60)
#define CLASS_1_21C7581DFE99F091_53_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EBD9F50)
#define CLASS_1_21C7581DFE99F091_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBD9E60)
#define CLASS_1_21C7581DFE99F091_53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBDA170)
#define CLASS_1_21C7581DFE99F091_53_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBDA1D0)
#define CLASS_1_21C7581DFE99F091_53__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBDA650)
#define CLASS_1_21C7581DFE99F091_53__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBD9E80)
#define CLASS_1_21C7581DFE99F091_53__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD9E70)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_53_TypeDefinitionIndex = 29025;

class Class_1_21C7581DFE99F091_53 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_53*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_53*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_53_TypeDefinitionIndex)->GetStaticField(0x41AB0);
	}
	// static const ::System::Int32 NNCIDOOJFBD = 0xE; // 0x0
	// static const ::System::Int32 GONHNKMOJCG = 0x8; // 0x0
	// static const ::System::Int32 KOOHCMDDPEP = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 PODEGEHGIJH; // 0x18
	::System::UInt32 GHPODDOILHM; // 0x1C
	::System::Boolean HDMHCILFNGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_53*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_53*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_53*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_53* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_53* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_53*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_53*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_53_MERGEFROM_1_OFFSET))(this, a1);
	}
};
