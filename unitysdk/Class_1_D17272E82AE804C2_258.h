#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_258_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A051ED0)
#define CLASS_1_D17272E82AE804C2_258_CLONE_OFFSET UNITYSDK_OFFSET(0x1A051C10)
#define CLASS_1_D17272E82AE804C2_258_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A051D60)
#define CLASS_1_D17272E82AE804C2_258_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A051CC0)
#define CLASS_1_D17272E82AE804C2_258_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A051DC0)
#define CLASS_1_D17272E82AE804C2_258_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A052020)
#define CLASS_1_D17272E82AE804C2_258_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A051FE0)
#define CLASS_1_D17272E82AE804C2_258_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A051CA0)
#define CLASS_1_D17272E82AE804C2_258_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A051C80)
#define CLASS_1_D17272E82AE804C2_258_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A051B60)
#define CLASS_1_D17272E82AE804C2_258_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A051CB0)
#define CLASS_1_D17272E82AE804C2_258_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A051C90)
#define CLASS_1_D17272E82AE804C2_258_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A051BC0)
#define CLASS_1_D17272E82AE804C2_258_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A051DF0)
#define CLASS_1_D17272E82AE804C2_258_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A051E50)
#define CLASS_1_D17272E82AE804C2_258__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0521A0)
#define CLASS_1_D17272E82AE804C2_258__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A051BE0)
#define CLASS_1_D17272E82AE804C2_258__CTOR_OFFSET UNITYSDK_OFFSET(0x1A051BD0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_258_TypeDefinitionIndex = 26264;

class Class_1_D17272E82AE804C2_258 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_258*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_258*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_258_TypeDefinitionIndex)->GetStaticField(0x2E6B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_258* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_258*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_258*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_258*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_258* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_258*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_258* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_258*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_258* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_258*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_258_MERGEFROM_1_OFFSET))(this, a1);
	}
};
