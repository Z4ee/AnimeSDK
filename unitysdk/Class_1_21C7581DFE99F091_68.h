#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_68_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB922E0)
#define CLASS_1_21C7581DFE99F091_68_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB91EF0)
#define CLASS_1_21C7581DFE99F091_68_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB92060)
#define CLASS_1_21C7581DFE99F091_68_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB91F80)
#define CLASS_1_21C7581DFE99F091_68_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB92140)
#define CLASS_1_21C7581DFE99F091_68_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB923C0)
#define CLASS_1_21C7581DFE99F091_68_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB92380)
#define CLASS_1_21C7581DFE99F091_68_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB91F60)
#define CLASS_1_21C7581DFE99F091_68_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB91E60)
#define CLASS_1_21C7581DFE99F091_68_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB91F70)
#define CLASS_1_21C7581DFE99F091_68_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EB91F50)
#define CLASS_1_21C7581DFE99F091_68_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EB91F40)
#define CLASS_1_21C7581DFE99F091_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB91E90)
#define CLASS_1_21C7581DFE99F091_68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB92170)
#define CLASS_1_21C7581DFE99F091_68_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB921D0)
#define CLASS_1_21C7581DFE99F091_68__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB92540)
#define CLASS_1_21C7581DFE99F091_68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB91EB0)
#define CLASS_1_21C7581DFE99F091_68__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB91EA0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_68_TypeDefinitionIndex = 29661;

class Class_1_21C7581DFE99F091_68 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_68*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_68_TypeDefinitionIndex)->GetStaticField(0x195E0);
	}
	// static const ::System::Int32 CAPLJOPAFNI = 0x5; // 0x0
	// static const ::System::Int32 PIACMPBJOIK = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 KJAENGKDFJD; // 0x18
	::System::Boolean OIAABFABCPE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_68*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_68*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_68*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_68* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_68*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_68*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_68_MERGEFROM_1_OFFSET))(this, a1);
	}
};
