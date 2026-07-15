#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_10F56A639581CEB1_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA7D950)
#define CLASS_1_10F56A639581CEB1_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA7D3A0)
#define CLASS_1_10F56A639581CEB1_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA7D510)
#define CLASS_1_10F56A639581CEB1_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA7D460)
#define CLASS_1_10F56A639581CEB1_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA7D620)
#define CLASS_1_10F56A639581CEB1_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA7DBA0)
#define CLASS_1_10F56A639581CEB1_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA7DB40)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CA7D410)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CA7D430)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CA7D3F0)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CA7D240)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CA7D450)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CA7D420)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CA7D440)
#define CLASS_1_10F56A639581CEB1_17_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CA7D400)
#define CLASS_1_10F56A639581CEB1_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA7D2A0)
#define CLASS_1_10F56A639581CEB1_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA7D730)
#define CLASS_1_10F56A639581CEB1_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA7D790)
#define CLASS_1_10F56A639581CEB1_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA7DCB0)
#define CLASS_1_10F56A639581CEB1_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA7D300)
#define CLASS_1_10F56A639581CEB1_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7D2B0)

inline static constexpr unsigned int Class_1_10F56A639581CEB1_17_TypeDefinitionIndex = 29711;

class Class_1_10F56A639581CEB1_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F56A639581CEB1_17_TypeDefinitionIndex)->GetStaticField(0x1BF10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_17*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F56A639581CEB1_17_TypeDefinitionIndex)->GetStaticField(0x1BF18);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_10F56A639581CEB1_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_17*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_17*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_10F56A639581CEB1_17* Clone()
	{
		return ((::Class_1_10F56A639581CEB1_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_10F56A639581CEB1_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_10F56A639581CEB1_17*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_10F56A639581CEB1_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_17*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
