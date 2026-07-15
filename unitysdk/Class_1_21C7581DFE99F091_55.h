#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C327480)
#define CLASS_1_21C7581DFE99F091_55_CLONE_OFFSET UNITYSDK_OFFSET(0x1C327030)
#define CLASS_1_21C7581DFE99F091_55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C327200)
#define CLASS_1_21C7581DFE99F091_55_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3270F0)
#define CLASS_1_21C7581DFE99F091_55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3272E0)
#define CLASS_1_21C7581DFE99F091_55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C327560)
#define CLASS_1_21C7581DFE99F091_55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C327520)
#define CLASS_1_21C7581DFE99F091_55_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C3270B0)
#define CLASS_1_21C7581DFE99F091_55_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C326F70)
#define CLASS_1_21C7581DFE99F091_55_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C3270C0)
#define CLASS_1_21C7581DFE99F091_55_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C3270E0)
#define CLASS_1_21C7581DFE99F091_55_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C3270D0)
#define CLASS_1_21C7581DFE99F091_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C326FD0)
#define CLASS_1_21C7581DFE99F091_55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C327310)
#define CLASS_1_21C7581DFE99F091_55_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C327370)
#define CLASS_1_21C7581DFE99F091_55__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3276E0)
#define CLASS_1_21C7581DFE99F091_55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C326FF0)
#define CLASS_1_21C7581DFE99F091_55__CTOR_OFFSET UNITYSDK_OFFSET(0x1C326FE0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_55_TypeDefinitionIndex = 28462;

class Class_1_21C7581DFE99F091_55 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_55*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_55*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_55_TypeDefinitionIndex)->GetStaticField(0x3C3F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_55*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_55*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_55*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_55* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_55*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_55*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
