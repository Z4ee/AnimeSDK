#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_142_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E99C0)
#define CLASS_1_21C7581DFE99F091_142_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E95D0)
#define CLASS_1_21C7581DFE99F091_142_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E9740)
#define CLASS_1_21C7581DFE99F091_142_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E9660)
#define CLASS_1_21C7581DFE99F091_142_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E9820)
#define CLASS_1_21C7581DFE99F091_142_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E9AA0)
#define CLASS_1_21C7581DFE99F091_142_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E9A60)
#define CLASS_1_21C7581DFE99F091_142_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E9E9620)
#define CLASS_1_21C7581DFE99F091_142_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E9E9540)
#define CLASS_1_21C7581DFE99F091_142_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E9E9630)
#define CLASS_1_21C7581DFE99F091_142_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E9E9650)
#define CLASS_1_21C7581DFE99F091_142_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E9E9640)
#define CLASS_1_21C7581DFE99F091_142_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9570)
#define CLASS_1_21C7581DFE99F091_142_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E9850)
#define CLASS_1_21C7581DFE99F091_142_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E98B0)
#define CLASS_1_21C7581DFE99F091_142__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9C20)
#define CLASS_1_21C7581DFE99F091_142__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E9590)
#define CLASS_1_21C7581DFE99F091_142__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9580)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_142_TypeDefinitionIndex = 34647;

class Class_1_21C7581DFE99F091_142 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_142*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_142*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_142_TypeDefinitionIndex)->GetStaticField(0x4EB30);
	}
	// static const ::System::Int32 IEIFMNNMINA = 0xD; // 0x0
	// static const ::System::Int32 HCBMCNENNJI = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HJEGLCJEOKC; // 0x18
	::System::Boolean BOFPCLDECCH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_142* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_142*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_142*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_142*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_142* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_142*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_142* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_142*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_142* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_142*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_142_MERGEFROM_1_OFFSET))(this, a1);
	}
};
