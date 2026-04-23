#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_F64CEA2EBA77404D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C83660)
#define CLASS_1_F64CEA2EBA77404D_CLONE_OFFSET UNITYSDK_OFFSET(0x19C831F0)
#define CLASS_1_F64CEA2EBA77404D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C832B0)
#define CLASS_1_F64CEA2EBA77404D_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C83280)
#define CLASS_1_F64CEA2EBA77404D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C833A0)
#define CLASS_1_F64CEA2EBA77404D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C83920)
#define CLASS_1_F64CEA2EBA77404D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C83840)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C83250)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C83220)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C83070)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C83260)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C83230)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x19C83240)
#define CLASS_1_F64CEA2EBA77404D_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x19C83270)
#define CLASS_1_F64CEA2EBA77404D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C830A0)
#define CLASS_1_F64CEA2EBA77404D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C834D0)
#define CLASS_1_F64CEA2EBA77404D_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C83530)
#define CLASS_1_F64CEA2EBA77404D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C83A60)
#define CLASS_1_F64CEA2EBA77404D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C83110)
#define CLASS_1_F64CEA2EBA77404D__CTOR_OFFSET UNITYSDK_OFFSET(0x19C830B0)

inline static constexpr unsigned int Class_1_F64CEA2EBA77404D_TypeDefinitionIndex = 32040;

class Class_1_F64CEA2EBA77404D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F64CEA2EBA77404D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F64CEA2EBA77404D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F64CEA2EBA77404D_TypeDefinitionIndex)->GetStaticField(0x61950);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F64CEA2EBA77404D_TypeDefinitionIndex)->GetStaticField(0x61958);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F64CEA2EBA77404D_TypeDefinitionIndex)->GetStaticField(0x61960);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_11; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Field_1_6; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F64CEA2EBA77404D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F64CEA2EBA77404D*))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F64CEA2EBA77404D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F64CEA2EBA77404D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F64CEA2EBA77404D* Clone()
	{
		return ((::Class_1_F64CEA2EBA77404D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F64CEA2EBA77404D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F64CEA2EBA77404D*))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F64CEA2EBA77404D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F64CEA2EBA77404D*))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F64CEA2EBA77404D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
