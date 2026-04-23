#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_814_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1974D0F0)
#define CLASS_1_D17272E82AE804C2_814_CLONE_OFFSET UNITYSDK_OFFSET(0x1974CEF0)
#define CLASS_1_D17272E82AE804C2_814_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1974CFB0)
#define CLASS_1_D17272E82AE804C2_814_EQUALS_OFFSET UNITYSDK_OFFSET(0x1974CF50)
#define CLASS_1_D17272E82AE804C2_814_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1974D000)
#define CLASS_1_D17272E82AE804C2_814_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1974D1B0)
#define CLASS_1_D17272E82AE804C2_814_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1974D180)
#define CLASS_1_D17272E82AE804C2_814_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1974CF30)
#define CLASS_1_D17272E82AE804C2_814_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1974CE70)
#define CLASS_1_D17272E82AE804C2_814_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1974CF40)
#define CLASS_1_D17272E82AE804C2_814_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1974CEA0)
#define CLASS_1_D17272E82AE804C2_814_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1974D030)
#define CLASS_1_D17272E82AE804C2_814_WRITETO_OFFSET UNITYSDK_OFFSET(0x1974D090)
#define CLASS_1_D17272E82AE804C2_814__CCTOR_OFFSET UNITYSDK_OFFSET(0x1974D220)
#define CLASS_1_D17272E82AE804C2_814__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1974CEC0)
#define CLASS_1_D17272E82AE804C2_814__CTOR_OFFSET UNITYSDK_OFFSET(0x1974CEB0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_814_TypeDefinitionIndex = 31234;

class Class_1_D17272E82AE804C2_814 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_814*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_814*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_814_TypeDefinitionIndex)->GetStaticField(0x568E0);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_814* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_814*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_814*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_814*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_814* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_814*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_814* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_814*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_814* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_814*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_814_MERGEFROM_1_OFFSET))(this, a1);
	}
};
