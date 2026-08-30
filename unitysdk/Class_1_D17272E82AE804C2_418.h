#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_418_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB20270)
#define CLASS_1_D17272E82AE804C2_418_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB1FE50)
#define CLASS_1_D17272E82AE804C2_418_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB1FFE0)
#define CLASS_1_D17272E82AE804C2_418_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB1FF00)
#define CLASS_1_D17272E82AE804C2_418_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB200B0)
#define CLASS_1_D17272E82AE804C2_418_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB20450)
#define CLASS_1_D17272E82AE804C2_418_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB20400)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EB1FEC0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1EB1FEE0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EB1FEA0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB1FDC0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EB1FED0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1EB1FEF0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EB1FEB0)
#define CLASS_1_D17272E82AE804C2_418_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB1FDF0)
#define CLASS_1_D17272E82AE804C2_418_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB200E0)
#define CLASS_1_D17272E82AE804C2_418_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB20140)
#define CLASS_1_D17272E82AE804C2_418__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB205F0)
#define CLASS_1_D17272E82AE804C2_418__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB1FE10)
#define CLASS_1_D17272E82AE804C2_418__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1FE00)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_418_TypeDefinitionIndex = 28480;

class Class_1_D17272E82AE804C2_418 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_418_TypeDefinitionIndex)->GetStaticField(0x52160);
	}
	// static const ::System::Int32 KOEOEHIMOEI = 0x5; // 0x0
	// static const ::System::Int32 AODKNNMBGAD = 0x8; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 LJDBCGPFFDH; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x1C
	::System::UInt32 IBEBBFIHLLP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_418* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_418*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_418* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_418*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_418* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_418*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_418* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_418*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_MERGEFROM_1_OFFSET))(this, a1);
	}
};
