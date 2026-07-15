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

#define CLASS_1_667AAF86D0A761FB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8F1750)
#define CLASS_1_667AAF86D0A761FB_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8F1200)
#define CLASS_1_667AAF86D0A761FB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8F1350)
#define CLASS_1_667AAF86D0A761FB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8F12C0)
#define CLASS_1_667AAF86D0A761FB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8F13D0)
#define CLASS_1_667AAF86D0A761FB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8F1AB0)
#define CLASS_1_667AAF86D0A761FB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8F1A40)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C8F1290)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8F1250)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1C8F1280)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C8F1240)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C8F12B0)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8F10D0)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C8F12A0)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8F1260)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C8F1230)
#define CLASS_1_667AAF86D0A761FB_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1C8F1270)
#define CLASS_1_667AAF86D0A761FB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8F1100)
#define CLASS_1_667AAF86D0A761FB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8F1510)
#define CLASS_1_667AAF86D0A761FB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8F1570)
#define CLASS_1_667AAF86D0A761FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8F1BC0)
#define CLASS_1_667AAF86D0A761FB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8F1160)
#define CLASS_1_667AAF86D0A761FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F1110)

inline static constexpr unsigned int Class_1_667AAF86D0A761FB_TypeDefinitionIndex = 30617;

class Class_1_667AAF86D0A761FB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_667AAF86D0A761FB_TypeDefinitionIndex)->GetStaticField(0x2F800);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_667AAF86D0A761FB*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_667AAF86D0A761FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_667AAF86D0A761FB_TypeDefinitionIndex)->GetStaticField(0x2F808);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::Int64 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::UInt64 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_667AAF86D0A761FB*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_667AAF86D0A761FB*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_667AAF86D0A761FB* Clone()
	{
		return ((::Class_1_667AAF86D0A761FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_667AAF86D0A761FB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
