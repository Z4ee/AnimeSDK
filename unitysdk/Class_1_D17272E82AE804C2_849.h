#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_849_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E297300)
#define CLASS_1_D17272E82AE804C2_849_CLONE_OFFSET UNITYSDK_OFFSET(0x1E296F50)
#define CLASS_1_D17272E82AE804C2_849_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E297080)
#define CLASS_1_D17272E82AE804C2_849_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E296FB0)
#define CLASS_1_D17272E82AE804C2_849_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2971F0)
#define CLASS_1_D17272E82AE804C2_849_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2973C0)
#define CLASS_1_D17272E82AE804C2_849_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E297390)
#define CLASS_1_D17272E82AE804C2_849_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E296F90)
#define CLASS_1_D17272E82AE804C2_849_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E296ED0)
#define CLASS_1_D17272E82AE804C2_849_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E296FA0)
#define CLASS_1_D17272E82AE804C2_849_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E296F00)
#define CLASS_1_D17272E82AE804C2_849_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E297220)
#define CLASS_1_D17272E82AE804C2_849_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E297280)
#define CLASS_1_D17272E82AE804C2_849__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E297520)
#define CLASS_1_D17272E82AE804C2_849__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E296F20)
#define CLASS_1_D17272E82AE804C2_849__CTOR_OFFSET UNITYSDK_OFFSET(0x1E296F10)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_849_TypeDefinitionIndex = 31727;

class Class_1_D17272E82AE804C2_849 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_849*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_849*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_849_TypeDefinitionIndex)->GetStaticField(0x50250);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NAEACGPKNNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_849* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_849*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_849*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_849*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_849* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_849*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_849* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_849*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_849* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_849*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_849_MERGEFROM_1_OFFSET))(this, a1);
	}
};
