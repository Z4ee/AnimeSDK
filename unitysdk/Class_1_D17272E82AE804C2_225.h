#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_225_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD7C760)
#define CLASS_1_D17272E82AE804C2_225_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD7C3A0)
#define CLASS_1_D17272E82AE804C2_225_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD7C510)
#define CLASS_1_D17272E82AE804C2_225_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD7C430)
#define CLASS_1_D17272E82AE804C2_225_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD7C5E0)
#define CLASS_1_D17272E82AE804C2_225_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD7C8E0)
#define CLASS_1_D17272E82AE804C2_225_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD7C8A0)
#define CLASS_1_D17272E82AE804C2_225_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD7C3F0)
#define CLASS_1_D17272E82AE804C2_225_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD7C320)
#define CLASS_1_D17272E82AE804C2_225_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD7C400)
#define CLASS_1_D17272E82AE804C2_225_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1CD7C420)
#define CLASS_1_D17272E82AE804C2_225_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CD7C410)
#define CLASS_1_D17272E82AE804C2_225_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C350)
#define CLASS_1_D17272E82AE804C2_225_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD7C610)
#define CLASS_1_D17272E82AE804C2_225_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD7C670)
#define CLASS_1_D17272E82AE804C2_225__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7CA60)
#define CLASS_1_D17272E82AE804C2_225__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD7C370)
#define CLASS_1_D17272E82AE804C2_225__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C360)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_225_TypeDefinitionIndex = 26225;

class Class_1_D17272E82AE804C2_225 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_225*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_225*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_225_TypeDefinitionIndex)->GetStaticField(0x2DCF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_225* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_225*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_225*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_225*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_225* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_225*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_225* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_225*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_225* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_225*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_225_MERGEFROM_1_OFFSET))(this, a1);
	}
};
