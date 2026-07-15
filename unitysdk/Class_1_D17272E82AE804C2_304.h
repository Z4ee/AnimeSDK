#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_304_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D04B060)
#define CLASS_1_D17272E82AE804C2_304_CLONE_OFFSET UNITYSDK_OFFSET(0x1D04AC50)
#define CLASS_1_D17272E82AE804C2_304_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D04ADE0)
#define CLASS_1_D17272E82AE804C2_304_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D04ACE0)
#define CLASS_1_D17272E82AE804C2_304_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D04AF50)
#define CLASS_1_D17272E82AE804C2_304_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D04B120)
#define CLASS_1_D17272E82AE804C2_304_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D04B0F0)
#define CLASS_1_D17272E82AE804C2_304_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D04ACC0)
#define CLASS_1_D17272E82AE804C2_304_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D04ABA0)
#define CLASS_1_D17272E82AE804C2_304_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D04ACD0)
#define CLASS_1_D17272E82AE804C2_304_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D04AC00)
#define CLASS_1_D17272E82AE804C2_304_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D04AF80)
#define CLASS_1_D17272E82AE804C2_304_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D04AFE0)
#define CLASS_1_D17272E82AE804C2_304__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D04B280)
#define CLASS_1_D17272E82AE804C2_304__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D04AC20)
#define CLASS_1_D17272E82AE804C2_304__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04AC10)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_304_TypeDefinitionIndex = 26917;

class Class_1_D17272E82AE804C2_304 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_304*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_304*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_304_TypeDefinitionIndex)->GetStaticField(0x4310);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_304*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_304*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_304*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_304* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_304*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_304* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_304*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_304*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_304_MERGEFROM_1_OFFSET))(this, a1);
	}
};
