#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE0C770)
#define CLASS_1_21C7581DFE99F091_50_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE0C320)
#define CLASS_1_21C7581DFE99F091_50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE0C4F0)
#define CLASS_1_21C7581DFE99F091_50_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE0C3E0)
#define CLASS_1_21C7581DFE99F091_50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE0C5D0)
#define CLASS_1_21C7581DFE99F091_50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE0C850)
#define CLASS_1_21C7581DFE99F091_50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE0C810)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CE0C3C0)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CE0C260)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CE0C3D0)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CE0C3B0)
#define CLASS_1_21C7581DFE99F091_50_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CE0C3A0)
#define CLASS_1_21C7581DFE99F091_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE0C2C0)
#define CLASS_1_21C7581DFE99F091_50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE0C600)
#define CLASS_1_21C7581DFE99F091_50_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE0C660)
#define CLASS_1_21C7581DFE99F091_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0C9D0)
#define CLASS_1_21C7581DFE99F091_50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE0C2E0)
#define CLASS_1_21C7581DFE99F091_50__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0C2D0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_50_TypeDefinitionIndex = 28001;

class Class_1_21C7581DFE99F091_50 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_50*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_50_TypeDefinitionIndex)->GetStaticField(0x22000);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

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

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_50_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
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
