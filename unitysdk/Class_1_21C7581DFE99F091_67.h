#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_67_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D0AF070)
#define CLASS_1_21C7581DFE99F091_67_CLONE_OFFSET UNITYSDK_OFFSET(0x1D0AEB90)
#define CLASS_1_21C7581DFE99F091_67_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D0AED20)
#define CLASS_1_21C7581DFE99F091_67_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0AEC90)
#define CLASS_1_21C7581DFE99F091_67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D0AEE10)
#define CLASS_1_21C7581DFE99F091_67_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D0AF260)
#define CLASS_1_21C7581DFE99F091_67_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D0AF210)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D0AEC30)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1D0AEC50)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D0AEC10)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D0AEAD0)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D0AEC40)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1D0AEC60)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D0AEC20)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D0AEC80)
#define CLASS_1_21C7581DFE99F091_67_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D0AEC70)
#define CLASS_1_21C7581DFE99F091_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D0AEB30)
#define CLASS_1_21C7581DFE99F091_67_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D0AEE40)
#define CLASS_1_21C7581DFE99F091_67_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D0AEEA0)
#define CLASS_1_21C7581DFE99F091_67__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0AF310)
#define CLASS_1_21C7581DFE99F091_67__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0AEB50)
#define CLASS_1_21C7581DFE99F091_67__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AEB40)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_67_TypeDefinitionIndex = 28846;

class Class_1_21C7581DFE99F091_67 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_67*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_67*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_67_TypeDefinitionIndex)->GetStaticField(0x3FDE0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x1C
	::System::Boolean Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_67*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_67*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_67*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_67* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_67* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_67*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_67*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_67_MERGEFROM_1_OFFSET))(this, a1);
	}
};
