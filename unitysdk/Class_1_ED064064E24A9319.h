#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED064064E24A9319_Enum_3_FCBB2C507E9B21A3_36.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1092;
class Class_1_DB9F32FCA772D309_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ED064064E24A9319_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C351050)
#define CLASS_1_ED064064E24A9319_CLONE_OFFSET UNITYSDK_OFFSET(0x1C350940)
#define CLASS_1_ED064064E24A9319_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C350A30)
#define CLASS_1_ED064064E24A9319_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3509D0)
#define CLASS_1_ED064064E24A9319_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C350D60)
#define CLASS_1_ED064064E24A9319_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C351590)
#define CLASS_1_ED064064E24A9319_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C351230)
#define CLASS_1_ED064064E24A9319_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C350990)
#define CLASS_1_ED064064E24A9319_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C3509B0)
#define CLASS_1_ED064064E24A9319_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C350640)
#define CLASS_1_ED064064E24A9319_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x1C3508C0)
#define CLASS_1_ED064064E24A9319_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1C350840)
#define CLASS_1_ED064064E24A9319_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C3509A0)
#define CLASS_1_ED064064E24A9319_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C3509C0)
#define CLASS_1_ED064064E24A9319_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C350920)
#define CLASS_1_ED064064E24A9319_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C3508A0)
#define CLASS_1_ED064064E24A9319_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3506A0)
#define CLASS_1_ED064064E24A9319_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C350E60)
#define CLASS_1_ED064064E24A9319_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C350EC0)
#define CLASS_1_ED064064E24A9319__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C351910)
#define CLASS_1_ED064064E24A9319__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3506C0)
#define CLASS_1_ED064064E24A9319__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3506B0)

inline static constexpr unsigned int Class_1_ED064064E24A9319_TypeDefinitionIndex = 32931;

class Class_1_ED064064E24A9319 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ED064064E24A9319*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ED064064E24A9319*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED064064E24A9319_TypeDefinitionIndex)->GetStaticField(0x4F8D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2AE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Object* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Class_1_ED064064E24A9319_Enum_3_FCBB2C507E9B21A3_36 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ED064064E24A9319* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED064064E24A9319*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ED064064E24A9319*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ED064064E24A9319*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ED064064E24A9319* Clone()
	{
		return ((::Class_1_ED064064E24A9319*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_DB9F32FCA772D309_2* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_DB9F32FCA772D309_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_DB9F32FCA772D309_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB9F32FCA772D309_2*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_1092* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_D17272E82AE804C2_1092*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_1092* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1092*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_ED064064E24A9319_Enum_3_FCBB2C507E9B21A3_36 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_ED064064E24A9319_Enum_3_FCBB2C507E9B21A3_36(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ED064064E24A9319* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ED064064E24A9319*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ED064064E24A9319* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED064064E24A9319*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED064064E24A9319_MERGEFROM_1_OFFSET))(this, a1);
	}
};
