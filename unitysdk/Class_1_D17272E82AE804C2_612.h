#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_612_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198715F0)
#define CLASS_1_D17272E82AE804C2_612_CLONE_OFFSET UNITYSDK_OFFSET(0x19871380)
#define CLASS_1_D17272E82AE804C2_612_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198714B0)
#define CLASS_1_D17272E82AE804C2_612_EQUALS_OFFSET UNITYSDK_OFFSET(0x19871410)
#define CLASS_1_D17272E82AE804C2_612_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19871500)
#define CLASS_1_D17272E82AE804C2_612_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198716B0)
#define CLASS_1_D17272E82AE804C2_612_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19871680)
#define CLASS_1_D17272E82AE804C2_612_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x198713F0)
#define CLASS_1_D17272E82AE804C2_612_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x198712D0)
#define CLASS_1_D17272E82AE804C2_612_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19871400)
#define CLASS_1_D17272E82AE804C2_612_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19871330)
#define CLASS_1_D17272E82AE804C2_612_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19871530)
#define CLASS_1_D17272E82AE804C2_612_WRITETO_OFFSET UNITYSDK_OFFSET(0x19871590)
#define CLASS_1_D17272E82AE804C2_612__CCTOR_OFFSET UNITYSDK_OFFSET(0x19871720)
#define CLASS_1_D17272E82AE804C2_612__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19871350)
#define CLASS_1_D17272E82AE804C2_612__CTOR_OFFSET UNITYSDK_OFFSET(0x19871340)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_612_TypeDefinitionIndex = 29307;

class Class_1_D17272E82AE804C2_612 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_612*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_612*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_612_TypeDefinitionIndex)->GetStaticField(0x4A930);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_612* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_612*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_612*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_612*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_612* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_612*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_612* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_612*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_612* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_612*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_612_MERGEFROM_1_OFFSET))(this, a1);
	}
};
