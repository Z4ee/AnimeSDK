#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_245_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E163070)
#define CLASS_1_D17272E82AE804C2_245_CLONE_OFFSET UNITYSDK_OFFSET(0x1E162C70)
#define CLASS_1_D17272E82AE804C2_245_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E162E30)
#define CLASS_1_D17272E82AE804C2_245_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E162D20)
#define CLASS_1_D17272E82AE804C2_245_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E162F00)
#define CLASS_1_D17272E82AE804C2_245_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1631C0)
#define CLASS_1_D17272E82AE804C2_245_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E163180)
#define CLASS_1_D17272E82AE804C2_245_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E162D00)
#define CLASS_1_D17272E82AE804C2_245_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E162CE0)
#define CLASS_1_D17272E82AE804C2_245_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E162BC0)
#define CLASS_1_D17272E82AE804C2_245_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E162D10)
#define CLASS_1_D17272E82AE804C2_245_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E162CF0)
#define CLASS_1_D17272E82AE804C2_245_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E162C20)
#define CLASS_1_D17272E82AE804C2_245_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E162F30)
#define CLASS_1_D17272E82AE804C2_245_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E162F90)
#define CLASS_1_D17272E82AE804C2_245__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E163340)
#define CLASS_1_D17272E82AE804C2_245__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E162C40)
#define CLASS_1_D17272E82AE804C2_245__CTOR_OFFSET UNITYSDK_OFFSET(0x1E162C30)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_245_TypeDefinitionIndex = 27282;

class Class_1_D17272E82AE804C2_245 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_245*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_245*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_245_TypeDefinitionIndex)->GetStaticField(0x2BFB0);
	}
	// static const ::System::Int32 CLEGELBFILH = 0x5; // 0x0
	// static const ::System::Int32 BPLJLIMECGH = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 OEPOBIODAJH; // 0x18
	::System::UInt32 OGOHJFENJOA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_245* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_245*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_245*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_245*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_245* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_245*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_245* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_245*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_245* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_245*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_245_MERGEFROM_1_OFFSET))(this, a1);
	}
};
