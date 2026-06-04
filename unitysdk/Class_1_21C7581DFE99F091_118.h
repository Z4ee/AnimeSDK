#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_118_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A25DD50)
#define CLASS_1_21C7581DFE99F091_118_CLONE_OFFSET UNITYSDK_OFFSET(0x1A25DA60)
#define CLASS_1_21C7581DFE99F091_118_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A25DBD0)
#define CLASS_1_21C7581DFE99F091_118_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A25DB20)
#define CLASS_1_21C7581DFE99F091_118_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A25DC40)
#define CLASS_1_21C7581DFE99F091_118_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A25DE30)
#define CLASS_1_21C7581DFE99F091_118_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A25DDF0)
#define CLASS_1_21C7581DFE99F091_118_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A25DB00)
#define CLASS_1_21C7581DFE99F091_118_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A25D9A0)
#define CLASS_1_21C7581DFE99F091_118_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A25DB10)
#define CLASS_1_21C7581DFE99F091_118_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A25DAF0)
#define CLASS_1_21C7581DFE99F091_118_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A25DAE0)
#define CLASS_1_21C7581DFE99F091_118_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A25DA00)
#define CLASS_1_21C7581DFE99F091_118_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A25DC70)
#define CLASS_1_21C7581DFE99F091_118_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A25DCD0)
#define CLASS_1_21C7581DFE99F091_118__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A25DFB0)
#define CLASS_1_21C7581DFE99F091_118__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A25DA20)
#define CLASS_1_21C7581DFE99F091_118__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25DA10)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_118_TypeDefinitionIndex = 33102;

class Class_1_21C7581DFE99F091_118 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_118*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_118*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_118_TypeDefinitionIndex)->GetStaticField(0x44DD0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_118* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_118*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_118*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_118*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_118* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_118*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_118* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_118*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_118* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_118*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_118_MERGEFROM_1_OFFSET))(this, a1);
	}
};
