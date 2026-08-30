#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_837_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7A2A0)
#define CLASS_1_D17272E82AE804C2_837_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF79EF0)
#define CLASS_1_D17272E82AE804C2_837_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7A020)
#define CLASS_1_D17272E82AE804C2_837_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF79F50)
#define CLASS_1_D17272E82AE804C2_837_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7A190)
#define CLASS_1_D17272E82AE804C2_837_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7A360)
#define CLASS_1_D17272E82AE804C2_837_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7A330)
#define CLASS_1_D17272E82AE804C2_837_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF79F30)
#define CLASS_1_D17272E82AE804C2_837_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF79E70)
#define CLASS_1_D17272E82AE804C2_837_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF79F40)
#define CLASS_1_D17272E82AE804C2_837_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF79EA0)
#define CLASS_1_D17272E82AE804C2_837_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7A1C0)
#define CLASS_1_D17272E82AE804C2_837_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7A220)
#define CLASS_1_D17272E82AE804C2_837__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7A4C0)
#define CLASS_1_D17272E82AE804C2_837__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF79EC0)
#define CLASS_1_D17272E82AE804C2_837__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF79EB0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_837_TypeDefinitionIndex = 31196;

class Class_1_D17272E82AE804C2_837 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_837*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_837*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_837_TypeDefinitionIndex)->GetStaticField(0x54D80);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NAEACGPKNNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_837* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_837*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_837*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_837*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_837* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_837*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_837* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_837*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_837* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_837*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_837_MERGEFROM_1_OFFSET))(this, a1);
	}
};
