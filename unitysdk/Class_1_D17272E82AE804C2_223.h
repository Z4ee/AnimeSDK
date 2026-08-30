#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_223_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC05180)
#define CLASS_1_D17272E82AE804C2_223_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC04D80)
#define CLASS_1_D17272E82AE804C2_223_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC04F40)
#define CLASS_1_D17272E82AE804C2_223_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC04E30)
#define CLASS_1_D17272E82AE804C2_223_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC05010)
#define CLASS_1_D17272E82AE804C2_223_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC052D0)
#define CLASS_1_D17272E82AE804C2_223_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC05290)
#define CLASS_1_D17272E82AE804C2_223_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EC04E10)
#define CLASS_1_D17272E82AE804C2_223_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EC04DF0)
#define CLASS_1_D17272E82AE804C2_223_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EC04CD0)
#define CLASS_1_D17272E82AE804C2_223_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EC04E20)
#define CLASS_1_D17272E82AE804C2_223_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EC04E00)
#define CLASS_1_D17272E82AE804C2_223_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC04D30)
#define CLASS_1_D17272E82AE804C2_223_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC05040)
#define CLASS_1_D17272E82AE804C2_223_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC050A0)
#define CLASS_1_D17272E82AE804C2_223__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC05450)
#define CLASS_1_D17272E82AE804C2_223__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC04D50)
#define CLASS_1_D17272E82AE804C2_223__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC04D40)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_223_TypeDefinitionIndex = 26780;

class Class_1_D17272E82AE804C2_223 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_223*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_223*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_223_TypeDefinitionIndex)->GetStaticField(0x359B0);
	}
	// static const ::System::Int32 BPLJLIMECGH = 0x9; // 0x0
	// static const ::System::Int32 CLEGELBFILH = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 OEPOBIODAJH; // 0x18
	::System::UInt32 OGOHJFENJOA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_223* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_223*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_223*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_223*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_223* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_223*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_223* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_223*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_223* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_223*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_223_MERGEFROM_1_OFFSET))(this, a1);
	}
};
