#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_23.h"
#include "unitysdk/System/Object.h"

class Class_1_87B6445D24FE4E47;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_2AC9AD1E6333334B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A830240)
#define CLASS_1_2AC9AD1E6333334B_CLONE_OFFSET UNITYSDK_OFFSET(0x1A82FD40)
#define CLASS_1_2AC9AD1E6333334B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A82FE30)
#define CLASS_1_2AC9AD1E6333334B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A82FE00)
#define CLASS_1_2AC9AD1E6333334B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A82FF50)
#define CLASS_1_2AC9AD1E6333334B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A830570)
#define CLASS_1_2AC9AD1E6333334B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A830450)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A82FDE0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A82FDD0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A82FBE0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A82FD80)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A82FD70)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A82FDB0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A82FDF0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A82FDC0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A82FDA0)
#define CLASS_1_2AC9AD1E6333334B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A82FD90)
#define CLASS_1_2AC9AD1E6333334B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A82FC10)
#define CLASS_1_2AC9AD1E6333334B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A830060)
#define CLASS_1_2AC9AD1E6333334B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8300C0)
#define CLASS_1_2AC9AD1E6333334B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8306C0)
#define CLASS_1_2AC9AD1E6333334B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A82FC60)
#define CLASS_1_2AC9AD1E6333334B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A82FC20)

inline static constexpr unsigned int Class_1_2AC9AD1E6333334B_TypeDefinitionIndex = 24859;

class Class_1_2AC9AD1E6333334B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2AC9AD1E6333334B*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2AC9AD1E6333334B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC9AD1E6333334B_TypeDefinitionIndex)->GetStaticField(0x51680);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_87B6445D24FE4E47*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_87B6445D24FE4E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC9AD1E6333334B_TypeDefinitionIndex)->GetStaticField(0x51688);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::Proto::ItemList* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x20
	::System::Boolean Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::Enum_3_0A3761FE34514D6C_23 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2AC9AD1E6333334B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AC9AD1E6333334B*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2AC9AD1E6333334B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2AC9AD1E6333334B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2AC9AD1E6333334B* Clone()
	{
		return ((::Class_1_2AC9AD1E6333334B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_23))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2AC9AD1E6333334B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2AC9AD1E6333334B*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2AC9AD1E6333334B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AC9AD1E6333334B*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
