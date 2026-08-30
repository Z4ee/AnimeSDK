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

#define CLASS_1_55ABB4F0EAFC69F1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF31300)
#define CLASS_1_55ABB4F0EAFC69F1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF309E0)
#define CLASS_1_55ABB4F0EAFC69F1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF30C00)
#define CLASS_1_55ABB4F0EAFC69F1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF30BD0)
#define CLASS_1_55ABB4F0EAFC69F1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF30D00)
#define CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF315D0)
#define CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF31530)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF30A10)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1DF30B20)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1DF30B80)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1DF30A40)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1DF30B10)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1DF30B70)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1DF30A30)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1DF30A90)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF30870)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF30A20)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1DF30AA0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DF30B00)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DF30AF0)
#define CLASS_1_55ABB4F0EAFC69F1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF308A0)
#define CLASS_1_55ABB4F0EAFC69F1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF30FB0)
#define CLASS_1_55ABB4F0EAFC69F1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF31010)
#define CLASS_1_55ABB4F0EAFC69F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF31790)
#define CLASS_1_55ABB4F0EAFC69F1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF30920)
#define CLASS_1_55ABB4F0EAFC69F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF308B0)

inline static constexpr unsigned int Class_1_55ABB4F0EAFC69F1_TypeDefinitionIndex = 29189;

class Class_1_55ABB4F0EAFC69F1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55ABB4F0EAFC69F1_TypeDefinitionIndex)->GetStaticField(0x44120);
	}
	// static const ::System::Int32 AINHNOCEBJG = 0xB; // 0x0
	// static const ::System::Int32 OLMIFJKILJG = 0xA; // 0x0
	// static const ::System::Int32 DKLMHECNOEM = 0xE; // 0x0
	// static const ::System::Int32 GJMDBBDBAKP = 0x9; // 0x0
	// static const ::System::Int32 OFFFGAFMBED = 0x4; // 0x0
	// static const ::System::Int32 MFPBLMHBJDB = 0x2; // 0x0
	::System::String* IOGCODPGEEA; // 0x10
	::System::String* OAJGABFBJGD; // 0x18
	::System::String* NMFBFEHFMNG; // 0x20
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
	::Google::Protobuf::ByteString* AJAENCOMBNL; // 0x30
	::System::Boolean OAFOFEMLGHI; // 0x38
	::System::UInt32 AEKECGJLGEF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_55ABB4F0EAFC69F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55ABB4F0EAFC69F1*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_55ABB4F0EAFC69F1* Clone()
	{
		return ((::Class_1_55ABB4F0EAFC69F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_55ABB4F0EAFC69F1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_55ABB4F0EAFC69F1*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_55ABB4F0EAFC69F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55ABB4F0EAFC69F1*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
