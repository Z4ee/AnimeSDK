#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_140_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C4950E0)
#define CLASS_1_21C7581DFE99F091_140_CLONE_OFFSET UNITYSDK_OFFSET(0x1C494C90)
#define CLASS_1_21C7581DFE99F091_140_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C494E60)
#define CLASS_1_21C7581DFE99F091_140_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C494D50)
#define CLASS_1_21C7581DFE99F091_140_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C494F40)
#define CLASS_1_21C7581DFE99F091_140_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C4951C0)
#define CLASS_1_21C7581DFE99F091_140_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C495180)
#define CLASS_1_21C7581DFE99F091_140_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C494D10)
#define CLASS_1_21C7581DFE99F091_140_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C494BD0)
#define CLASS_1_21C7581DFE99F091_140_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C494D20)
#define CLASS_1_21C7581DFE99F091_140_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C494D40)
#define CLASS_1_21C7581DFE99F091_140_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C494D30)
#define CLASS_1_21C7581DFE99F091_140_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C494C30)
#define CLASS_1_21C7581DFE99F091_140_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C494F70)
#define CLASS_1_21C7581DFE99F091_140_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C494FD0)
#define CLASS_1_21C7581DFE99F091_140__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C495340)
#define CLASS_1_21C7581DFE99F091_140__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C494C50)
#define CLASS_1_21C7581DFE99F091_140__CTOR_OFFSET UNITYSDK_OFFSET(0x1C494C40)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_140_TypeDefinitionIndex = 33486;

class Class_1_21C7581DFE99F091_140 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_140*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_140*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_140_TypeDefinitionIndex)->GetStaticField(0x47830);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_140*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_140*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_140*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_140* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_140*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_140* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_140*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_140*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_140_MERGEFROM_1_OFFSET))(this, a1);
	}
};
