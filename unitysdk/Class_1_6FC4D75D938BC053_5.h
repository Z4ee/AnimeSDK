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

#define CLASS_1_6FC4D75D938BC053_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A189390)
#define CLASS_1_6FC4D75D938BC053_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1A188EC0)
#define CLASS_1_6FC4D75D938BC053_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A188F80)
#define CLASS_1_6FC4D75D938BC053_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A188F50)
#define CLASS_1_6FC4D75D938BC053_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A189040)
#define CLASS_1_6FC4D75D938BC053_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A189580)
#define CLASS_1_6FC4D75D938BC053_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A189510)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A188F10)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A188EF0)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A188F40)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A188F30)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A188D00)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A188F20)
#define CLASS_1_6FC4D75D938BC053_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A188F00)
#define CLASS_1_6FC4D75D938BC053_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A188D30)
#define CLASS_1_6FC4D75D938BC053_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A189210)
#define CLASS_1_6FC4D75D938BC053_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A189270)
#define CLASS_1_6FC4D75D938BC053_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1896B0)
#define CLASS_1_6FC4D75D938BC053_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A188DD0)
#define CLASS_1_6FC4D75D938BC053_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A188D40)

inline static constexpr unsigned int Class_1_6FC4D75D938BC053_5_TypeDefinitionIndex = 32460;

class Class_1_6FC4D75D938BC053_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_5_TypeDefinitionIndex)->GetStaticField(0x2E2A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_5_TypeDefinitionIndex)->GetStaticField(0x2E2A8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_5_TypeDefinitionIndex)->GetStaticField(0x2E2B0);
	}
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6FC4D75D938BC053_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_5*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053_5* Clone()
	{
		return ((::Class_1_6FC4D75D938BC053_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6FC4D75D938BC053_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6FC4D75D938BC053_5*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6FC4D75D938BC053_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_5*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
