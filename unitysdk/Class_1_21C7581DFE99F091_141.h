#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_141_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C95AF80)
#define CLASS_1_21C7581DFE99F091_141_CLONE_OFFSET UNITYSDK_OFFSET(0x1C95AB30)
#define CLASS_1_21C7581DFE99F091_141_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C95AD00)
#define CLASS_1_21C7581DFE99F091_141_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C95ABF0)
#define CLASS_1_21C7581DFE99F091_141_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C95ADE0)
#define CLASS_1_21C7581DFE99F091_141_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C95B060)
#define CLASS_1_21C7581DFE99F091_141_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C95B020)
#define CLASS_1_21C7581DFE99F091_141_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C95ABD0)
#define CLASS_1_21C7581DFE99F091_141_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C95AA70)
#define CLASS_1_21C7581DFE99F091_141_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C95ABE0)
#define CLASS_1_21C7581DFE99F091_141_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C95ABC0)
#define CLASS_1_21C7581DFE99F091_141_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C95ABB0)
#define CLASS_1_21C7581DFE99F091_141_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C95AAD0)
#define CLASS_1_21C7581DFE99F091_141_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C95AE10)
#define CLASS_1_21C7581DFE99F091_141_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C95AE70)
#define CLASS_1_21C7581DFE99F091_141__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C95B1E0)
#define CLASS_1_21C7581DFE99F091_141__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C95AAF0)
#define CLASS_1_21C7581DFE99F091_141__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95AAE0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_141_TypeDefinitionIndex = 33611;

class Class_1_21C7581DFE99F091_141 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_141*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_141*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_141_TypeDefinitionIndex)->GetStaticField(0x2BAB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_141* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_141*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_141*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_141*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_141* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_141*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_141* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_141*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_141* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_141*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_141_MERGEFROM_1_OFFSET))(this, a1);
	}
};
