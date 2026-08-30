#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2375E47039821420_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA64CF0)
#define CLASS_1_2375E47039821420_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA64660)
#define CLASS_1_2375E47039821420_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA64850)
#define CLASS_1_2375E47039821420_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA647B0)
#define CLASS_1_2375E47039821420_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA64980)
#define CLASS_1_2375E47039821420_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA64FF0)
#define CLASS_1_2375E47039821420_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA64F90)
#define CLASS_1_2375E47039821420_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DA64710)
#define CLASS_1_2375E47039821420_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DA646F0)
#define CLASS_1_2375E47039821420_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1DA647A0)
#define CLASS_1_2375E47039821420_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1DA64730)
#define CLASS_1_2375E47039821420_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DA64540)
#define CLASS_1_2375E47039821420_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DA64720)
#define CLASS_1_2375E47039821420_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DA64700)
#define CLASS_1_2375E47039821420_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1DA64740)
#define CLASS_1_2375E47039821420_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1DA64790)
#define CLASS_1_2375E47039821420_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA64570)
#define CLASS_1_2375E47039821420_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA64AC0)
#define CLASS_1_2375E47039821420_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA64B20)
#define CLASS_1_2375E47039821420__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA650D0)
#define CLASS_1_2375E47039821420__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA645D0)
#define CLASS_1_2375E47039821420__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64580)

inline static constexpr unsigned int Class_1_2375E47039821420_TypeDefinitionIndex = 28003;

class Class_1_2375E47039821420 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2375E47039821420*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2375E47039821420*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2375E47039821420_TypeDefinitionIndex)->GetStaticField(0x258A0);
	}
	// static const ::System::Int32 PEONMMACLKB = 0x7; // 0x0
	// static const ::System::Int32 JIKLFFDOHCP = 0xE; // 0x0
	// static const ::System::Int32 MCBNHKIMPMH = 0x1; // 0x0
	// static const ::System::Int32 FFFNHDEGOGJ = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::ByteString* NJAIONNHDKJ; // 0x18
	::System::UInt64 LKKMKMPFEFB; // 0x20
	::System::UInt32 CAJPDCGPGNJ; // 0x28
	::System::UInt32 IPNKLLBIFLC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2375E47039821420* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2375E47039821420*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2375E47039821420*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2375E47039821420*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2375E47039821420* Clone()
	{
		return ((::Class_1_2375E47039821420*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2375E47039821420* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2375E47039821420*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2375E47039821420* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2375E47039821420*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2375E47039821420_MERGEFROM_1_OFFSET))(this, a1);
	}
};
