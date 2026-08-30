#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_88_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A36B0)
#define CLASS_1_21C7581DFE99F091_88_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A3260)
#define CLASS_1_21C7581DFE99F091_88_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A33D0)
#define CLASS_1_21C7581DFE99F091_88_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A3340)
#define CLASS_1_21C7581DFE99F091_88_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A34B0)
#define CLASS_1_21C7581DFE99F091_88_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A3820)
#define CLASS_1_21C7581DFE99F091_88_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A37D0)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E5A3300)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E5A32E0)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E5A31A0)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E5A3310)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E5A32F0)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E5A3330)
#define CLASS_1_21C7581DFE99F091_88_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E5A3320)
#define CLASS_1_21C7581DFE99F091_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3200)
#define CLASS_1_21C7581DFE99F091_88_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A34E0)
#define CLASS_1_21C7581DFE99F091_88_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A3540)
#define CLASS_1_21C7581DFE99F091_88__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A39C0)
#define CLASS_1_21C7581DFE99F091_88__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A3220)
#define CLASS_1_21C7581DFE99F091_88__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3210)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_88_TypeDefinitionIndex = 30712;

class Class_1_21C7581DFE99F091_88 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_88*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_88_TypeDefinitionIndex)->GetStaticField(0x21250);
	}
	// static const ::System::Int32 JIPLGBKNGHJ = 0xE; // 0x0
	// static const ::System::Int32 DGPDKJBLCLK = 0x1; // 0x0
	// static const ::System::Int32 LLLNLCHAAIO = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 GDPGCPKEFKH; // 0x18
	::System::UInt32 KLLMAOCKBKG; // 0x1C
	::System::Boolean BKGKHADDMIL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_88*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_88*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_88*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_88* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_88*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_88*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_88_MERGEFROM_1_OFFSET))(this, a1);
	}
};
