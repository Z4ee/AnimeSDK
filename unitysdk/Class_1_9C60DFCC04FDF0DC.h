#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9C60DFCC04FDF0DC_Enum_3_2E741879C8CDBAFC_25.h"
#include "unitysdk/System/Object.h"

class Class_1_58D4E6FABD47E257;
class Class_1_70D2E0F3216AAE0C_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9C60DFCC04FDF0DC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B5F2C0)
#define CLASS_1_9C60DFCC04FDF0DC_CLONE_OFFSET UNITYSDK_OFFSET(0x19B5ECF0)
#define CLASS_1_9C60DFCC04FDF0DC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B5EDA0)
#define CLASS_1_9C60DFCC04FDF0DC_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B5ED70)
#define CLASS_1_9C60DFCC04FDF0DC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B5EF50)
#define CLASS_1_9C60DFCC04FDF0DC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B5F660)
#define CLASS_1_9C60DFCC04FDF0DC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B5F470)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B5ED20)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19B5ED50)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x19B5EC70)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B5EAA0)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19B5ED40)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B5ED30)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19B5ED60)
#define CLASS_1_9C60DFCC04FDF0DC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19B5ECD0)
#define CLASS_1_9C60DFCC04FDF0DC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B5EAD0)
#define CLASS_1_9C60DFCC04FDF0DC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B5F100)
#define CLASS_1_9C60DFCC04FDF0DC_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B5F160)
#define CLASS_1_9C60DFCC04FDF0DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B5F810)
#define CLASS_1_9C60DFCC04FDF0DC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B5EB30)
#define CLASS_1_9C60DFCC04FDF0DC__CTOR_OFFSET UNITYSDK_OFFSET(0x19B5EAE0)

inline static constexpr unsigned int Class_1_9C60DFCC04FDF0DC_TypeDefinitionIndex = 32712;

class Class_1_9C60DFCC04FDF0DC : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_58D4E6FABD47E257*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_58D4E6FABD47E257*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C60DFCC04FDF0DC_TypeDefinitionIndex)->GetStaticField(0x5540);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_9C60DFCC04FDF0DC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9C60DFCC04FDF0DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C60DFCC04FDF0DC_TypeDefinitionIndex)->GetStaticField(0x5548);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x766; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_58D4E6FABD47E257*>* Field_1_6; // 0x20
	::Class_1_9C60DFCC04FDF0DC_Enum_3_2E741879C8CDBAFC_25 Field_1_9; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9C60DFCC04FDF0DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9C60DFCC04FDF0DC*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9C60DFCC04FDF0DC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9C60DFCC04FDF0DC* Clone()
	{
		return ((::Class_1_9C60DFCC04FDF0DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_58D4E6FABD47E257*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_58D4E6FABD47E257*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_70D2E0F3216AAE0C_1* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_70D2E0F3216AAE0C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_70D2E0F3216AAE0C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_1*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_9C60DFCC04FDF0DC_Enum_3_2E741879C8CDBAFC_25 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_9C60DFCC04FDF0DC_Enum_3_2E741879C8CDBAFC_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9C60DFCC04FDF0DC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9C60DFCC04FDF0DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9C60DFCC04FDF0DC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
