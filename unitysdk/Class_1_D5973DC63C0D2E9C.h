#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5973DC63C0D2E9C_Enum_3_FCBB2C507E9B21A3_4.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_144;
class Class_1_D17272E82AE804C2_145;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D5973DC63C0D2E9C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197F5D40)
#define CLASS_1_D5973DC63C0D2E9C_CLONE_OFFSET UNITYSDK_OFFSET(0x197F57E0)
#define CLASS_1_D5973DC63C0D2E9C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197F58B0)
#define CLASS_1_D5973DC63C0D2E9C_EQUALS_OFFSET UNITYSDK_OFFSET(0x197F5850)
#define CLASS_1_D5973DC63C0D2E9C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197F5AC0)
#define CLASS_1_D5973DC63C0D2E9C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197F6140)
#define CLASS_1_D5973DC63C0D2E9C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197F5E90)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x197F5830)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197F5500)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x197F5760)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x197F56E0)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x197F5840)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x197F57C0)
#define CLASS_1_D5973DC63C0D2E9C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x197F5740)
#define CLASS_1_D5973DC63C0D2E9C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197F5560)
#define CLASS_1_D5973DC63C0D2E9C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197F5BE0)
#define CLASS_1_D5973DC63C0D2E9C_WRITETO_OFFSET UNITYSDK_OFFSET(0x197F5C40)
#define CLASS_1_D5973DC63C0D2E9C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F6350)
#define CLASS_1_D5973DC63C0D2E9C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197F5580)
#define CLASS_1_D5973DC63C0D2E9C__CTOR_OFFSET UNITYSDK_OFFSET(0x197F5570)

inline static constexpr unsigned int Class_1_D5973DC63C0D2E9C_TypeDefinitionIndex = 25284;

class Class_1_D5973DC63C0D2E9C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D5973DC63C0D2E9C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D5973DC63C0D2E9C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5973DC63C0D2E9C_TypeDefinitionIndex)->GetStaticField(0x645B0);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_D5973DC63C0D2E9C_Enum_3_FCBB2C507E9B21A3_4 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D5973DC63C0D2E9C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D5973DC63C0D2E9C*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D5973DC63C0D2E9C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D5973DC63C0D2E9C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D5973DC63C0D2E9C* Clone()
	{
		return ((::Class_1_D5973DC63C0D2E9C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_144* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_D17272E82AE804C2_144*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_144* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_144*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_145* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_D17272E82AE804C2_145*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_145* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_145*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_D5973DC63C0D2E9C_Enum_3_FCBB2C507E9B21A3_4 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_D5973DC63C0D2E9C_Enum_3_FCBB2C507E9B21A3_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D5973DC63C0D2E9C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D5973DC63C0D2E9C*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D5973DC63C0D2E9C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D5973DC63C0D2E9C*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D5973DC63C0D2E9C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
