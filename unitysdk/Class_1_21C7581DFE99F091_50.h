#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA85150)
#define CLASS_1_21C7581DFE99F091_50_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA84D00)
#define CLASS_1_21C7581DFE99F091_50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA84ED0)
#define CLASS_1_21C7581DFE99F091_50_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA84DC0)
#define CLASS_1_21C7581DFE99F091_50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA84FB0)
#define CLASS_1_21C7581DFE99F091_50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA85230)
#define CLASS_1_21C7581DFE99F091_50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA851F0)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EA84D80)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EA84C40)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EA84D90)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EA84DB0)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EA84DA0)
#define CLASS_1_21C7581DFE99F091_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA84CA0)
#define CLASS_1_21C7581DFE99F091_50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA84FE0)
#define CLASS_1_21C7581DFE99F091_50_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA85040)
#define CLASS_1_21C7581DFE99F091_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA853B0)
#define CLASS_1_21C7581DFE99F091_50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA84CC0)
#define CLASS_1_21C7581DFE99F091_50__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA84CB0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_50_TypeDefinitionIndex = 28710;

class Class_1_21C7581DFE99F091_50 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_50*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_50_TypeDefinitionIndex)->GetStaticField(0x1D1E0);
	}
	// static const ::System::Int32 FABEMBPPBIC = 0x8; // 0x0
	// static const ::System::Int32 HBHDPGJDIFC = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 CPCECHCLLOP; // 0x18
	::System::Boolean LABOOMDEBON; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_50*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_50*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_50*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_50* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_50* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_50*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_50*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_MERGEFROM_1_OFFSET))(this, a1);
	}
};
