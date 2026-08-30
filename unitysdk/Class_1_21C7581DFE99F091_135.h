#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_135_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC8730)
#define CLASS_1_21C7581DFE99F091_135_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC8340)
#define CLASS_1_21C7581DFE99F091_135_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC84B0)
#define CLASS_1_21C7581DFE99F091_135_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC83D0)
#define CLASS_1_21C7581DFE99F091_135_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC8590)
#define CLASS_1_21C7581DFE99F091_135_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC8810)
#define CLASS_1_21C7581DFE99F091_135_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC87D0)
#define CLASS_1_21C7581DFE99F091_135_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DFC83B0)
#define CLASS_1_21C7581DFE99F091_135_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DFC82B0)
#define CLASS_1_21C7581DFE99F091_135_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DFC83C0)
#define CLASS_1_21C7581DFE99F091_135_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DFC83A0)
#define CLASS_1_21C7581DFE99F091_135_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DFC8390)
#define CLASS_1_21C7581DFE99F091_135_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC82E0)
#define CLASS_1_21C7581DFE99F091_135_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC85C0)
#define CLASS_1_21C7581DFE99F091_135_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC8620)
#define CLASS_1_21C7581DFE99F091_135__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC8990)
#define CLASS_1_21C7581DFE99F091_135__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC8300)
#define CLASS_1_21C7581DFE99F091_135__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC82F0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_135_TypeDefinitionIndex = 33854;

class Class_1_21C7581DFE99F091_135 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_135*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_135*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_135_TypeDefinitionIndex)->GetStaticField(0x21AD0);
	}
	// static const ::System::Int32 HBGMNBBBJDO = 0xD; // 0x0
	// static const ::System::Int32 AKFFJEHMCCB = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean CDFDONPAJCP; // 0x18
	::System::UInt32 GEMFJILOPLL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_135*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_135*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_135*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_135* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_135*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_135* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_135*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_135*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_135_MERGEFROM_1_OFFSET))(this, a1);
	}
};
