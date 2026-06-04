#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_835_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A738140)
#define CLASS_1_D17272E82AE804C2_835_CLONE_OFFSET UNITYSDK_OFFSET(0x1A737F40)
#define CLASS_1_D17272E82AE804C2_835_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A738000)
#define CLASS_1_D17272E82AE804C2_835_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A737FA0)
#define CLASS_1_D17272E82AE804C2_835_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A738050)
#define CLASS_1_D17272E82AE804C2_835_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A738200)
#define CLASS_1_D17272E82AE804C2_835_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7381D0)
#define CLASS_1_D17272E82AE804C2_835_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A737F80)
#define CLASS_1_D17272E82AE804C2_835_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A737EC0)
#define CLASS_1_D17272E82AE804C2_835_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A737F90)
#define CLASS_1_D17272E82AE804C2_835_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A737EF0)
#define CLASS_1_D17272E82AE804C2_835_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A738080)
#define CLASS_1_D17272E82AE804C2_835_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7380E0)
#define CLASS_1_D17272E82AE804C2_835__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A738360)
#define CLASS_1_D17272E82AE804C2_835__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A737F10)
#define CLASS_1_D17272E82AE804C2_835__CTOR_OFFSET UNITYSDK_OFFSET(0x1A737F00)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_835_TypeDefinitionIndex = 31331;

class Class_1_D17272E82AE804C2_835 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_835*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_835*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_835_TypeDefinitionIndex)->GetStaticField(0x3EB90);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_835* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_835*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_835*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_835*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_835* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_835*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_835* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_835*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_835* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_835*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_835_MERGEFROM_1_OFFSET))(this, a1);
	}
};
