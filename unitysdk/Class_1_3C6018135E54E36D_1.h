#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3C6018135E54E36D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6FAE0)
#define CLASS_1_3C6018135E54E36D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB6F4B0)
#define CLASS_1_3C6018135E54E36D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6F5C0)
#define CLASS_1_3C6018135E54E36D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB6F590)
#define CLASS_1_3C6018135E54E36D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6F7E0)
#define CLASS_1_3C6018135E54E36D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6FBC0)
#define CLASS_1_3C6018135E54E36D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6FB60)
#define CLASS_1_3C6018135E54E36D_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1EB6F520)
#define CLASS_1_3C6018135E54E36D_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1EB6F510)
#define CLASS_1_3C6018135E54E36D_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB6F410)
#define CLASS_1_3C6018135E54E36D_1_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1EB6F580)
#define CLASS_1_3C6018135E54E36D_1_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1EB6F570)
#define CLASS_1_3C6018135E54E36D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F440)
#define CLASS_1_3C6018135E54E36D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6F980)
#define CLASS_1_3C6018135E54E36D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6F9E0)
#define CLASS_1_3C6018135E54E36D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6FD70)
#define CLASS_1_3C6018135E54E36D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB6F460)
#define CLASS_1_3C6018135E54E36D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F450)

inline static constexpr unsigned int Class_1_3C6018135E54E36D_1_TypeDefinitionIndex = 25220;

class Class_1_3C6018135E54E36D_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C6018135E54E36D_1_TypeDefinitionIndex)->GetStaticField(0x6510);
	}
	// static const ::System::Int32 AFBDHEMJEPP = 0x1; // 0x0
	// static const ::System::Int32 JLAAHBJNEML = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::String* PDKNJCIEBHA; // 0x18
	::System::Double DFKHBNCHKBI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3C6018135E54E36D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C6018135E54E36D_1*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3C6018135E54E36D_1* Clone()
	{
		return ((::Class_1_3C6018135E54E36D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3C6018135E54E36D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3C6018135E54E36D_1*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3C6018135E54E36D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C6018135E54E36D_1*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
