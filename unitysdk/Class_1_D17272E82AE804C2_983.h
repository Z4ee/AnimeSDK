#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_983_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB2C8F0)
#define CLASS_1_D17272E82AE804C2_983_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB2C4D0)
#define CLASS_1_D17272E82AE804C2_983_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB2C660)
#define CLASS_1_D17272E82AE804C2_983_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB2C580)
#define CLASS_1_D17272E82AE804C2_983_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB2C730)
#define CLASS_1_D17272E82AE804C2_983_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB2CAD0)
#define CLASS_1_D17272E82AE804C2_983_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB2CA80)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EB2C540)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1EB2C560)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB2C520)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB2C440)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EB2C550)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1EB2C570)
#define CLASS_1_D17272E82AE804C2_983_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB2C530)
#define CLASS_1_D17272E82AE804C2_983_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB2C470)
#define CLASS_1_D17272E82AE804C2_983_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB2C760)
#define CLASS_1_D17272E82AE804C2_983_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB2C7C0)
#define CLASS_1_D17272E82AE804C2_983__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CC70)
#define CLASS_1_D17272E82AE804C2_983__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB2C490)
#define CLASS_1_D17272E82AE804C2_983__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2C480)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_983_TypeDefinitionIndex = 32484;

class Class_1_D17272E82AE804C2_983 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_983*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_983*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_983_TypeDefinitionIndex)->GetStaticField(0x43E60);
	}
	// static const ::System::Int32 JJDOFLLPDJE = 0xA; // 0x0
	// static const ::System::Int32 DAGFCNOELJC = 0x8; // 0x0
	// static const ::System::Int32 LECDPNEBBOF = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 KEKBGJDHFPJ; // 0x18
	::System::UInt32 FMPAACGCABH; // 0x1C
	::System::UInt32 NPFBAFODCBI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_983* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_983*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_983*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_983*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_983* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_983*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_983* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_983*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_983* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_983*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_983_MERGEFROM_1_OFFSET))(this, a1);
	}
};
