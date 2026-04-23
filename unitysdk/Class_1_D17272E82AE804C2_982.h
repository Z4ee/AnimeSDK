#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_982_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195623C0)
#define CLASS_1_D17272E82AE804C2_982_CLONE_OFFSET UNITYSDK_OFFSET(0x19562100)
#define CLASS_1_D17272E82AE804C2_982_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19562250)
#define CLASS_1_D17272E82AE804C2_982_EQUALS_OFFSET UNITYSDK_OFFSET(0x195621B0)
#define CLASS_1_D17272E82AE804C2_982_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195622B0)
#define CLASS_1_D17272E82AE804C2_982_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19562510)
#define CLASS_1_D17272E82AE804C2_982_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195624D0)
#define CLASS_1_D17272E82AE804C2_982_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19562190)
#define CLASS_1_D17272E82AE804C2_982_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19562170)
#define CLASS_1_D17272E82AE804C2_982_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19562050)
#define CLASS_1_D17272E82AE804C2_982_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x195621A0)
#define CLASS_1_D17272E82AE804C2_982_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19562180)
#define CLASS_1_D17272E82AE804C2_982_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195620B0)
#define CLASS_1_D17272E82AE804C2_982_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195622E0)
#define CLASS_1_D17272E82AE804C2_982_WRITETO_OFFSET UNITYSDK_OFFSET(0x19562340)
#define CLASS_1_D17272E82AE804C2_982__CCTOR_OFFSET UNITYSDK_OFFSET(0x19562590)
#define CLASS_1_D17272E82AE804C2_982__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195620D0)
#define CLASS_1_D17272E82AE804C2_982__CTOR_OFFSET UNITYSDK_OFFSET(0x195620C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_982_TypeDefinitionIndex = 32930;

class Class_1_D17272E82AE804C2_982 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_982*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_982*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_982_TypeDefinitionIndex)->GetStaticField(0x4CF70);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_982* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_982*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_982*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_982*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_982* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_982*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_982* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_982*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_982* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_982*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_982_MERGEFROM_1_OFFSET))(this, a1);
	}
};
