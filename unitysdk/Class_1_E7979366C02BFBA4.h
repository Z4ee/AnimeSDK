#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7979366C02BFBA4_Enum_3_FCBB2C507E9B21A3_22.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_476;
class Class_1_D17272E82AE804C2_477;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7979366C02BFBA4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A37560)
#define CLASS_1_E7979366C02BFBA4_CLONE_OFFSET UNITYSDK_OFFSET(0x19A37000)
#define CLASS_1_E7979366C02BFBA4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A370D0)
#define CLASS_1_E7979366C02BFBA4_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A37070)
#define CLASS_1_E7979366C02BFBA4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A372E0)
#define CLASS_1_E7979366C02BFBA4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A37960)
#define CLASS_1_E7979366C02BFBA4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A376B0)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19A37050)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A36D20)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x19A36F80)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x19A36F00)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19A37060)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19A36FE0)
#define CLASS_1_E7979366C02BFBA4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19A36F60)
#define CLASS_1_E7979366C02BFBA4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A36D80)
#define CLASS_1_E7979366C02BFBA4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A37400)
#define CLASS_1_E7979366C02BFBA4_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A37460)
#define CLASS_1_E7979366C02BFBA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A37B80)
#define CLASS_1_E7979366C02BFBA4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A36DA0)
#define CLASS_1_E7979366C02BFBA4__CTOR_OFFSET UNITYSDK_OFFSET(0x19A36D90)

inline static constexpr unsigned int Class_1_E7979366C02BFBA4_TypeDefinitionIndex = 28144;

class Class_1_E7979366C02BFBA4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E7979366C02BFBA4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E7979366C02BFBA4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7979366C02BFBA4_TypeDefinitionIndex)->GetStaticField(0x29220);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_E7979366C02BFBA4_Enum_3_FCBB2C507E9B21A3_22 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7979366C02BFBA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7979366C02BFBA4*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E7979366C02BFBA4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E7979366C02BFBA4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7979366C02BFBA4* Clone()
	{
		return ((::Class_1_E7979366C02BFBA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_476* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D17272E82AE804C2_476*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_476* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_476*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_477* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_D17272E82AE804C2_477*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_477* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_477*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_E7979366C02BFBA4_Enum_3_FCBB2C507E9B21A3_22 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_E7979366C02BFBA4_Enum_3_FCBB2C507E9B21A3_22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7979366C02BFBA4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7979366C02BFBA4*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7979366C02BFBA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7979366C02BFBA4*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7979366C02BFBA4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
