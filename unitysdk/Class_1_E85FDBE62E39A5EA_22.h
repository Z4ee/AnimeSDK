#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_99;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181A2BD0)
#define CLASS_1_E85FDBE62E39A5EA_22_CLONE_OFFSET UNITYSDK_OFFSET(0x181A2800)
#define CLASS_1_E85FDBE62E39A5EA_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181A2920)
#define CLASS_1_E85FDBE62E39A5EA_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x181A2840)
#define CLASS_1_E85FDBE62E39A5EA_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181A29D0)
#define CLASS_1_E85FDBE62E39A5EA_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181A2D10)
#define CLASS_1_E85FDBE62E39A5EA_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181A2C70)
#define CLASS_1_E85FDBE62E39A5EA_22_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x181A2830)
#define CLASS_1_E85FDBE62E39A5EA_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181A2720)
#define CLASS_1_E85FDBE62E39A5EA_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181A2AC0)
#define CLASS_1_E85FDBE62E39A5EA_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x181A2B20)
#define CLASS_1_E85FDBE62E39A5EA_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x181A2DC0)
#define CLASS_1_E85FDBE62E39A5EA_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181A2770)
#define CLASS_1_E85FDBE62E39A5EA_22__CTOR_OFFSET UNITYSDK_OFFSET(0x181A2730)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_22_TypeDefinitionIndex = 26586;

class Class_1_E85FDBE62E39A5EA_22 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_99*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_99*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_22_TypeDefinitionIndex)->GetStaticField(0xD670);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_99*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_22*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_22* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_99*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_99*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_22*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_22*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
