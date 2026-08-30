#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_77_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D8E7370)
#define CLASS_1_21C7581DFE99F091_77_CLONE_OFFSET UNITYSDK_OFFSET(0x1D8E6F80)
#define CLASS_1_21C7581DFE99F091_77_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D8E70F0)
#define CLASS_1_21C7581DFE99F091_77_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D8E7010)
#define CLASS_1_21C7581DFE99F091_77_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D8E71D0)
#define CLASS_1_21C7581DFE99F091_77_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D8E7450)
#define CLASS_1_21C7581DFE99F091_77_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D8E7410)
#define CLASS_1_21C7581DFE99F091_77_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D8E6FF0)
#define CLASS_1_21C7581DFE99F091_77_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D8E6EF0)
#define CLASS_1_21C7581DFE99F091_77_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D8E7000)
#define CLASS_1_21C7581DFE99F091_77_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D8E6FE0)
#define CLASS_1_21C7581DFE99F091_77_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D8E6FD0)
#define CLASS_1_21C7581DFE99F091_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D8E6F20)
#define CLASS_1_21C7581DFE99F091_77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D8E7200)
#define CLASS_1_21C7581DFE99F091_77_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D8E7260)
#define CLASS_1_21C7581DFE99F091_77__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8E75D0)
#define CLASS_1_21C7581DFE99F091_77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8E6F40)
#define CLASS_1_21C7581DFE99F091_77__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E6F30)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_77_TypeDefinitionIndex = 29815;

class Class_1_21C7581DFE99F091_77 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_77*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_77*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_77_TypeDefinitionIndex)->GetStaticField(0x45610);
	}
	// static const ::System::Int32 ABJLJCFPJJL = 0x1; // 0x0
	// static const ::System::Int32 DPMPPDAIAAD = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 CBJLKLAIGPG; // 0x18
	::System::Boolean JNDBHPPKILC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_77*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_77*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_77*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_77* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_77*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_77*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_77_MERGEFROM_1_OFFSET))(this, a1);
	}
};
