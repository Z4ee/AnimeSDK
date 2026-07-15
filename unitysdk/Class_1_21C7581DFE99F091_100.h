#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CFF5B00)
#define CLASS_1_21C7581DFE99F091_100_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFF5710)
#define CLASS_1_21C7581DFE99F091_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CFF5880)
#define CLASS_1_21C7581DFE99F091_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFF57A0)
#define CLASS_1_21C7581DFE99F091_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFF5960)
#define CLASS_1_21C7581DFE99F091_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CFF5BE0)
#define CLASS_1_21C7581DFE99F091_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CFF5BA0)
#define CLASS_1_21C7581DFE99F091_100_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CFF5760)
#define CLASS_1_21C7581DFE99F091_100_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CFF5680)
#define CLASS_1_21C7581DFE99F091_100_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CFF5770)
#define CLASS_1_21C7581DFE99F091_100_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CFF5790)
#define CLASS_1_21C7581DFE99F091_100_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CFF5780)
#define CLASS_1_21C7581DFE99F091_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CFF56B0)
#define CLASS_1_21C7581DFE99F091_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CFF5990)
#define CLASS_1_21C7581DFE99F091_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFF59F0)
#define CLASS_1_21C7581DFE99F091_100__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFF5D60)
#define CLASS_1_21C7581DFE99F091_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFF56D0)
#define CLASS_1_21C7581DFE99F091_100__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF56C0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_100_TypeDefinitionIndex = 30852;

class Class_1_21C7581DFE99F091_100 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_100*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_100*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_100_TypeDefinitionIndex)->GetStaticField(0x38300);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_100*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_100*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_100*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_100* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_100*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_100*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
