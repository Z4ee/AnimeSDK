#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_311_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A524590)
#define CLASS_1_D17272E82AE804C2_311_CLONE_OFFSET UNITYSDK_OFFSET(0x1A524320)
#define CLASS_1_D17272E82AE804C2_311_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A524420)
#define CLASS_1_D17272E82AE804C2_311_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5243B0)
#define CLASS_1_D17272E82AE804C2_311_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A524480)
#define CLASS_1_D17272E82AE804C2_311_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5246E0)
#define CLASS_1_D17272E82AE804C2_311_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5246A0)
#define CLASS_1_D17272E82AE804C2_311_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A524390)
#define CLASS_1_D17272E82AE804C2_311_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A524370)
#define CLASS_1_D17272E82AE804C2_311_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A5242A0)
#define CLASS_1_D17272E82AE804C2_311_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A5243A0)
#define CLASS_1_D17272E82AE804C2_311_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A524380)
#define CLASS_1_D17272E82AE804C2_311_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5242D0)
#define CLASS_1_D17272E82AE804C2_311_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5244B0)
#define CLASS_1_D17272E82AE804C2_311_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A524510)
#define CLASS_1_D17272E82AE804C2_311__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A524860)
#define CLASS_1_D17272E82AE804C2_311__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5242F0)
#define CLASS_1_D17272E82AE804C2_311__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5242E0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_311_TypeDefinitionIndex = 26721;

class Class_1_D17272E82AE804C2_311 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_311*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_311*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_311_TypeDefinitionIndex)->GetStaticField(0xE550);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_311* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_311*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_311*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_311*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_311* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_311* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_311*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_311* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_311*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_311_MERGEFROM_1_OFFSET))(this, a1);
	}
};
