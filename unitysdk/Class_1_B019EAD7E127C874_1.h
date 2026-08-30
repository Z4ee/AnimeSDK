#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B019EAD7E127C874_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6FD20)
#define CLASS_1_B019EAD7E127C874_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6F800)
#define CLASS_1_B019EAD7E127C874_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6F9E0)
#define CLASS_1_B019EAD7E127C874_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6F940)
#define CLASS_1_B019EAD7E127C874_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6FA30)
#define CLASS_1_B019EAD7E127C874_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE70080)
#define CLASS_1_B019EAD7E127C874_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE70020)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DE6F8A0)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DE6F8C0)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DE6F8E0)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1DE6F900)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1DE6F920)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DE6F880)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE6F740)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DE6F8B0)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DE6F8D0)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DE6F8F0)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1DE6F910)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1DE6F930)
#define CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DE6F890)
#define CLASS_1_B019EAD7E127C874_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6F7A0)
#define CLASS_1_B019EAD7E127C874_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6FA70)
#define CLASS_1_B019EAD7E127C874_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6FAD0)
#define CLASS_1_B019EAD7E127C874_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE70140)
#define CLASS_1_B019EAD7E127C874_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6F7C0)
#define CLASS_1_B019EAD7E127C874_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6F7B0)

inline static constexpr unsigned int Class_1_B019EAD7E127C874_1_TypeDefinitionIndex = 27008;

class Class_1_B019EAD7E127C874_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B019EAD7E127C874_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B019EAD7E127C874_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B019EAD7E127C874_1_TypeDefinitionIndex)->GetStaticField(0x35620);
	}
	// static const ::System::Int32 JBDOIFCHBDL = 0xF; // 0x0
	// static const ::System::Int32 MELOPNPCNIH = 0xE; // 0x0
	// static const ::System::Int32 FICPNCIGCLC = 0x5; // 0x0
	// static const ::System::Int32 FNLJNNHJBLG = 0x2; // 0x0
	// static const ::System::Int32 KIEIGAOPPAC = 0x8; // 0x0
	// static const ::System::Int32 JLCOELFOKOP = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 FEGHIPGIONK; // 0x18
	::System::UInt32 FABLENILNGO; // 0x1C
	::System::UInt32 ELPJEGFBIDO; // 0x20
	::System::UInt32 AHNEBPEHFLP; // 0x24
	::System::UInt32 EGJDFIPLGMO; // 0x28
	::System::UInt32 OOHMPMHFAEK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B019EAD7E127C874_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874_1*))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B019EAD7E127C874_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B019EAD7E127C874_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B019EAD7E127C874_1* Clone()
	{
		return ((::Class_1_B019EAD7E127C874_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B019EAD7E127C874_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B019EAD7E127C874_1*))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B019EAD7E127C874_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874_1*))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B019EAD7E127C874_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
