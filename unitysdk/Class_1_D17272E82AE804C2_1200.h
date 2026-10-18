#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1200_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7770F0)
#define CLASS_1_D17272E82AE804C2_1200_CLONE_OFFSET UNITYSDK_OFFSET(0x1E776CD0)
#define CLASS_1_D17272E82AE804C2_1200_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E776E60)
#define CLASS_1_D17272E82AE804C2_1200_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E776D80)
#define CLASS_1_D17272E82AE804C2_1200_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E776F30)
#define CLASS_1_D17272E82AE804C2_1200_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7772D0)
#define CLASS_1_D17272E82AE804C2_1200_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E777280)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E776D40)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E776D60)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E776D20)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E776C40)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E776D50)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E776D70)
#define CLASS_1_D17272E82AE804C2_1200_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E776D30)
#define CLASS_1_D17272E82AE804C2_1200_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E776C70)
#define CLASS_1_D17272E82AE804C2_1200_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E776F60)
#define CLASS_1_D17272E82AE804C2_1200_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E776FC0)
#define CLASS_1_D17272E82AE804C2_1200__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E777470)
#define CLASS_1_D17272E82AE804C2_1200__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E776C90)
#define CLASS_1_D17272E82AE804C2_1200__CTOR_OFFSET UNITYSDK_OFFSET(0x1E776C80)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1200_TypeDefinitionIndex = 34836;

class Class_1_D17272E82AE804C2_1200 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1200*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1200*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1200_TypeDefinitionIndex)->GetStaticField(0x68B90);
	}
	// static const ::System::Int32 HBIJBPKKMNN = 0xE; // 0x0
	// static const ::System::Int32 AINHNOCEBJG = 0xB; // 0x0
	// static const ::System::Int32 EBDOFPJAANE = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 AEKECGJLGEF; // 0x18
	::System::UInt32 AOOAEAADNGO; // 0x1C
	::System::UInt32 MLCHFINKHHM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1200*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1200*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1200*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1200* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1200*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1200* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1200*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1200*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1200_MERGEFROM_1_OFFSET))(this, a1);
	}
};
