#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_28AF0C7D8FD87E9F_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19828780)
#define CLASS_1_28AF0C7D8FD87E9F_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19828300)
#define CLASS_1_28AF0C7D8FD87E9F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19828520)
#define CLASS_1_28AF0C7D8FD87E9F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19828450)
#define CLASS_1_28AF0C7D8FD87E9F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198285C0)
#define CLASS_1_28AF0C7D8FD87E9F_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19828A70)
#define CLASS_1_28AF0C7D8FD87E9F_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19828A10)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x198283B0)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x198283F0)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19828410)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19828430)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19828390)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19828230)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x198283C0)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19828400)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19828420)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19828440)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x198283A0)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x198283E0)
#define CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x198283D0)
#define CLASS_1_28AF0C7D8FD87E9F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19828290)
#define CLASS_1_28AF0C7D8FD87E9F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19828600)
#define CLASS_1_28AF0C7D8FD87E9F_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19828660)
#define CLASS_1_28AF0C7D8FD87E9F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19828B40)
#define CLASS_1_28AF0C7D8FD87E9F_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198282B0)
#define CLASS_1_28AF0C7D8FD87E9F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x198282A0)

inline static constexpr unsigned int Class_1_28AF0C7D8FD87E9F_1_TypeDefinitionIndex = 28169;

class Class_1_28AF0C7D8FD87E9F_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28AF0C7D8FD87E9F_1_TypeDefinitionIndex)->GetStaticField(0x66D50);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_11; // 0x1C
	::System::Boolean Field_1_7; // 0x20
	::System::UInt32 Field_1_13; // 0x24
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_28AF0C7D8FD87E9F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F_1*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_28AF0C7D8FD87E9F_1* Clone()
	{
		return ((::Class_1_28AF0C7D8FD87E9F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_28AF0C7D8FD87E9F_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F_1*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_28AF0C7D8FD87E9F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F_1*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
