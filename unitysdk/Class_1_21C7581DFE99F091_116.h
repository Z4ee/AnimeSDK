#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_116_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CDC4780)
#define CLASS_1_21C7581DFE99F091_116_CLONE_OFFSET UNITYSDK_OFFSET(0x1CDC4390)
#define CLASS_1_21C7581DFE99F091_116_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CDC4500)
#define CLASS_1_21C7581DFE99F091_116_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDC4420)
#define CLASS_1_21C7581DFE99F091_116_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDC45E0)
#define CLASS_1_21C7581DFE99F091_116_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CDC4860)
#define CLASS_1_21C7581DFE99F091_116_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CDC4820)
#define CLASS_1_21C7581DFE99F091_116_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CDC4400)
#define CLASS_1_21C7581DFE99F091_116_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CDC4300)
#define CLASS_1_21C7581DFE99F091_116_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CDC4410)
#define CLASS_1_21C7581DFE99F091_116_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CDC43F0)
#define CLASS_1_21C7581DFE99F091_116_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CDC43E0)
#define CLASS_1_21C7581DFE99F091_116_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CDC4330)
#define CLASS_1_21C7581DFE99F091_116_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CDC4610)
#define CLASS_1_21C7581DFE99F091_116_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CDC4670)
#define CLASS_1_21C7581DFE99F091_116__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC49E0)
#define CLASS_1_21C7581DFE99F091_116__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CDC4350)
#define CLASS_1_21C7581DFE99F091_116__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC4340)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_116_TypeDefinitionIndex = 32164;

class Class_1_21C7581DFE99F091_116 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_116*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_116*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_116_TypeDefinitionIndex)->GetStaticField(0x61020);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_116* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_116*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_116*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_116*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_116* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_116*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_116* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_116*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_116* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_116*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_116_MERGEFROM_1_OFFSET))(this, a1);
	}
};
