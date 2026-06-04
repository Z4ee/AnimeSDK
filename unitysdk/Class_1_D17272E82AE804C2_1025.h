#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1025_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A22E190)
#define CLASS_1_D17272E82AE804C2_1025_CLONE_OFFSET UNITYSDK_OFFSET(0x1A22DF90)
#define CLASS_1_D17272E82AE804C2_1025_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A22E050)
#define CLASS_1_D17272E82AE804C2_1025_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A22DFF0)
#define CLASS_1_D17272E82AE804C2_1025_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A22E0A0)
#define CLASS_1_D17272E82AE804C2_1025_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A22E250)
#define CLASS_1_D17272E82AE804C2_1025_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A22E220)
#define CLASS_1_D17272E82AE804C2_1025_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A22DFD0)
#define CLASS_1_D17272E82AE804C2_1025_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A22DF10)
#define CLASS_1_D17272E82AE804C2_1025_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A22DFE0)
#define CLASS_1_D17272E82AE804C2_1025_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A22DF40)
#define CLASS_1_D17272E82AE804C2_1025_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A22E0D0)
#define CLASS_1_D17272E82AE804C2_1025_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A22E130)
#define CLASS_1_D17272E82AE804C2_1025__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A22E3B0)
#define CLASS_1_D17272E82AE804C2_1025__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A22DF60)
#define CLASS_1_D17272E82AE804C2_1025__CTOR_OFFSET UNITYSDK_OFFSET(0x1A22DF50)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1025_TypeDefinitionIndex = 33068;

class Class_1_D17272E82AE804C2_1025 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1025*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1025*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1025_TypeDefinitionIndex)->GetStaticField(0x3F020);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1025* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1025*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1025*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1025*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1025* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1025*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1025* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1025*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1025* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1025*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1025_MERGEFROM_1_OFFSET))(this, a1);
	}
};
