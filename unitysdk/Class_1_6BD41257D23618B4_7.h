#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6BD41257D23618B4_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193A22A0)
#define CLASS_1_6BD41257D23618B4_7_CLONE_OFFSET UNITYSDK_OFFSET(0x193A1F60)
#define CLASS_1_6BD41257D23618B4_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193A2100)
#define CLASS_1_6BD41257D23618B4_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x193A2040)
#define CLASS_1_6BD41257D23618B4_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193A2170)
#define CLASS_1_6BD41257D23618B4_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193A2410)
#define CLASS_1_6BD41257D23618B4_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193A23C0)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x193A2020)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193A2000)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x193A1EA0)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x193A2030)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193A2010)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x193A1FF0)
#define CLASS_1_6BD41257D23618B4_7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x193A1FE0)
#define CLASS_1_6BD41257D23618B4_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193A1F00)
#define CLASS_1_6BD41257D23618B4_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193A21A0)
#define CLASS_1_6BD41257D23618B4_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x193A2200)
#define CLASS_1_6BD41257D23618B4_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A24B0)
#define CLASS_1_6BD41257D23618B4_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A1F20)
#define CLASS_1_6BD41257D23618B4_7__CTOR_OFFSET UNITYSDK_OFFSET(0x193A1F10)

inline static constexpr unsigned int Class_1_6BD41257D23618B4_7_TypeDefinitionIndex = 27795;

class Class_1_6BD41257D23618B4_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BD41257D23618B4_7_TypeDefinitionIndex)->GetStaticField(0x35590);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::System::UInt32 Field_1_7; // 0x1C
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6BD41257D23618B4_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_7*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6BD41257D23618B4_7* Clone()
	{
		return ((::Class_1_6BD41257D23618B4_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6BD41257D23618B4_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6BD41257D23618B4_7*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6BD41257D23618B4_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_7*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
