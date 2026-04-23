#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_606_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198564D0)
#define CLASS_1_D17272E82AE804C2_606_CLONE_OFFSET UNITYSDK_OFFSET(0x19856260)
#define CLASS_1_D17272E82AE804C2_606_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19856360)
#define CLASS_1_D17272E82AE804C2_606_EQUALS_OFFSET UNITYSDK_OFFSET(0x198562F0)
#define CLASS_1_D17272E82AE804C2_606_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198563C0)
#define CLASS_1_D17272E82AE804C2_606_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19856620)
#define CLASS_1_D17272E82AE804C2_606_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x198565E0)
#define CLASS_1_D17272E82AE804C2_606_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x198562D0)
#define CLASS_1_D17272E82AE804C2_606_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x198562B0)
#define CLASS_1_D17272E82AE804C2_606_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x198561E0)
#define CLASS_1_D17272E82AE804C2_606_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x198562E0)
#define CLASS_1_D17272E82AE804C2_606_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x198562C0)
#define CLASS_1_D17272E82AE804C2_606_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19856210)
#define CLASS_1_D17272E82AE804C2_606_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198563F0)
#define CLASS_1_D17272E82AE804C2_606_WRITETO_OFFSET UNITYSDK_OFFSET(0x19856450)
#define CLASS_1_D17272E82AE804C2_606__CCTOR_OFFSET UNITYSDK_OFFSET(0x198566A0)
#define CLASS_1_D17272E82AE804C2_606__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19856230)
#define CLASS_1_D17272E82AE804C2_606__CTOR_OFFSET UNITYSDK_OFFSET(0x19856220)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_606_TypeDefinitionIndex = 29265;

class Class_1_D17272E82AE804C2_606 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_606*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_606*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_606_TypeDefinitionIndex)->GetStaticField(0x47910);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_606* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_606*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_606*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_606*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_606* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_606*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_606* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_606*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_606* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_606*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_606_MERGEFROM_1_OFFSET))(this, a1);
	}
};
