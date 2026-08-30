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

#define CLASS_1_CDDAD0E904A274CD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D8A0940)
#define CLASS_1_CDDAD0E904A274CD_CLONE_OFFSET UNITYSDK_OFFSET(0x1D8A0360)
#define CLASS_1_CDDAD0E904A274CD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D8A04E0)
#define CLASS_1_CDDAD0E904A274CD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D8A0440)
#define CLASS_1_CDDAD0E904A274CD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D8A0570)
#define CLASS_1_CDDAD0E904A274CD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D8A0C20)
#define CLASS_1_CDDAD0E904A274CD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D8A0BA0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D8A03C0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1D8A03E0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1D8A0400)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D8A03A0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D8A0390)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D8A0220)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D8A03D0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1D8A03F0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1D8A0410)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D8A03B0)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D8A0430)
#define CLASS_1_CDDAD0E904A274CD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D8A0420)
#define CLASS_1_CDDAD0E904A274CD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D8A0250)
#define CLASS_1_CDDAD0E904A274CD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D8A0670)
#define CLASS_1_CDDAD0E904A274CD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D8A06D0)
#define CLASS_1_CDDAD0E904A274CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8A0D40)
#define CLASS_1_CDDAD0E904A274CD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8A02B0)
#define CLASS_1_CDDAD0E904A274CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A0260)

inline static constexpr unsigned int Class_1_CDDAD0E904A274CD_TypeDefinitionIndex = 29292;

class Class_1_CDDAD0E904A274CD : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDDAD0E904A274CD_TypeDefinitionIndex)->GetStaticField(0x1C920);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DDFODHOFBIP()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDDAD0E904A274CD_TypeDefinitionIndex)->GetStaticField(0x1C928);
	}
	// static const ::System::Int32 IMGDAOEBONP = 0xF; // 0x0
	// static const ::System::Int32 BOGFCKKNGJB = 0xD; // 0x0
	// static const ::System::Int32 HACFLGOPALO = 0x3; // 0x0
	// static const ::System::Int32 BKCLJIHIJIJ = 0x4; // 0x0
	// static const ::System::Int32 JGGMJFOBLCI = 0x5; // 0x0
	// static const ::System::Int32 KOAPPFHOOEJ = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CBFGBDBJHID; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 HKMEMBIPHAN; // 0x20
	::System::Boolean CCNIHPKICOK; // 0x24
	::System::UInt32 MGPCOLIAECE; // 0x28
	::System::UInt32 DBDCJHECJOO; // 0x2C
	::System::UInt32 EIMJCAPGIAC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_CDDAD0E904A274CD*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CDDAD0E904A274CD* Clone()
	{
		return ((::Class_1_CDDAD0E904A274CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CDDAD0E904A274CD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
