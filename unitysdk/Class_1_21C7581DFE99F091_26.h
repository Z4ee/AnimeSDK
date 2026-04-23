#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A44110)
#define CLASS_1_21C7581DFE99F091_26_CLONE_OFFSET UNITYSDK_OFFSET(0x19A43D20)
#define CLASS_1_21C7581DFE99F091_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A43EC0)
#define CLASS_1_21C7581DFE99F091_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A43E20)
#define CLASS_1_21C7581DFE99F091_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A43F60)
#define CLASS_1_21C7581DFE99F091_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A44330)
#define CLASS_1_21C7581DFE99F091_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A442D0)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19A43E00)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A43D80)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A43C80)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19A43E10)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A43D90)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x19A43DF0)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19A43DE0)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19A43DD0)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A43DB0)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19A43DC0)
#define CLASS_1_21C7581DFE99F091_26_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A43DA0)
#define CLASS_1_21C7581DFE99F091_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A43CB0)
#define CLASS_1_21C7581DFE99F091_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A43FA0)
#define CLASS_1_21C7581DFE99F091_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A44000)
#define CLASS_1_21C7581DFE99F091_26__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A443F0)
#define CLASS_1_21C7581DFE99F091_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A43CD0)
#define CLASS_1_21C7581DFE99F091_26__CTOR_OFFSET UNITYSDK_OFFSET(0x19A43CC0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_26_TypeDefinitionIndex = 26305;

class Class_1_21C7581DFE99F091_26 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_26*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_26_TypeDefinitionIndex)->GetStaticField(0x4C9D0);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Boolean Field_1_5; // 0x18
	::System::Boolean Field_1_7; // 0x19
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_11; // 0x20
	::System::Int32 Field_1_9; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_26*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_26*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_26*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_26* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_26*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_26*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
