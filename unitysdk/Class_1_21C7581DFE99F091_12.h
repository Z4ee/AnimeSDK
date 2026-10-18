#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0614F0)
#define CLASS_1_21C7581DFE99F091_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0610A0)
#define CLASS_1_21C7581DFE99F091_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E061270)
#define CLASS_1_21C7581DFE99F091_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E061160)
#define CLASS_1_21C7581DFE99F091_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E061350)
#define CLASS_1_21C7581DFE99F091_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0615D0)
#define CLASS_1_21C7581DFE99F091_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E061590)
#define CLASS_1_21C7581DFE99F091_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E061140)
#define CLASS_1_21C7581DFE99F091_12_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E060FE0)
#define CLASS_1_21C7581DFE99F091_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E061150)
#define CLASS_1_21C7581DFE99F091_12_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E061130)
#define CLASS_1_21C7581DFE99F091_12_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E061120)
#define CLASS_1_21C7581DFE99F091_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E061040)
#define CLASS_1_21C7581DFE99F091_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E061380)
#define CLASS_1_21C7581DFE99F091_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0613E0)
#define CLASS_1_21C7581DFE99F091_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E061750)
#define CLASS_1_21C7581DFE99F091_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E061060)
#define CLASS_1_21C7581DFE99F091_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1E061050)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_12_TypeDefinitionIndex = 26684;

class Class_1_21C7581DFE99F091_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_12*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_12_TypeDefinitionIndex)->GetStaticField(0xFAE0);
	}
	// static const ::System::Int32 PKAOOKDPBPF = 0x2; // 0x0
	// static const ::System::Int32 AODKNNMBGAD = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 IBEBBFIHLLP; // 0x18
	::System::Boolean GDAEKJGKMMP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_12*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_12*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_12* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_12*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_12*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
