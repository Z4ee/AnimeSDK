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

#define CLASS_1_3714832A39691304_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9BE90)
#define CLASS_1_3714832A39691304_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9B8D0)
#define CLASS_1_3714832A39691304_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9BA40)
#define CLASS_1_3714832A39691304_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9B9B0)
#define CLASS_1_3714832A39691304_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9BAD0)
#define CLASS_1_3714832A39691304_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9C1F0)
#define CLASS_1_3714832A39691304_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9C170)
#define CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DF9B920)
#define CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DF9B940)
#define CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DF9B960)
#define CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1DF9B990)
#define CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF9B900)
#define CLASS_1_3714832A39691304_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DF9B980)
#define CLASS_1_3714832A39691304_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF9B7A0)
#define CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DF9B930)
#define CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DF9B950)
#define CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DF9B970)
#define CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1DF9B9A0)
#define CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF9B910)
#define CLASS_1_3714832A39691304_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9B7D0)
#define CLASS_1_3714832A39691304_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9BBF0)
#define CLASS_1_3714832A39691304_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9BC50)
#define CLASS_1_3714832A39691304_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9C310)
#define CLASS_1_3714832A39691304_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9B830)
#define CLASS_1_3714832A39691304_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9B7E0)

inline static constexpr unsigned int Class_1_3714832A39691304_1_TypeDefinitionIndex = 25546;

class Class_1_3714832A39691304_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3714832A39691304_1_TypeDefinitionIndex)->GetStaticField(0x21A20);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HLNCABGNLHL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3714832A39691304_1_TypeDefinitionIndex)->GetStaticField(0x21A28);
	}
	// static const ::System::Int32 CPPFKOJENJH = 0x3; // 0x0
	// static const ::System::Int32 HHAPFDHANFC = 0xB; // 0x0
	// static const ::System::Int32 AKFFJEHMCCB = 0x6; // 0x0
	// static const ::System::Int32 JJELBDKAKGN = 0x7; // 0x0
	// static const ::System::Int32 DJALGNPJINF = 0xF; // 0x0
	// static const ::System::Int32 DCAOLJIEPIN = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGGHGEPMGIM; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 GEMFJILOPLL; // 0x20
	::System::UInt32 DBHLHPDBNFD; // 0x24
	::System::UInt32 AFIDADPNANO; // 0x28
	::System::UInt32 KHEEFNDOFIF; // 0x2C
	::System::UInt32 LJDAJDIGGIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3714832A39691304_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3714832A39691304_1*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3714832A39691304_1* Clone()
	{
		return ((::Class_1_3714832A39691304_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3714832A39691304_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3714832A39691304_1*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3714832A39691304_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3714832A39691304_1*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
