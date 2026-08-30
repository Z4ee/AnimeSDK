#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E49E3C0)
#define CLASS_1_21C7581DFE99F091_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49DF40)
#define CLASS_1_21C7581DFE99F091_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49E0E0)
#define CLASS_1_21C7581DFE99F091_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49DFF0)
#define CLASS_1_21C7581DFE99F091_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49E1C0)
#define CLASS_1_21C7581DFE99F091_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49E530)
#define CLASS_1_21C7581DFE99F091_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E49E4E0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E49DFD0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E49DFB0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E49DEB0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E49DFE0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E49DFC0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E49DFA0)
#define CLASS_1_21C7581DFE99F091_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E49DF90)
#define CLASS_1_21C7581DFE99F091_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49DEE0)
#define CLASS_1_21C7581DFE99F091_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49E1F0)
#define CLASS_1_21C7581DFE99F091_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49E250)
#define CLASS_1_21C7581DFE99F091_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49E6D0)
#define CLASS_1_21C7581DFE99F091_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49DF00)
#define CLASS_1_21C7581DFE99F091_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1E49DEF0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_5_TypeDefinitionIndex = 25620;

class Class_1_21C7581DFE99F091_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_5*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_5_TypeDefinitionIndex)->GetStaticField(0x41A50);
	}
	// static const ::System::Int32 HOLLCCLAJAB = 0x1; // 0x0
	// static const ::System::Int32 KOEOEHIMOEI = 0x8; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 LJDBCGPFFDH; // 0x18
	::System::Boolean DHAHNCEMJJE; // 0x1C
	::System::UInt32 NAEACGPKNNH; // 0x20

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

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
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
