#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DB9981955AB2768_1_Enum_3_2E741879C8CDBAFC_11.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_375;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5DB9981955AB2768_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9A0A00)
#define CLASS_1_5DB9981955AB2768_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9A0620)
#define CLASS_1_5DB9981955AB2768_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9A06F0)
#define CLASS_1_5DB9981955AB2768_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9A0690)
#define CLASS_1_5DB9981955AB2768_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9A0860)
#define CLASS_1_5DB9981955AB2768_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9A0C20)
#define CLASS_1_5DB9981955AB2768_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9A0AA0)
#define CLASS_1_5DB9981955AB2768_1_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1A9A0670)
#define CLASS_1_5DB9981955AB2768_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A9A0440)
#define CLASS_1_5DB9981955AB2768_1_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1A9A05A0)
#define CLASS_1_5DB9981955AB2768_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A9A0680)
#define CLASS_1_5DB9981955AB2768_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A9A0600)
#define CLASS_1_5DB9981955AB2768_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9A04A0)
#define CLASS_1_5DB9981955AB2768_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9A0900)
#define CLASS_1_5DB9981955AB2768_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9A0960)
#define CLASS_1_5DB9981955AB2768_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9A0E60)
#define CLASS_1_5DB9981955AB2768_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9A04C0)
#define CLASS_1_5DB9981955AB2768_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A04B0)

inline static constexpr unsigned int Class_1_5DB9981955AB2768_1_TypeDefinitionIndex = 27434;

class Class_1_5DB9981955AB2768_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5DB9981955AB2768_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5DB9981955AB2768_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5DB9981955AB2768_1_TypeDefinitionIndex)->GetStaticField(0x45100);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Object* Field_1_3; // 0x18
	::Class_1_5DB9981955AB2768_1_Enum_3_2E741879C8CDBAFC_11 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5DB9981955AB2768_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DB9981955AB2768_1*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5DB9981955AB2768_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5DB9981955AB2768_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5DB9981955AB2768_1* Clone()
	{
		return ((::Class_1_5DB9981955AB2768_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_375* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D17272E82AE804C2_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_375*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_5DB9981955AB2768_1_Enum_3_2E741879C8CDBAFC_11 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_5DB9981955AB2768_1_Enum_3_2E741879C8CDBAFC_11(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5DB9981955AB2768_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5DB9981955AB2768_1*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5DB9981955AB2768_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DB9981955AB2768_1*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5DB9981955AB2768_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
