#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_878_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C460170)
#define CLASS_1_D17272E82AE804C2_878_CLONE_OFFSET UNITYSDK_OFFSET(0x1C45FD50)
#define CLASS_1_D17272E82AE804C2_878_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C45FEE0)
#define CLASS_1_D17272E82AE804C2_878_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C45FE00)
#define CLASS_1_D17272E82AE804C2_878_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C45FFB0)
#define CLASS_1_D17272E82AE804C2_878_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C460350)
#define CLASS_1_D17272E82AE804C2_878_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C460300)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C45FDC0)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C45FDE0)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C45FDA0)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C45FCC0)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C45FDD0)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C45FDF0)
#define CLASS_1_D17272E82AE804C2_878_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C45FDB0)
#define CLASS_1_D17272E82AE804C2_878_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C45FCF0)
#define CLASS_1_D17272E82AE804C2_878_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C45FFE0)
#define CLASS_1_D17272E82AE804C2_878_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C460040)
#define CLASS_1_D17272E82AE804C2_878__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C460500)
#define CLASS_1_D17272E82AE804C2_878__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C45FD10)
#define CLASS_1_D17272E82AE804C2_878__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45FD00)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_878_TypeDefinitionIndex = 31011;

class Class_1_D17272E82AE804C2_878 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_878*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_878*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_878_TypeDefinitionIndex)->GetStaticField(0xF500);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_878* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_878*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_878*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_878*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_878* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_878*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_878* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_878*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_878* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_878*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_878_MERGEFROM_1_OFFSET))(this, a1);
	}
};
