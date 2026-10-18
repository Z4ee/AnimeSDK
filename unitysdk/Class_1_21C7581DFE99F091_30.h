#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64E580)
#define CLASS_1_21C7581DFE99F091_30_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64E130)
#define CLASS_1_21C7581DFE99F091_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64E300)
#define CLASS_1_21C7581DFE99F091_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64E1F0)
#define CLASS_1_21C7581DFE99F091_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64E3E0)
#define CLASS_1_21C7581DFE99F091_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64E660)
#define CLASS_1_21C7581DFE99F091_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64E620)
#define CLASS_1_21C7581DFE99F091_30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E64E1B0)
#define CLASS_1_21C7581DFE99F091_30_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E64E070)
#define CLASS_1_21C7581DFE99F091_30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E64E1C0)
#define CLASS_1_21C7581DFE99F091_30_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E64E1E0)
#define CLASS_1_21C7581DFE99F091_30_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E64E1D0)
#define CLASS_1_21C7581DFE99F091_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64E0D0)
#define CLASS_1_21C7581DFE99F091_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64E410)
#define CLASS_1_21C7581DFE99F091_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64E470)
#define CLASS_1_21C7581DFE99F091_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64E7E0)
#define CLASS_1_21C7581DFE99F091_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64E0F0)
#define CLASS_1_21C7581DFE99F091_30__CTOR_OFFSET UNITYSDK_OFFSET(0x1E64E0E0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_30_TypeDefinitionIndex = 27748;

class Class_1_21C7581DFE99F091_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_30*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_30_TypeDefinitionIndex)->GetStaticField(0x4B2C0);
	}
	// static const ::System::Int32 DFLDAOLENMB = 0x9; // 0x0
	// static const ::System::Int32 GEELPGBGIOO = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean NPGMMNFKMKN; // 0x18
	::System::UInt32 BEIPFCCPIJB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_30*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_30*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_30* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_30*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_30*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
