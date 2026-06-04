#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F0825ADB8AC159C8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3AB9C0)
#define CLASS_1_F0825ADB8AC159C8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3AB500)
#define CLASS_1_F0825ADB8AC159C8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3AB630)
#define CLASS_1_F0825ADB8AC159C8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3AB600)
#define CLASS_1_F0825ADB8AC159C8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3AB760)
#define CLASS_1_F0825ADB8AC159C8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3ABBD0)
#define CLASS_1_F0825ADB8AC159C8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3ABB70)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A3AB5C0)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A3AB570)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A3AB560)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A3AB460)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A3AB5D0)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A3AB5F0)
#define CLASS_1_F0825ADB8AC159C8_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A3AB5E0)
#define CLASS_1_F0825ADB8AC159C8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3AB490)
#define CLASS_1_F0825ADB8AC159C8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3AB890)
#define CLASS_1_F0825ADB8AC159C8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3AB8F0)
#define CLASS_1_F0825ADB8AC159C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3ABE10)
#define CLASS_1_F0825ADB8AC159C8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3AB4B0)
#define CLASS_1_F0825ADB8AC159C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AB4A0)

inline static constexpr unsigned int Class_1_F0825ADB8AC159C8_TypeDefinitionIndex = 24044;

class Class_1_F0825ADB8AC159C8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F0825ADB8AC159C8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F0825ADB8AC159C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0825ADB8AC159C8_TypeDefinitionIndex)->GetStaticField(0x4FA10);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Double Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F0825ADB8AC159C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0825ADB8AC159C8*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F0825ADB8AC159C8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F0825ADB8AC159C8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F0825ADB8AC159C8* Clone()
	{
		return ((::Class_1_F0825ADB8AC159C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F0825ADB8AC159C8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F0825ADB8AC159C8*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F0825ADB8AC159C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0825ADB8AC159C8*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F0825ADB8AC159C8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
