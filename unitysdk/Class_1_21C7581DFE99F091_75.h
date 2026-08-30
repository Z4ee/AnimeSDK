#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E228E20)
#define CLASS_1_21C7581DFE99F091_75_CLONE_OFFSET UNITYSDK_OFFSET(0x1E228A30)
#define CLASS_1_21C7581DFE99F091_75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E228BA0)
#define CLASS_1_21C7581DFE99F091_75_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E228AC0)
#define CLASS_1_21C7581DFE99F091_75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E228C80)
#define CLASS_1_21C7581DFE99F091_75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E228F00)
#define CLASS_1_21C7581DFE99F091_75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E228EC0)
#define CLASS_1_21C7581DFE99F091_75_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E228AA0)
#define CLASS_1_21C7581DFE99F091_75_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2289A0)
#define CLASS_1_21C7581DFE99F091_75_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E228AB0)
#define CLASS_1_21C7581DFE99F091_75_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E228A90)
#define CLASS_1_21C7581DFE99F091_75_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E228A80)
#define CLASS_1_21C7581DFE99F091_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2289D0)
#define CLASS_1_21C7581DFE99F091_75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E228CB0)
#define CLASS_1_21C7581DFE99F091_75_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E228D10)
#define CLASS_1_21C7581DFE99F091_75__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E229080)
#define CLASS_1_21C7581DFE99F091_75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2289F0)
#define CLASS_1_21C7581DFE99F091_75__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2289E0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_75_TypeDefinitionIndex = 29811;

class Class_1_21C7581DFE99F091_75 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_75*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_75_TypeDefinitionIndex)->GetStaticField(0x43780);
	}
	// static const ::System::Int32 ABJLJCFPJJL = 0xD; // 0x0
	// static const ::System::Int32 EBNBMOHHABN = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 IOJPFPKAAOP; // 0x18
	::System::Boolean JNDBHPPKILC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_75*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_75*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_75*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_75* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_75*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_75*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_75_MERGEFROM_1_OFFSET))(this, a1);
	}
};
