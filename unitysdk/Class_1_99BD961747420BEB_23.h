#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_304;
class Class_1_FCCDDA66801E0833;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4A330)
#define CLASS_1_99BD961747420BEB_23_CLONE_OFFSET UNITYSDK_OFFSET(0x17E49DE0)
#define CLASS_1_99BD961747420BEB_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E49EF0)
#define CLASS_1_99BD961747420BEB_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E49E90)
#define CLASS_1_99BD961747420BEB_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E49FE0)
#define CLASS_1_99BD961747420BEB_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4A620)
#define CLASS_1_99BD961747420BEB_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4A510)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E49E60)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E49E30)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17E49E80)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E49E50)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E49E70)
#define CLASS_1_99BD961747420BEB_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E49E40)
#define CLASS_1_99BD961747420BEB_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E49C50)
#define CLASS_1_99BD961747420BEB_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4A180)
#define CLASS_1_99BD961747420BEB_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4A1E0)
#define CLASS_1_99BD961747420BEB_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4A770)
#define CLASS_1_99BD961747420BEB_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E49CD0)
#define CLASS_1_99BD961747420BEB_23__CTOR_OFFSET UNITYSDK_OFFSET(0x17E49C60)

inline static constexpr unsigned int Class_1_99BD961747420BEB_23_TypeDefinitionIndex = 24543;

class Class_1_99BD961747420BEB_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FCCDDA66801E0833*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FCCDDA66801E0833*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_23_TypeDefinitionIndex)->GetStaticField(0x28970);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_304*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_304*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_23_TypeDefinitionIndex)->GetStaticField(0x28978);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_304*>* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FCCDDA66801E0833*>* Field_1_10; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_23* Clone()
	{
		return ((::Class_1_99BD961747420BEB_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_304*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_304*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FCCDDA66801E0833*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FCCDDA66801E0833*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
