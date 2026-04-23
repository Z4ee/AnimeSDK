#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_566C2164039D239A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192F7C50)
#define CLASS_1_566C2164039D239A_CLONE_OFFSET UNITYSDK_OFFSET(0x192F76F0)
#define CLASS_1_566C2164039D239A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192F77D0)
#define CLASS_1_566C2164039D239A_EQUALS_OFFSET UNITYSDK_OFFSET(0x192F77A0)
#define CLASS_1_566C2164039D239A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192F78E0)
#define CLASS_1_566C2164039D239A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192F7F90)
#define CLASS_1_566C2164039D239A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192F7E30)
#define CLASS_1_566C2164039D239A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x192F7770)
#define CLASS_1_566C2164039D239A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x192F7730)
#define CLASS_1_566C2164039D239A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x192F7750)
#define CLASS_1_566C2164039D239A_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x192F7790)
#define CLASS_1_566C2164039D239A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x192F7720)
#define CLASS_1_566C2164039D239A_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192F74D0)
#define CLASS_1_566C2164039D239A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x192F7780)
#define CLASS_1_566C2164039D239A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x192F7740)
#define CLASS_1_566C2164039D239A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x192F7760)
#define CLASS_1_566C2164039D239A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192F7500)
#define CLASS_1_566C2164039D239A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192F7AD0)
#define CLASS_1_566C2164039D239A_WRITETO_OFFSET UNITYSDK_OFFSET(0x192F7B30)
#define CLASS_1_566C2164039D239A__CCTOR_OFFSET UNITYSDK_OFFSET(0x192F81C0)
#define CLASS_1_566C2164039D239A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192F75A0)
#define CLASS_1_566C2164039D239A__CTOR_OFFSET UNITYSDK_OFFSET(0x192F7510)

inline static constexpr unsigned int Class_1_566C2164039D239A_TypeDefinitionIndex = 25506;

class Class_1_566C2164039D239A : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_566C2164039D239A*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_566C2164039D239A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_566C2164039D239A_TypeDefinitionIndex)->GetStaticField(0x5E170);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_566C2164039D239A_TypeDefinitionIndex)->GetStaticField(0x5E178);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_566C2164039D239A_TypeDefinitionIndex)->GetStaticField(0x5E180);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x4; // 0x0
	::Class_1_4BC858D7C27E10ED_12* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::UInt32 Field_1_10; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_566C2164039D239A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_566C2164039D239A*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_566C2164039D239A*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_566C2164039D239A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_566C2164039D239A* Clone()
	{
		return ((::Class_1_566C2164039D239A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4BC858D7C27E10ED_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4BC858D7C27E10ED_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4BC858D7C27E10ED_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_12*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_566C2164039D239A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_566C2164039D239A*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_566C2164039D239A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_566C2164039D239A*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
