#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBB7140)
#define CLASS_1_21C7581DFE99F091_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB6D50)
#define CLASS_1_21C7581DFE99F091_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBB6EC0)
#define CLASS_1_21C7581DFE99F091_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBB6DE0)
#define CLASS_1_21C7581DFE99F091_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBB6FA0)
#define CLASS_1_21C7581DFE99F091_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB7220)
#define CLASS_1_21C7581DFE99F091_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBB71E0)
#define CLASS_1_21C7581DFE99F091_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EBB6DC0)
#define CLASS_1_21C7581DFE99F091_21_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EBB6CC0)
#define CLASS_1_21C7581DFE99F091_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EBB6DD0)
#define CLASS_1_21C7581DFE99F091_21_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EBB6DB0)
#define CLASS_1_21C7581DFE99F091_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EBB6DA0)
#define CLASS_1_21C7581DFE99F091_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6CF0)
#define CLASS_1_21C7581DFE99F091_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB6FD0)
#define CLASS_1_21C7581DFE99F091_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBB7030)
#define CLASS_1_21C7581DFE99F091_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB73A0)
#define CLASS_1_21C7581DFE99F091_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB6D10)
#define CLASS_1_21C7581DFE99F091_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6D00)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_21_TypeDefinitionIndex = 26513;

class Class_1_21C7581DFE99F091_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_21*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_21_TypeDefinitionIndex)->GetStaticField(0xC620);
	}
	// static const ::System::Int32 IGFDBNNGBBN = 0x7; // 0x0
	// static const ::System::Int32 JKJHNGACNOA = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean NLNIOMNACDB; // 0x18
	::System::UInt32 KJHFIADNIFI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_21*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_21*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_21* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_21*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_21*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
