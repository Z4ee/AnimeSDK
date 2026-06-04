#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_379_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A13FED0)
#define CLASS_1_D17272E82AE804C2_379_CLONE_OFFSET UNITYSDK_OFFSET(0x1A13FC10)
#define CLASS_1_D17272E82AE804C2_379_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A13FD60)
#define CLASS_1_D17272E82AE804C2_379_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A13FCC0)
#define CLASS_1_D17272E82AE804C2_379_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A13FDC0)
#define CLASS_1_D17272E82AE804C2_379_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A140020)
#define CLASS_1_D17272E82AE804C2_379_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A13FFE0)
#define CLASS_1_D17272E82AE804C2_379_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A13FCA0)
#define CLASS_1_D17272E82AE804C2_379_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A13FC80)
#define CLASS_1_D17272E82AE804C2_379_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A13FB60)
#define CLASS_1_D17272E82AE804C2_379_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A13FCB0)
#define CLASS_1_D17272E82AE804C2_379_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A13FC90)
#define CLASS_1_D17272E82AE804C2_379_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A13FBC0)
#define CLASS_1_D17272E82AE804C2_379_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A13FDF0)
#define CLASS_1_D17272E82AE804C2_379_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A13FE50)
#define CLASS_1_D17272E82AE804C2_379__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1401A0)
#define CLASS_1_D17272E82AE804C2_379__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A13FBE0)
#define CLASS_1_D17272E82AE804C2_379__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13FBD0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_379_TypeDefinitionIndex = 27446;

class Class_1_D17272E82AE804C2_379 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_379*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_379*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_379_TypeDefinitionIndex)->GetStaticField(0x59C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_379* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_379*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_379*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_379*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_379* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_379*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_379* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_379*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_379* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_379*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_379_MERGEFROM_1_OFFSET))(this, a1);
	}
};
