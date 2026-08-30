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
namespace Proto { class StrongChallengeAvatar; }
namespace System { class String; }

#define CLASS_1_78AA95A99741BB29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB91800)
#define CLASS_1_78AA95A99741BB29_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB91330)
#define CLASS_1_78AA95A99741BB29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB913D0)
#define CLASS_1_78AA95A99741BB29_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB913A0)
#define CLASS_1_78AA95A99741BB29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB91520)
#define CLASS_1_78AA95A99741BB29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB91A20)
#define CLASS_1_78AA95A99741BB29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB91960)
#define CLASS_1_78AA95A99741BB29_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB91380)
#define CLASS_1_78AA95A99741BB29_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EB91360)
#define CLASS_1_78AA95A99741BB29_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB91130)
#define CLASS_1_78AA95A99741BB29_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB91390)
#define CLASS_1_78AA95A99741BB29_METHOD_1_D86324C54E2B5533_OFFSET UNITYSDK_OFFSET(0x1EB91370)
#define CLASS_1_78AA95A99741BB29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB91160)
#define CLASS_1_78AA95A99741BB29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB91660)
#define CLASS_1_78AA95A99741BB29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB916C0)
#define CLASS_1_78AA95A99741BB29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB91B70)
#define CLASS_1_78AA95A99741BB29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB91200)
#define CLASS_1_78AA95A99741BB29__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB91170)

inline static constexpr unsigned int Class_1_78AA95A99741BB29_TypeDefinitionIndex = 33610;

class Class_1_78AA95A99741BB29 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>** StaticGet_DDFODHOFBIP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78AA95A99741BB29_TypeDefinitionIndex)->GetStaticField(0x195A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_78AA95A99741BB29*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_78AA95A99741BB29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78AA95A99741BB29_TypeDefinitionIndex)->GetStaticField(0x195A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78AA95A99741BB29_TypeDefinitionIndex)->GetStaticField(0x195B0);
	}
	// static const ::System::Int32 CPBPPPJBFGH = 0x7; // 0x0
	// static const ::System::Int32 IMGDAOEBONP = 0xE; // 0x0
	// static const ::System::Int32 IEIFMNNMINA = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* CBFGBDBJHID; // 0x20
	::System::UInt32 HJEGLCJEOKC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_78AA95A99741BB29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78AA95A99741BB29*))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_78AA95A99741BB29*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_78AA95A99741BB29*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_78AA95A99741BB29* Clone()
	{
		return ((::Class_1_78AA95A99741BB29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* Method_1_D86324C54E2B5533()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_METHOD_1_D86324C54E2B5533_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_78AA95A99741BB29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_78AA95A99741BB29*))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_78AA95A99741BB29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78AA95A99741BB29*))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_78AA95A99741BB29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
