#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_95_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E369030)
#define CLASS_1_21C7581DFE99F091_95_CLONE_OFFSET UNITYSDK_OFFSET(0x1E368BE0)
#define CLASS_1_21C7581DFE99F091_95_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E368DB0)
#define CLASS_1_21C7581DFE99F091_95_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E368CA0)
#define CLASS_1_21C7581DFE99F091_95_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E368E90)
#define CLASS_1_21C7581DFE99F091_95_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E369110)
#define CLASS_1_21C7581DFE99F091_95_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3690D0)
#define CLASS_1_21C7581DFE99F091_95_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E368C60)
#define CLASS_1_21C7581DFE99F091_95_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E368B20)
#define CLASS_1_21C7581DFE99F091_95_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E368C70)
#define CLASS_1_21C7581DFE99F091_95_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E368C90)
#define CLASS_1_21C7581DFE99F091_95_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E368C80)
#define CLASS_1_21C7581DFE99F091_95_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E368B80)
#define CLASS_1_21C7581DFE99F091_95_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E368EC0)
#define CLASS_1_21C7581DFE99F091_95_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E368F20)
#define CLASS_1_21C7581DFE99F091_95__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E369290)
#define CLASS_1_21C7581DFE99F091_95__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E368BA0)
#define CLASS_1_21C7581DFE99F091_95__CTOR_OFFSET UNITYSDK_OFFSET(0x1E368B90)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_95_TypeDefinitionIndex = 31248;

class Class_1_21C7581DFE99F091_95 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_95*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_95*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_95_TypeDefinitionIndex)->GetStaticField(0xB5A0);
	}
	// static const ::System::Int32 NDBLLNDJADG = 0x2; // 0x0
	// static const ::System::Int32 DGJOOLFNFMN = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean OFAKEMKNCKG; // 0x18
	::System::UInt32 ONPFGKIELHM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_95*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_95*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_95*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_95* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_95*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_95*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_95_MERGEFROM_1_OFFSET))(this, a1);
	}
};
