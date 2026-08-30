#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_123_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB81150)
#define CLASS_1_21C7581DFE99F091_123_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB80D00)
#define CLASS_1_21C7581DFE99F091_123_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB80ED0)
#define CLASS_1_21C7581DFE99F091_123_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB80DC0)
#define CLASS_1_21C7581DFE99F091_123_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB80FB0)
#define CLASS_1_21C7581DFE99F091_123_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB81230)
#define CLASS_1_21C7581DFE99F091_123_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB811F0)
#define CLASS_1_21C7581DFE99F091_123_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB80DA0)
#define CLASS_1_21C7581DFE99F091_123_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EB80C40)
#define CLASS_1_21C7581DFE99F091_123_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB80DB0)
#define CLASS_1_21C7581DFE99F091_123_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EB80D90)
#define CLASS_1_21C7581DFE99F091_123_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EB80D80)
#define CLASS_1_21C7581DFE99F091_123_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB80CA0)
#define CLASS_1_21C7581DFE99F091_123_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB80FE0)
#define CLASS_1_21C7581DFE99F091_123_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB81040)
#define CLASS_1_21C7581DFE99F091_123__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB813B0)
#define CLASS_1_21C7581DFE99F091_123__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB80CC0)
#define CLASS_1_21C7581DFE99F091_123__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB80CB0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_123_TypeDefinitionIndex = 33064;

class Class_1_21C7581DFE99F091_123 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_123*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_123*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_123_TypeDefinitionIndex)->GetStaticField(0x4870);
	}
	// static const ::System::Int32 OBPJACJDNLJ = 0x5; // 0x0
	// static const ::System::Int32 APGDDELCFJE = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean EEFPMEKJLEB; // 0x18
	::System::UInt32 DHDFOMGAOME; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_123*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_123*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_123*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_123* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_123*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_123* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_123*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_123*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_123_MERGEFROM_1_OFFSET))(this, a1);
	}
};
