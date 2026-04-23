#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_90_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193FA1E0)
#define CLASS_1_21C7581DFE99F091_90_CLONE_OFFSET UNITYSDK_OFFSET(0x193F9EA0)
#define CLASS_1_21C7581DFE99F091_90_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193FA000)
#define CLASS_1_21C7581DFE99F091_90_EQUALS_OFFSET UNITYSDK_OFFSET(0x193F9F70)
#define CLASS_1_21C7581DFE99F091_90_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193FA080)
#define CLASS_1_21C7581DFE99F091_90_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193FA3D0)
#define CLASS_1_21C7581DFE99F091_90_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193FA380)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x193F9F30)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x193F9F50)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193F9F10)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193F9E10)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x193F9F40)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x193F9F60)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193F9F20)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x193F9F00)
#define CLASS_1_21C7581DFE99F091_90_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x193F9EF0)
#define CLASS_1_21C7581DFE99F091_90_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193F9E40)
#define CLASS_1_21C7581DFE99F091_90_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193FA0B0)
#define CLASS_1_21C7581DFE99F091_90_WRITETO_OFFSET UNITYSDK_OFFSET(0x193FA110)
#define CLASS_1_21C7581DFE99F091_90__CCTOR_OFFSET UNITYSDK_OFFSET(0x193FA480)
#define CLASS_1_21C7581DFE99F091_90__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193F9E60)
#define CLASS_1_21C7581DFE99F091_90__CTOR_OFFSET UNITYSDK_OFFSET(0x193F9E50)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_90_TypeDefinitionIndex = 31712;

class Class_1_21C7581DFE99F091_90 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_90*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_90*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_90_TypeDefinitionIndex)->GetStaticField(0x41570);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_9; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_90*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_90*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_90*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_90* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_90*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_90*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_90*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_90_MERGEFROM_1_OFFSET))(this, a1);
	}
};
