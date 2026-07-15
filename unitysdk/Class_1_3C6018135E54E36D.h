#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3C6018135E54E36D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF6F350)
#define CLASS_1_3C6018135E54E36D_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF6ED20)
#define CLASS_1_3C6018135E54E36D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF6EE30)
#define CLASS_1_3C6018135E54E36D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF6EE00)
#define CLASS_1_3C6018135E54E36D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF6F050)
#define CLASS_1_3C6018135E54E36D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF6F430)
#define CLASS_1_3C6018135E54E36D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF6F3D0)
#define CLASS_1_3C6018135E54E36D_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CF6ED90)
#define CLASS_1_3C6018135E54E36D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CF6ED80)
#define CLASS_1_3C6018135E54E36D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF6EC80)
#define CLASS_1_3C6018135E54E36D_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1CF6EDF0)
#define CLASS_1_3C6018135E54E36D_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1CF6EDE0)
#define CLASS_1_3C6018135E54E36D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF6ECB0)
#define CLASS_1_3C6018135E54E36D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF6F1F0)
#define CLASS_1_3C6018135E54E36D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF6F250)
#define CLASS_1_3C6018135E54E36D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF6F5E0)
#define CLASS_1_3C6018135E54E36D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF6ECD0)
#define CLASS_1_3C6018135E54E36D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6ECC0)

inline static constexpr unsigned int Class_1_3C6018135E54E36D_TypeDefinitionIndex = 24525;

class Class_1_3C6018135E54E36D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C6018135E54E36D_TypeDefinitionIndex)->GetStaticField(0x23310);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::System::String* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::Double Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3C6018135E54E36D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C6018135E54E36D*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3C6018135E54E36D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3C6018135E54E36D* Clone()
	{
		return ((::Class_1_3C6018135E54E36D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3C6018135E54E36D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3C6018135E54E36D*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3C6018135E54E36D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C6018135E54E36D*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C6018135E54E36D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
