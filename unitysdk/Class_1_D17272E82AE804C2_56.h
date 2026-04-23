#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_56_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x199974B0)
#define CLASS_1_D17272E82AE804C2_56_CLONE_OFFSET UNITYSDK_OFFSET(0x19997240)
#define CLASS_1_D17272E82AE804C2_56_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19997370)
#define CLASS_1_D17272E82AE804C2_56_EQUALS_OFFSET UNITYSDK_OFFSET(0x199972D0)
#define CLASS_1_D17272E82AE804C2_56_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199973C0)
#define CLASS_1_D17272E82AE804C2_56_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19997570)
#define CLASS_1_D17272E82AE804C2_56_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19997540)
#define CLASS_1_D17272E82AE804C2_56_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x199972B0)
#define CLASS_1_D17272E82AE804C2_56_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19997190)
#define CLASS_1_D17272E82AE804C2_56_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x199972C0)
#define CLASS_1_D17272E82AE804C2_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199971F0)
#define CLASS_1_D17272E82AE804C2_56_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199973F0)
#define CLASS_1_D17272E82AE804C2_56_WRITETO_OFFSET UNITYSDK_OFFSET(0x19997450)
#define CLASS_1_D17272E82AE804C2_56__CCTOR_OFFSET UNITYSDK_OFFSET(0x199975E0)
#define CLASS_1_D17272E82AE804C2_56__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19997210)
#define CLASS_1_D17272E82AE804C2_56__CTOR_OFFSET UNITYSDK_OFFSET(0x19997200)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_56_TypeDefinitionIndex = 24650;

class Class_1_D17272E82AE804C2_56 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_56*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_56_TypeDefinitionIndex)->GetStaticField(0x640C0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_56*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_56*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_56*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_56* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_56* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_56*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_56*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_56_MERGEFROM_1_OFFSET))(this, a1);
	}
};
