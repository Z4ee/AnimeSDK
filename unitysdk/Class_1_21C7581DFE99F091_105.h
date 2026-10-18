#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_105_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E063520)
#define CLASS_1_21C7581DFE99F091_105_CLONE_OFFSET UNITYSDK_OFFSET(0x1E063130)
#define CLASS_1_21C7581DFE99F091_105_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0632A0)
#define CLASS_1_21C7581DFE99F091_105_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0631C0)
#define CLASS_1_21C7581DFE99F091_105_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E063380)
#define CLASS_1_21C7581DFE99F091_105_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E063600)
#define CLASS_1_21C7581DFE99F091_105_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0635C0)
#define CLASS_1_21C7581DFE99F091_105_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E063180)
#define CLASS_1_21C7581DFE99F091_105_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0630A0)
#define CLASS_1_21C7581DFE99F091_105_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E063190)
#define CLASS_1_21C7581DFE99F091_105_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E0631B0)
#define CLASS_1_21C7581DFE99F091_105_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E0631A0)
#define CLASS_1_21C7581DFE99F091_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0630D0)
#define CLASS_1_21C7581DFE99F091_105_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0633B0)
#define CLASS_1_21C7581DFE99F091_105_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E063410)
#define CLASS_1_21C7581DFE99F091_105__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E063780)
#define CLASS_1_21C7581DFE99F091_105__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0630F0)
#define CLASS_1_21C7581DFE99F091_105__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0630E0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_105_TypeDefinitionIndex = 32233;

class Class_1_21C7581DFE99F091_105 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_105*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_105*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_105_TypeDefinitionIndex)->GetStaticField(0xFD10);
	}
	// static const ::System::Int32 KOEOEHIMOEI = 0x7; // 0x0
	// static const ::System::Int32 GAKEBCKDHCE = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean JLFGIAJFPHP; // 0x18
	::System::UInt32 LJDBCGPFFDH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_105*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_105*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_105*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_105* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_105* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_105*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_105*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_105_MERGEFROM_1_OFFSET))(this, a1);
	}
};
