#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6FC4D75D938BC053_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A71D6B0)
#define CLASS_1_6FC4D75D938BC053_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A71D1D0)
#define CLASS_1_6FC4D75D938BC053_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A71D290)
#define CLASS_1_6FC4D75D938BC053_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A71D260)
#define CLASS_1_6FC4D75D938BC053_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A71D360)
#define CLASS_1_6FC4D75D938BC053_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A71D8C0)
#define CLASS_1_6FC4D75D938BC053_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A71D850)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A71D240)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A71D200)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A71D230)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A71D220)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A71D010)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A71D250)
#define CLASS_1_6FC4D75D938BC053_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A71D210)
#define CLASS_1_6FC4D75D938BC053_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A71D040)
#define CLASS_1_6FC4D75D938BC053_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A71D530)
#define CLASS_1_6FC4D75D938BC053_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A71D590)
#define CLASS_1_6FC4D75D938BC053_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A71D9F0)
#define CLASS_1_6FC4D75D938BC053_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A71D0E0)
#define CLASS_1_6FC4D75D938BC053_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71D050)

inline static constexpr unsigned int Class_1_6FC4D75D938BC053_6_TypeDefinitionIndex = 32462;

class Class_1_6FC4D75D938BC053_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_6_TypeDefinitionIndex)->GetStaticField(0x390F0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_6*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_6_TypeDefinitionIndex)->GetStaticField(0x390F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_6_TypeDefinitionIndex)->GetStaticField(0x39100);
	}
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6FC4D75D938BC053_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_6*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053_6* Clone()
	{
		return ((::Class_1_6FC4D75D938BC053_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6FC4D75D938BC053_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6FC4D75D938BC053_6*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6FC4D75D938BC053_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_6*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
