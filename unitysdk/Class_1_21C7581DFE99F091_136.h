#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_136_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC49EF0)
#define CLASS_1_21C7581DFE99F091_136_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC49AA0)
#define CLASS_1_21C7581DFE99F091_136_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC49C70)
#define CLASS_1_21C7581DFE99F091_136_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC49B60)
#define CLASS_1_21C7581DFE99F091_136_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC49D50)
#define CLASS_1_21C7581DFE99F091_136_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC49FD0)
#define CLASS_1_21C7581DFE99F091_136_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC49F90)
#define CLASS_1_21C7581DFE99F091_136_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC49B40)
#define CLASS_1_21C7581DFE99F091_136_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC499E0)
#define CLASS_1_21C7581DFE99F091_136_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC49B50)
#define CLASS_1_21C7581DFE99F091_136_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CC49B30)
#define CLASS_1_21C7581DFE99F091_136_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CC49B20)
#define CLASS_1_21C7581DFE99F091_136_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC49A40)
#define CLASS_1_21C7581DFE99F091_136_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC49D80)
#define CLASS_1_21C7581DFE99F091_136_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC49DE0)
#define CLASS_1_21C7581DFE99F091_136__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC4A150)
#define CLASS_1_21C7581DFE99F091_136__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC49A60)
#define CLASS_1_21C7581DFE99F091_136__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC49A50)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_136_TypeDefinitionIndex = 33194;

class Class_1_21C7581DFE99F091_136 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_136*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_136*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_136_TypeDefinitionIndex)->GetStaticField(0x1A9B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_136* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_136*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_136*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_136*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_136* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_136*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_136* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_136*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_136* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_136*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_136_MERGEFROM_1_OFFSET))(this, a1);
	}
};
