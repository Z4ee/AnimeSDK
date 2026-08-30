#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_354_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F3520)
#define CLASS_1_D17272E82AE804C2_354_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F3100)
#define CLASS_1_D17272E82AE804C2_354_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F3290)
#define CLASS_1_D17272E82AE804C2_354_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F31B0)
#define CLASS_1_D17272E82AE804C2_354_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F3360)
#define CLASS_1_D17272E82AE804C2_354_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F3700)
#define CLASS_1_D17272E82AE804C2_354_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F36B0)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E0F3170)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E0F3190)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0F3150)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0F3070)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E0F3180)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E0F31A0)
#define CLASS_1_D17272E82AE804C2_354_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E0F3160)
#define CLASS_1_D17272E82AE804C2_354_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F30A0)
#define CLASS_1_D17272E82AE804C2_354_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F3390)
#define CLASS_1_D17272E82AE804C2_354_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F33F0)
#define CLASS_1_D17272E82AE804C2_354__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F38A0)
#define CLASS_1_D17272E82AE804C2_354__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F30C0)
#define CLASS_1_D17272E82AE804C2_354__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F30B0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_354_TypeDefinitionIndex = 27930;

class Class_1_D17272E82AE804C2_354 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_354*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_354*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_354_TypeDefinitionIndex)->GetStaticField(0x15B70);
	}
	// static const ::System::Int32 MLCKHDFEDAA = 0x4; // 0x0
	// static const ::System::Int32 MJKHJDCILPC = 0xE; // 0x0
	// static const ::System::Int32 LCICMEPLFGE = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 IBNEONDCEIM; // 0x18
	::System::UInt32 HLNJPHLMEPF; // 0x1C
	::System::UInt32 FKHIFCDFCKJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_354* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_354*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_354*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_354*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_354* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_354*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_354* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_354*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_354* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_354*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_354_MERGEFROM_1_OFFSET))(this, a1);
	}
};
