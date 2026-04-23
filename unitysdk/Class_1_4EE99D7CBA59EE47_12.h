#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4EE99D7CBA59EE47_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19926520)
#define CLASS_1_4EE99D7CBA59EE47_12_CLONE_OFFSET UNITYSDK_OFFSET(0x19926080)
#define CLASS_1_4EE99D7CBA59EE47_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199262C0)
#define CLASS_1_4EE99D7CBA59EE47_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x199261F0)
#define CLASS_1_4EE99D7CBA59EE47_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19926360)
#define CLASS_1_4EE99D7CBA59EE47_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x199267C0)
#define CLASS_1_4EE99D7CBA59EE47_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19926720)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x199261D0)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19926100)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19926120)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19925FB0)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x199261E0)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19926110)
#define CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19926130)
#define CLASS_1_4EE99D7CBA59EE47_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19926010)
#define CLASS_1_4EE99D7CBA59EE47_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19926410)
#define CLASS_1_4EE99D7CBA59EE47_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x19926470)
#define CLASS_1_4EE99D7CBA59EE47_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x199268D0)
#define CLASS_1_4EE99D7CBA59EE47_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19926030)
#define CLASS_1_4EE99D7CBA59EE47_12__CTOR_OFFSET UNITYSDK_OFFSET(0x19926020)

inline static constexpr unsigned int Class_1_4EE99D7CBA59EE47_12_TypeDefinitionIndex = 29156;

class Class_1_4EE99D7CBA59EE47_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EE99D7CBA59EE47_12_TypeDefinitionIndex)->GetStaticField(0x5B9E0);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::System::String* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4EE99D7CBA59EE47_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47_12*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47_12*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4EE99D7CBA59EE47_12* Clone()
	{
		return ((::Class_1_4EE99D7CBA59EE47_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4EE99D7CBA59EE47_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47_12*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4EE99D7CBA59EE47_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47_12*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
