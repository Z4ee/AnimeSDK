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

#define CLASS_1_6FC4D75D938BC053_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2274F0)
#define CLASS_1_6FC4D75D938BC053_CLONE_OFFSET UNITYSDK_OFFSET(0x1A226FB0)
#define CLASS_1_6FC4D75D938BC053_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2270C0)
#define CLASS_1_6FC4D75D938BC053_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A227060)
#define CLASS_1_6FC4D75D938BC053_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A227190)
#define CLASS_1_6FC4D75D938BC053_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A227730)
#define CLASS_1_6FC4D75D938BC053_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2276C0)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A227040)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A227020)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A226DC0)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A227010)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A227000)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A227050)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A227030)
#define CLASS_1_6FC4D75D938BC053_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A226E20)
#define CLASS_1_6FC4D75D938BC053_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A227360)
#define CLASS_1_6FC4D75D938BC053_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2273C0)
#define CLASS_1_6FC4D75D938BC053__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A227880)
#define CLASS_1_6FC4D75D938BC053__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A226EC0)
#define CLASS_1_6FC4D75D938BC053__CTOR_OFFSET UNITYSDK_OFFSET(0x1A226E30)

inline static constexpr unsigned int Class_1_6FC4D75D938BC053_TypeDefinitionIndex = 23757;

class Class_1_6FC4D75D938BC053 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_TypeDefinitionIndex)->GetStaticField(0x3E600);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_TypeDefinitionIndex)->GetStaticField(0x3E608);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_TypeDefinitionIndex)->GetStaticField(0x3E610);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6FC4D75D938BC053* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053* Clone()
	{
		return ((::Class_1_6FC4D75D938BC053*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6FC4D75D938BC053* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6FC4D75D938BC053* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_MERGEFROM_1_OFFSET))(this, a1);
	}
};
