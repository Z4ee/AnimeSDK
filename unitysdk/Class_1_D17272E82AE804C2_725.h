#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_725_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A731BB0)
#define CLASS_1_D17272E82AE804C2_725_CLONE_OFFSET UNITYSDK_OFFSET(0x1A731940)
#define CLASS_1_D17272E82AE804C2_725_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A731A70)
#define CLASS_1_D17272E82AE804C2_725_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7319D0)
#define CLASS_1_D17272E82AE804C2_725_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A731AC0)
#define CLASS_1_D17272E82AE804C2_725_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A731C70)
#define CLASS_1_D17272E82AE804C2_725_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A731C40)
#define CLASS_1_D17272E82AE804C2_725_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7319B0)
#define CLASS_1_D17272E82AE804C2_725_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A731890)
#define CLASS_1_D17272E82AE804C2_725_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7319C0)
#define CLASS_1_D17272E82AE804C2_725_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7318F0)
#define CLASS_1_D17272E82AE804C2_725_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A731AF0)
#define CLASS_1_D17272E82AE804C2_725_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A731B50)
#define CLASS_1_D17272E82AE804C2_725__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A731DD0)
#define CLASS_1_D17272E82AE804C2_725__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A731910)
#define CLASS_1_D17272E82AE804C2_725__CTOR_OFFSET UNITYSDK_OFFSET(0x1A731900)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_725_TypeDefinitionIndex = 30001;

class Class_1_D17272E82AE804C2_725 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_725*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_725*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_725_TypeDefinitionIndex)->GetStaticField(0x3E2F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_725*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_725*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_725*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_725* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_725*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_725* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_725*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_725*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_725_MERGEFROM_1_OFFSET))(this, a1);
	}
};
