#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_776_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19666320)
#define CLASS_1_D17272E82AE804C2_776_CLONE_OFFSET UNITYSDK_OFFSET(0x196660B0)
#define CLASS_1_D17272E82AE804C2_776_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196661E0)
#define CLASS_1_D17272E82AE804C2_776_EQUALS_OFFSET UNITYSDK_OFFSET(0x19666140)
#define CLASS_1_D17272E82AE804C2_776_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19666230)
#define CLASS_1_D17272E82AE804C2_776_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196663E0)
#define CLASS_1_D17272E82AE804C2_776_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196663B0)
#define CLASS_1_D17272E82AE804C2_776_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19666120)
#define CLASS_1_D17272E82AE804C2_776_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19666000)
#define CLASS_1_D17272E82AE804C2_776_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19666130)
#define CLASS_1_D17272E82AE804C2_776_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19666060)
#define CLASS_1_D17272E82AE804C2_776_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19666260)
#define CLASS_1_D17272E82AE804C2_776_WRITETO_OFFSET UNITYSDK_OFFSET(0x196662C0)
#define CLASS_1_D17272E82AE804C2_776__CCTOR_OFFSET UNITYSDK_OFFSET(0x19666450)
#define CLASS_1_D17272E82AE804C2_776__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19666080)
#define CLASS_1_D17272E82AE804C2_776__CTOR_OFFSET UNITYSDK_OFFSET(0x19666070)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_776_TypeDefinitionIndex = 30916;

class Class_1_D17272E82AE804C2_776 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_776*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_776*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_776_TypeDefinitionIndex)->GetStaticField(0x7F40);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_776* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_776*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_776*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_776*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_776* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_776*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_776* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_776*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_776* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_776*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_776_MERGEFROM_1_OFFSET))(this, a1);
	}
};
