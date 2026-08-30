#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_443_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D8930A0)
#define CLASS_1_D17272E82AE804C2_443_CLONE_OFFSET UNITYSDK_OFFSET(0x1D892CB0)
#define CLASS_1_D17272E82AE804C2_443_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D892E10)
#define CLASS_1_D17272E82AE804C2_443_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D892D90)
#define CLASS_1_D17272E82AE804C2_443_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D892EE0)
#define CLASS_1_D17272E82AE804C2_443_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D893280)
#define CLASS_1_D17272E82AE804C2_443_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D893230)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D892D50)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1D892D70)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D892D30)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D892BF0)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D892D60)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1D892D80)
#define CLASS_1_D17272E82AE804C2_443_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D892D40)
#define CLASS_1_D17272E82AE804C2_443_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D892C50)
#define CLASS_1_D17272E82AE804C2_443_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D892F10)
#define CLASS_1_D17272E82AE804C2_443_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D892F70)
#define CLASS_1_D17272E82AE804C2_443__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D893420)
#define CLASS_1_D17272E82AE804C2_443__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D892C70)
#define CLASS_1_D17272E82AE804C2_443__CTOR_OFFSET UNITYSDK_OFFSET(0x1D892C60)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_443_TypeDefinitionIndex = 28716;

class Class_1_D17272E82AE804C2_443 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_443*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_443*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_443_TypeDefinitionIndex)->GetStaticField(0x2BC50);
	}
	// static const ::System::Int32 AAMHLJCBKDH = 0xA; // 0x0
	// static const ::System::Int32 BAOFAODIGHB = 0xB; // 0x0
	// static const ::System::Int32 JJDOFLLPDJE = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NPFBAFODCBI; // 0x18
	::System::UInt32 AMAMKHGJNAG; // 0x1C
	::System::UInt32 OAEGCDLJABE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_443*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_443*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_443*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_443* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_443*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_443* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_443*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_443*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_443_MERGEFROM_1_OFFSET))(this, a1);
	}
};
