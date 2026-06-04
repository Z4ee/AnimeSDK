#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_565_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0C9890)
#define CLASS_1_D17272E82AE804C2_565_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0C95D0)
#define CLASS_1_D17272E82AE804C2_565_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0C9720)
#define CLASS_1_D17272E82AE804C2_565_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0C9680)
#define CLASS_1_D17272E82AE804C2_565_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0C9780)
#define CLASS_1_D17272E82AE804C2_565_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0C99E0)
#define CLASS_1_D17272E82AE804C2_565_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0C99A0)
#define CLASS_1_D17272E82AE804C2_565_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A0C9660)
#define CLASS_1_D17272E82AE804C2_565_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A0C9640)
#define CLASS_1_D17272E82AE804C2_565_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A0C9520)
#define CLASS_1_D17272E82AE804C2_565_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A0C9670)
#define CLASS_1_D17272E82AE804C2_565_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A0C9650)
#define CLASS_1_D17272E82AE804C2_565_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0C9580)
#define CLASS_1_D17272E82AE804C2_565_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0C97B0)
#define CLASS_1_D17272E82AE804C2_565_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0C9810)
#define CLASS_1_D17272E82AE804C2_565__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0C9B60)
#define CLASS_1_D17272E82AE804C2_565__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0C95A0)
#define CLASS_1_D17272E82AE804C2_565__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C9590)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_565_TypeDefinitionIndex = 28828;

class Class_1_D17272E82AE804C2_565 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_565*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_565*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_565_TypeDefinitionIndex)->GetStaticField(0x3E0D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_565* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_565*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_565*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_565*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_565* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_565*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_565* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_565*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_565* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_565*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_565_MERGEFROM_1_OFFSET))(this, a1);
	}
};
