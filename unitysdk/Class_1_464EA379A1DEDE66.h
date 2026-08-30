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

#define CLASS_1_464EA379A1DEDE66_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E082140)
#define CLASS_1_464EA379A1DEDE66_CLONE_OFFSET UNITYSDK_OFFSET(0x1E081B30)
#define CLASS_1_464EA379A1DEDE66_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E081C10)
#define CLASS_1_464EA379A1DEDE66_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E081BE0)
#define CLASS_1_464EA379A1DEDE66_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E081CC0)
#define CLASS_1_464EA379A1DEDE66_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0822F0)
#define CLASS_1_464EA379A1DEDE66_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E082270)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E081BC0)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E081B70)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E081B60)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E081960)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E081BD0)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E081BB0)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E081B90)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E081BA0)
#define CLASS_1_464EA379A1DEDE66_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E081B80)
#define CLASS_1_464EA379A1DEDE66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E081990)
#define CLASS_1_464EA379A1DEDE66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E081E90)
#define CLASS_1_464EA379A1DEDE66_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E081EF0)
#define CLASS_1_464EA379A1DEDE66__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E082460)
#define CLASS_1_464EA379A1DEDE66__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E081A30)
#define CLASS_1_464EA379A1DEDE66__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0819A0)

inline static constexpr unsigned int Class_1_464EA379A1DEDE66_TypeDefinitionIndex = 28504;

class Class_1_464EA379A1DEDE66 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_464EA379A1DEDE66*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_464EA379A1DEDE66*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_464EA379A1DEDE66_TypeDefinitionIndex)->GetStaticField(0x10060);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AJHGDHBFKIJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_464EA379A1DEDE66_TypeDefinitionIndex)->GetStaticField(0x10068);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EKNMGOBDIFK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_464EA379A1DEDE66_TypeDefinitionIndex)->GetStaticField(0x10070);
	}
	// static const ::System::Int32 NJJMDGKLLKP = 0x1; // 0x0
	// static const ::System::Int32 PCNLLMKOCEI = 0xA; // 0x0
	// static const ::System::Int32 PFIMCKBLNIA = 0x6; // 0x0
	// static const ::System::Int32 FCBMJFLBHGF = 0x3; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NEHBJPHEIDJ; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBEPKBINGBO; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::Boolean FIOIMDDJMOI; // 0x28
	::System::Boolean BBAJCDIHHBG; // 0x29
	::System::UInt32 NAEACGPKNNH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_464EA379A1DEDE66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_464EA379A1DEDE66*))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_464EA379A1DEDE66*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_464EA379A1DEDE66*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_464EA379A1DEDE66* Clone()
	{
		return ((::Class_1_464EA379A1DEDE66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_464EA379A1DEDE66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_464EA379A1DEDE66*))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_464EA379A1DEDE66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_464EA379A1DEDE66*))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_464EA379A1DEDE66_MERGEFROM_1_OFFSET))(this, a1);
	}
};
