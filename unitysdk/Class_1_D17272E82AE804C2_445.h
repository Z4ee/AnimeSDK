#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_445_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7B6D0)
#define CLASS_1_D17272E82AE804C2_445_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7B320)
#define CLASS_1_D17272E82AE804C2_445_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7B450)
#define CLASS_1_D17272E82AE804C2_445_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7B380)
#define CLASS_1_D17272E82AE804C2_445_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7B5C0)
#define CLASS_1_D17272E82AE804C2_445_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7B790)
#define CLASS_1_D17272E82AE804C2_445_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7B760)
#define CLASS_1_D17272E82AE804C2_445_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF7B360)
#define CLASS_1_D17272E82AE804C2_445_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF7B2A0)
#define CLASS_1_D17272E82AE804C2_445_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF7B370)
#define CLASS_1_D17272E82AE804C2_445_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B2D0)
#define CLASS_1_D17272E82AE804C2_445_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7B5F0)
#define CLASS_1_D17272E82AE804C2_445_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7B650)
#define CLASS_1_D17272E82AE804C2_445__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B8F0)
#define CLASS_1_D17272E82AE804C2_445__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7B2F0)
#define CLASS_1_D17272E82AE804C2_445__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B2E0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_445_TypeDefinitionIndex = 29072;

class Class_1_D17272E82AE804C2_445 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_445*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_445*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_445_TypeDefinitionIndex)->GetStaticField(0x46780);
	}
	// static const ::System::Int32 AODKNNMBGAD = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 IBEBBFIHLLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_445* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_445*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_445*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_445*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_445* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_445*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_445* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_445*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_445* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_445*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_445_MERGEFROM_1_OFFSET))(this, a1);
	}
};
