#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D054B30)
#define CLASS_1_21C7581DFE99F091_27_CLONE_OFFSET UNITYSDK_OFFSET(0x1D0546E0)
#define CLASS_1_21C7581DFE99F091_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D0548B0)
#define CLASS_1_21C7581DFE99F091_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0547A0)
#define CLASS_1_21C7581DFE99F091_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D054990)
#define CLASS_1_21C7581DFE99F091_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D054C10)
#define CLASS_1_21C7581DFE99F091_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D054BD0)
#define CLASS_1_21C7581DFE99F091_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D054780)
#define CLASS_1_21C7581DFE99F091_27_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D054620)
#define CLASS_1_21C7581DFE99F091_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D054790)
#define CLASS_1_21C7581DFE99F091_27_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D054770)
#define CLASS_1_21C7581DFE99F091_27_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D054760)
#define CLASS_1_21C7581DFE99F091_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D054680)
#define CLASS_1_21C7581DFE99F091_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D0549C0)
#define CLASS_1_21C7581DFE99F091_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D054A20)
#define CLASS_1_21C7581DFE99F091_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D054D90)
#define CLASS_1_21C7581DFE99F091_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0546A0)
#define CLASS_1_21C7581DFE99F091_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1D054690)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_27_TypeDefinitionIndex = 26570;

class Class_1_21C7581DFE99F091_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_27*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_27_TypeDefinitionIndex)->GetStaticField(0x22690);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_27*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_27*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_27* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_27*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_27*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
