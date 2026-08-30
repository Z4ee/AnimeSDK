#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_68_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DB3C1A0)
#define CLASS_1_D17272E82AE804C2_68_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB3BDF0)
#define CLASS_1_D17272E82AE804C2_68_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DB3BF20)
#define CLASS_1_D17272E82AE804C2_68_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB3BE50)
#define CLASS_1_D17272E82AE804C2_68_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB3C090)
#define CLASS_1_D17272E82AE804C2_68_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DB3C260)
#define CLASS_1_D17272E82AE804C2_68_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DB3C230)
#define CLASS_1_D17272E82AE804C2_68_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DB3BE30)
#define CLASS_1_D17272E82AE804C2_68_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DB3BD70)
#define CLASS_1_D17272E82AE804C2_68_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DB3BE40)
#define CLASS_1_D17272E82AE804C2_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DB3BDA0)
#define CLASS_1_D17272E82AE804C2_68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB3C0C0)
#define CLASS_1_D17272E82AE804C2_68_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DB3C120)
#define CLASS_1_D17272E82AE804C2_68__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB3C3C0)
#define CLASS_1_D17272E82AE804C2_68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB3BDC0)
#define CLASS_1_D17272E82AE804C2_68__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3BDB0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_68_TypeDefinitionIndex = 25610;

class Class_1_D17272E82AE804C2_68 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_68*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_68_TypeDefinitionIndex)->GetStaticField(0x35090);
	}
	// static const ::System::Int32 FDJBMJHPBGK = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 OFAGPEOKFKD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_68*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_68*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_68*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_68* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_68*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_68*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_68_MERGEFROM_1_OFFSET))(this, a1);
	}
};
