#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7A4180)
#define CLASS_1_21C7581DFE99F091_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7A3EF0)
#define CLASS_1_21C7581DFE99F091_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7A4000)
#define CLASS_1_21C7581DFE99F091_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7A3F80)
#define CLASS_1_21C7581DFE99F091_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7A4070)
#define CLASS_1_21C7581DFE99F091_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7A4260)
#define CLASS_1_21C7581DFE99F091_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7A4220)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7A3F40)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7A3E60)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7A3F50)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A7A3F70)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A7A3F60)
#define CLASS_1_21C7581DFE99F091_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7A3E90)
#define CLASS_1_21C7581DFE99F091_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7A40A0)
#define CLASS_1_21C7581DFE99F091_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7A4100)
#define CLASS_1_21C7581DFE99F091_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7A43E0)
#define CLASS_1_21C7581DFE99F091_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7A3EB0)
#define CLASS_1_21C7581DFE99F091_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A3EA0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_5_TypeDefinitionIndex = 24697;

class Class_1_21C7581DFE99F091_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_5_TypeDefinitionIndex)->GetStaticField(0x48D50);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_5*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_5* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_5*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_5*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
