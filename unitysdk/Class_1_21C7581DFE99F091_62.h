#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_62_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D84DFF0)
#define CLASS_1_21C7581DFE99F091_62_CLONE_OFFSET UNITYSDK_OFFSET(0x1D84DBA0)
#define CLASS_1_21C7581DFE99F091_62_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D84DD70)
#define CLASS_1_21C7581DFE99F091_62_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D84DC60)
#define CLASS_1_21C7581DFE99F091_62_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D84DE50)
#define CLASS_1_21C7581DFE99F091_62_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D84E0D0)
#define CLASS_1_21C7581DFE99F091_62_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D84E090)
#define CLASS_1_21C7581DFE99F091_62_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D84DC40)
#define CLASS_1_21C7581DFE99F091_62_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D84DAE0)
#define CLASS_1_21C7581DFE99F091_62_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D84DC50)
#define CLASS_1_21C7581DFE99F091_62_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D84DC30)
#define CLASS_1_21C7581DFE99F091_62_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D84DC20)
#define CLASS_1_21C7581DFE99F091_62_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D84DB40)
#define CLASS_1_21C7581DFE99F091_62_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D84DE80)
#define CLASS_1_21C7581DFE99F091_62_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D84DEE0)
#define CLASS_1_21C7581DFE99F091_62__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D84E250)
#define CLASS_1_21C7581DFE99F091_62__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D84DB60)
#define CLASS_1_21C7581DFE99F091_62__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84DB50)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_62_TypeDefinitionIndex = 29413;

class Class_1_21C7581DFE99F091_62 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_62*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_62*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_62_TypeDefinitionIndex)->GetStaticField(0x35870);
	}
	// static const ::System::Int32 CFLIFLIONBM = 0x6; // 0x0
	// static const ::System::Int32 CEDDGAMLKJK = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 ECCMJBDHOBD; // 0x18
	::System::Boolean OBGJHGMKIHF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_62*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_62*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_62*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_62* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_62*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_62* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_62*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_62*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_62_MERGEFROM_1_OFFSET))(this, a1);
	}
};
