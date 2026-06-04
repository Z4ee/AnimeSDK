#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_724_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9A8DF0)
#define CLASS_1_D17272E82AE804C2_724_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9A8B80)
#define CLASS_1_D17272E82AE804C2_724_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9A8CB0)
#define CLASS_1_D17272E82AE804C2_724_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9A8C10)
#define CLASS_1_D17272E82AE804C2_724_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9A8D00)
#define CLASS_1_D17272E82AE804C2_724_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9A8EB0)
#define CLASS_1_D17272E82AE804C2_724_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9A8E80)
#define CLASS_1_D17272E82AE804C2_724_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A9A8BF0)
#define CLASS_1_D17272E82AE804C2_724_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A9A8AD0)
#define CLASS_1_D17272E82AE804C2_724_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A9A8C00)
#define CLASS_1_D17272E82AE804C2_724_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9A8B30)
#define CLASS_1_D17272E82AE804C2_724_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9A8D30)
#define CLASS_1_D17272E82AE804C2_724_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9A8D90)
#define CLASS_1_D17272E82AE804C2_724__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9A9010)
#define CLASS_1_D17272E82AE804C2_724__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9A8B50)
#define CLASS_1_D17272E82AE804C2_724__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A8B40)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_724_TypeDefinitionIndex = 29993;

class Class_1_D17272E82AE804C2_724 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_724*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_724*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_724_TypeDefinitionIndex)->GetStaticField(0x66BD0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_724* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_724*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_724*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_724*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_724* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_724*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_724* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_724*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_724* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_724*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_724_MERGEFROM_1_OFFSET))(this, a1);
	}
};
