#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ED6856438B6B4E0E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19384F30)
#define CLASS_1_ED6856438B6B4E0E_CLONE_OFFSET UNITYSDK_OFFSET(0x19384A80)
#define CLASS_1_ED6856438B6B4E0E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19384BE0)
#define CLASS_1_ED6856438B6B4E0E_EQUALS_OFFSET UNITYSDK_OFFSET(0x19384BB0)
#define CLASS_1_ED6856438B6B4E0E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19384D00)
#define CLASS_1_ED6856438B6B4E0E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193850F0)
#define CLASS_1_ED6856438B6B4E0E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19385050)
#define CLASS_1_ED6856438B6B4E0E_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19384AE0)
#define CLASS_1_ED6856438B6B4E0E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193849E0)
#define CLASS_1_ED6856438B6B4E0E_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x19384BA0)
#define CLASS_1_ED6856438B6B4E0E_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19384AF0)
#define CLASS_1_ED6856438B6B4E0E_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x19384B90)
#define CLASS_1_ED6856438B6B4E0E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19384A10)
#define CLASS_1_ED6856438B6B4E0E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19384E30)
#define CLASS_1_ED6856438B6B4E0E_WRITETO_OFFSET UNITYSDK_OFFSET(0x19384E90)
#define CLASS_1_ED6856438B6B4E0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x193851F0)
#define CLASS_1_ED6856438B6B4E0E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19384A30)
#define CLASS_1_ED6856438B6B4E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x19384A20)

inline static constexpr unsigned int Class_1_ED6856438B6B4E0E_TypeDefinitionIndex = 24179;

class Class_1_ED6856438B6B4E0E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ED6856438B6B4E0E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ED6856438B6B4E0E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED6856438B6B4E0E_TypeDefinitionIndex)->GetStaticField(0x8220);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Double Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ED6856438B6B4E0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED6856438B6B4E0E*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ED6856438B6B4E0E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ED6856438B6B4E0E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ED6856438B6B4E0E* Clone()
	{
		return ((::Class_1_ED6856438B6B4E0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ED6856438B6B4E0E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ED6856438B6B4E0E*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ED6856438B6B4E0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED6856438B6B4E0E*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED6856438B6B4E0E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
